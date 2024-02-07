class Student:
    def __init__(self, name="", age=0, gender=False):
        self.name = name
        self.age = age
        self.gender = gender
        print("default constructor" if not name else "parameterized constructor")

    def print_info(self):
        print(self.name)
        print(self.age)
        print(self.gender)

    def __copy__(self):
        return Student(self.name, self.age, self.gender)

if __name__ == "__main__":
    # Default constructor
    s1 = Student()
    s1.print_info()

    # Parameterized constructor
    s2 = Student("shubham", 21, True)
    s2.print_info()

    # Copy constructor
    s3 = s2.__copy__()
    s3.print_info()

