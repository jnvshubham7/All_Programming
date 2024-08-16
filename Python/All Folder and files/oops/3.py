# class dog:
#     def __init__(self,name):
#         self.name = name

#     def bark(self):
#         print(f"{self.name} is barking")


# d1 = dog("dog")

# print(d1.name)
# d1.bark()


#inheritance

# class animal:
#     def speak(self):
#         print("Animal is speaking")

# class dog(animal):
#     def bark(self):
#         print("Dog is barking")


# d1 = dog()
# d1.speak()

# d1.bark()



#encapsulation

# class bankAcc:
#     def __init__(self,bal):
#         self._bal = bal

#     def getBal(self):
#         return self._bal

#     def deposit(self, amt):
#         self._bal += amt

#     def withdraw(self,amt):
#         if amt <=self._bal:
#             self._bal -=amt
#         else:
#             print("Insufficient balance")



# a = bankAcc(1000)
# print(a.getBal())
# a.deposit(1000)
# print(a.getBal())
# a.withdraw(500)
# print(a.getBal())
# a.withdraw(2000)
# print(a.getBal())






#polymorphism


# class cat(animal):
#     def speak(self):
#         print("Cat is speaking")


# class cow(animal):
#     def speak(self):
#         print("Cow is speaking")


# c1 = cat()
# c2 = cow()

# c1.speak()
# c2.speak()










        