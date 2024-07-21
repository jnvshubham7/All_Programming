// Maps
// Theory: A map is a collection of key-value pairs. 
//Each key in a map is unique, 
//and it maps to exactly one value.


void main() {


  List<int> list_num = [11,22,33,44,55];


  // Creating a map
  Map<int,int> map_num = {
    1: 11,
    2: 22,
    3: 33,
    66: 44,
    5: 55,
  };

  // Accessing elements

  print(map_num[66]); // 44



  //string map 

  Map<String, int> marks = {
    'Math': 90,
    'Science': 80,
    'English': 70,
    'History': 60,
    'Geography': 50,
  };

  // Accessing elements

  print(marks['Math']); // 90

  // Modifying elements
  marks['Math'] = 100;

  print(marks['Math']); // 100

  // Adding elements
  marks['Art'] = 95;

  print(marks['Art']); // 95

  print(marks.length); // 6

  // Removing elements
  marks.remove('Art');

  print(marks['Art']); // null

  // Iterating over a map

  marks.forEach((key, value) {
    print('key: value');  // key: value
  });

  //use of $ in dart

  //The $ symbol is used to interpolate the value of a 
  //variable or an expression inside a string.

  marks.forEach((key, value) {
    print('$key: $value');  // 
  });



  //forEach() method is used to iterate over a map.
  //It takes a function as an argument, which is called 
  //for each key-value pair in the map.

  //The function takes two parameters: key and value,
  //which represent the key and value of the current key-value pair.

  // $ is used to interpolate the value of a variable or an expression



  













  // // Creating a map
  // Map<String, int> marks = {
  //   'Math': 90,
  //   'Science': 80,
  //   'English': 70,
  //   'History': 60,
  //   'Geography': 50,
  // };


  

  // // Accessing elements
  // print(marks['Math']); // 90

  // // Modifying elements
  // marks['Math'] = 100;
  // print(marks['Math']); // 100

  // // Adding elements
  // marks['Art'] = 95;
  // print(marks['Art']); // 95

  // // Removing elements
  // marks.remove('Art');
  // print(marks['Art']); // null

  // // Iterating over a map
  // marks.forEach((key, value) {
  //   print('$key: $value');
  // });
}