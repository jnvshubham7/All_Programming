// what is abstraction
// Abstraction is the concept of hiding the complex implementation 
//details and showing only the necessary features of an object.


// Abstract class
abstract class Animal {
  // Abstract method
  void makeSound();

  // Concrete method
  void sleep() {
    print('Sleeping...');
  }
}

// Subclass
class Dog extends Animal {
  // Implementing abstract method
  @override
  void makeSound() {
    print('Bark');
  }



}

void main() {
  Dog dog = Dog();
  dog.makeSound(); // Output: Bark
  dog.sleep(); // Output: Sleeping...
}
