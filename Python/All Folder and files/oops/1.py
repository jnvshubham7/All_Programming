class Car:
    def __init__ (self, brand, year):
        self.brand = brand
        self.year = year
        print("constructor called")

    def dis(self):
        print(f"Brand: {self.brand}, Year: {self.year}")




c1 = Car("BMW", 2020)
c1.dis()
c2 = Car("Audi", 2019)
c2.dis()
c3 = Car("Mercedes", 2018)

c3.dis()


