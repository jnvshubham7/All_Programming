
//what is encapsulation?
//Encapsulation is the bundling of data with the methods that operate on that data, 
//or the restricting of direct access to some of an object's components.




class BankAccount {
  // Private field
  double _balance;

  // Constructor
  BankAccount(this._balance);

  // Getter
  double get balance => _balance;

  // Method to deposit money
  void deposit(double amount) {
    _balance += amount;
  }

  // Method to withdraw money
  void withdraw(double amount) {
    if (_balance >= amount) {
      _balance -= amount;
    } else {
      print('Insufficient balance.');
    }
  }
}

void main() {
  BankAccount account = BankAccount(1000);
  account.deposit(500);
  print('Balance: ${account.balance}'); // Output: Balance: 1500
  account.withdraw(200);
  print('Balance: ${account.balance}'); // Output: Balance: 1300
}
