class A:
    def __init__(self,name):
        self.name=name
    def speak(self):
        print(f"{self.name} is speaking")


class B(A):
    def bark(self):
        print(f"{self.name} is barking")




d1 = B("Dog")

d1.speak()
d1.bark()
