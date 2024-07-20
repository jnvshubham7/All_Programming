
// Method Overriding: This is the primary form of polymorphism in Dart, 
//where a subclass provides a specific implementation of a method that is 
//already defined in its superclass.

class Animal {
  void makeSound() {
    print('Animal makes a sound');
  }
}

class Dog extends Animal {
  @override
  void makeSound() {
    print('Woof!');
  }
}

// class Cat extends Animal {
//   @override
//   void makeSound() {
//     print('Meow!');
//   }
// }



void main() {
  Animal myDog = Dog();
  // Animal myCat = Cat();

  myDog.makeSound(); // Outputs: Woof!
  // myCat.makeSound(); // Outputs: Meow!

  // print(myDog.runtimeType); // Outputs: Dog
  // print(myCat.runtimeType); // Outputs: Cat
}
