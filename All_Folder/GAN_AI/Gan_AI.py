
import csv

def process_trades(trades):
    paired_trades = []
    inventory = {}

    for trade in trades:
        time, symbol, side, price, quantity = trade

      
        if not price:
            continue

        price = float(price)
        quantity = int(quantity)

        if symbol not in inventory:
            inventory[symbol] = {'B': [], 'S': []}

        if side == 'B':
            inventory[symbol]['B'].append((time, quantity, price))
        else:
            inventory[symbol]['S'].append((time, quantity, price))

    cumulative_pnl = 0

    for symbol, sides in inventory.items():
        for b_trade in sorted(sides['B'], key=lambda x: x[0]):
            open_time, open_quantity, open_price = b_trade
            close_quantity = 0
            pnl = 0

            for s_trade in sorted(sides['S'] + inventory[symbol].get('SS', []), key=lambda x: x[0]):
                close_time, close_quantity, close_price = s_trade
                paired_quantity = min(open_quantity, close_quantity)

                pnl += paired_quantity * (close_price - open_price)
                open_quantity -= paired_quantity
                close_quantity -= paired_quantity

                if close_quantity == 0:
                    break

            if pnl != 0:
                paired_trades.append((open_time, close_time, symbol, paired_quantity, pnl, 'B', 'S', open_price, close_price))
                cumulative_pnl += pnl

               
                sides['S'] = [s_trade for s_trade in sides['S'] if s_trade[0] != close_time]
                if close_quantity > 0:
                    inventory[symbol].setdefault('SS', []).append((close_time, close_quantity, close_price))

           
            if open_quantity > 0:
                inventory[symbol].setdefault('B', []).append((open_time, open_quantity, open_price))

    return paired_trades, cumulative_pnl

def main():
    with open('demo_trades.csv', newline='') as csvfile:
        reader = csv.reader(csvfile)
        header = next(reader)  
        trades = [line for line in reader]

    paired_trades, cumulative_pnl = process_trades(trades)

   
    print("OPEN_TIME, CLOSE_TIME, SYMBOL, QUANTITY, PNL, OPEN_SIDE, CLOSE_SIDE, OPEN_PRICE, CLOSE_PRICE")
    for trade in sorted(paired_trades, key=lambda x: (x[1], x[0])):
        print(','.join(map(str, trade)))

   
    print(f"{cumulative_pnl:.2f}")

if __name__ == "__main__":
    main()
