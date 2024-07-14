// File: main.dart
import 'animal.dart';

void main() {
  // Creating an object of Animal class
  Animal cat = Animal('Cat', 80);
  // Animal dog = Animal('Dog', 3);


  //we can use setter for changing the value of private property

  cat.age = 20;

  print(cat.age);





  



  
  // Accessing public property
//  print(cat.name); // Output: Cat
  // print (dog.name);
  
  // Accessing public method or function
 // cat.makeSound(); // Output: Cat makes a sound.
  // dog.makeSound();
  
  // Accessing private property directly (will cause an error)
 // print(cat.age); // Error: The getter '_age' isn't defined for the class 'Animal'.
  
  // Accessing private method directly (will cause an error)
 // cat.describeAge(); // Error: The method '_describeAge' isn't defined for the class 'Animal'.
  
  // Accessing private method through public method
 // cat.describe(); // Output: Cat is 2 years old.

  // dog.describe();


}