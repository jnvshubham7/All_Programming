// what is inheritance in dart

// Inheritance is a mechanism in which one class acquires the properties 
//and behavior of another class. 
//The class that inherits the properties and behavior is known as the subclass 
//(or derived class), and the class that is inherited from is 
//known as the superclass (or base class).

//extends keyword is used to inherit the properties and behavior of a class.

//explain overriding in dart 
// Overriding is a feature that allows a subclass to provide a 
//specific implementation of a method that is already provided 
//by its superclass.

//what is superclass and subclass in dart
//Superclass: The class that is inherited from is known as 
//the superclass (or base class).

//Subclass: The class that inherits the properties and behavior



// Benefits of Using @override
// Compile-time Checking: The Dart compiler will check that 
//the method is indeed overriding a method from the superclass. 
//If there is a mismatch (e.g., method signature differences, 
//method not found in the superclass), the compiler will 
//throw an error.

// Code Readability: It makes the code more readable and clear, 
//indicating to anyone reading the code that a method is 
//being overridden.

class Animal {
  String name;
  
  // Constructor
  Animal(this.name);
  
  // Method
  void makeSound() {
    print('$name makes a sound.');
  }
}

// Dog inherits from Animal
class Dog extends Animal {
  
  // Constructor
  Dog(String name) : super(name);

  // Overriding the makeSound method
  @override
  void makeSound() {
    print('$name barks.');
  }


}

class Cat extends Animal {
  Cat(String name) : super(name);

  // @override
  void makeSound() {
    print('$name meows.');
  }
}




void main() {
  // Creating an object of the Dog class
  Dog dog = Dog('Dog');
  dog.makeSound(); // Output: Dog barks.


  Cat cat = Cat('Cat');
  cat.makeSound();






}
