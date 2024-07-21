// Arrays (Lists)
// Theory: An array (called a List in Dart) is a collection of elements, 
// where each element is identified by an index. Lists are ordered and 
// can contain duplicate elements.

// In Dart, arrays are called lists. Dart lists are zero-indexed,




void main() {
  // Creating a list
  // List<int> numbers = [1, 2, 3, 4, 5];

  List<int> numbers = [55,66,77,88,99,100];


  //length of list
  int len = numbers.length;
  print(len);



  // Accessing elements
  // print(numbers[0]); 

  // Modifying elements
  // numbers[0] = 888;
  // print(numbers[0]);

  // Adding elements
  numbers.add(6);

  len = numbers.length;

  print(len);

  //list ==>>> [55,66,77,88,99,100,6]

  // Removing elements
  numbers.remove(6);

  len = numbers.length;
  print (len);

  //list ==>>> [55,66,77,88,99,100]



  // Iterating over a list
  for (int i = 0; i < numbers.length; i++) {
    print(numbers[i]);
  }


 
}
