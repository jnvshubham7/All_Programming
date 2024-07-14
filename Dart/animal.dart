// File: animal.dart
class Animal {
  // Public property
  String name;


  // Private property
  int _age;


  // Getter for private property

  int get age => _age;

  //setter for private property
  set age(int value) => _age = value;



  //create the age as public property
  // int age;

  // Constructor
  Animal(this.name, this._age);

  // Public method or function
  void makeSound() {
    print('$name makes a sound.');
  }

  // Private method or funtion
  // void _describeAge() {
  //   print('$name is $_age years old.');
  // }

  // Public method to access private method

  // void describe() {
  //   print('$name is $age years old.');
  // }




  // Public method to access private method
  // void describe() {
  //   _describeAge();
  // }







}