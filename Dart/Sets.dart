// Sets
// Theory: A set is a collection of unique elements.
//Sets are unordered, meaning the order of elements is not maintained.

void main() {
  Set<int> numbers = {1, 2, 3, 4, 5, 5, 5, 5, 5, 5, 5};

  //Two elements in a set literal shouldn't be equal.
// Change or remove the duplicate elements in the set.

  //length of set
  int len = numbers.length;
  // print(len);

  // Adding elements
  numbers.add(8888);
  print(numbers);

  //how to check if an element is in a set or not

  print(numbers.contains(8888)); //true

  print(numbers.contains(9999)); //false

  //contains method is used to check if an element is in a set or not.







  print(numbers.elementAt(3)); 

  //print all elements of set

  for (int i = 0; i < numbers.length; i++) {
    // print(numbers[i]);

    print(numbers.elementAt(i));
    //elementAt() method is used to access elements of a set by their index.
  }



  //without using loop print all elements of set

  print(numbers);









  // Accessing elements
  // print(numbers[0]);  // Error: The operator '[]' isn't defined for the class 'Set<int>'.

  // In Dart, a Set is an unordered collection of unique elements,
  // which means it does not maintain the order of elements,
  // and you cannot directly access elements by their index as
  // you would in a List. However, if you need to access elements
  // by index, you can convert the Set to a List first.

  List<int> numbersList = numbers.toList();
  //toList() method is used to convert a set to a list.

  // Accessing elements
  // print(numbersList[4]);
}
