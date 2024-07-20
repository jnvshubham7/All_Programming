// Interfaces in Dart
// In Dart, an interface is an abstract type that defines a set of 
//methods and properties that a class must implement. Unlike some 
//other languages where interfaces are declared explicitly, in Dart,
// any class can be used as an interface. This is because Dart classes 
//are implicitly interfaces.




//  class Animal {
//   void makeSound(); // Abstract method
//   void sleep(); // Abstract method
// }


// this will give error
// error: The non-abstract class 'Animal' is missing 
//implementations for these members:
//  - Animal.makeSound
//  - Animal.sleep
//makeSound' must have a method body because 'Animal' isn't abstract.
// Try making 'Animal' abstract, or adding a body to 'makeSound'.


// simple example of interface
abstract class Animal {
  void makeSound(); // Abstract method
  void sleep(); // Abstract method
}

//implements keyword ====>>>>> is used to implement an 
//interface in a class.

//extends keyword ====>>>>> is used to inherit a 
//class in another class.


// Implementing the interface
class Dog implements Animal {
  @override
  void makeSound() {
    print('Bark!');
  }

  @override
  void sleep() {
    print('Dog is sleeping.');
  }
}

class Cat implements Animal {
  @override
  void makeSound() {
    print('Meow!');
  }

  @override
  void sleep() {
    print('Cat is sleeping.');
  }
}

void main() {
  // Creating instances of the classes that implement the interface
  Animal myDog = Dog();
  Animal myCat = Cat();

  // Calling methods
  myDog.makeSound(); // Output: Bark!
  myDog.sleep(); // Output: Dog is sleeping.

  myCat.makeSound(); // Output: Meow!
  myCat.sleep(); // Output: Cat is sleeping.
}
