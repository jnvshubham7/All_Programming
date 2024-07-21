// Stack
// Theory: A stack is a linear data structure that follows 
//the Last In, First Out (LIFO) principle. 
//Elements are added and removed from the top of the stack.


//example 
//   stack are  using  in browser history   for undo operation and redo operation 


import 'dart:collection';

void main() {
  // Creating a stack
  List<int> stack = [];

  // Adding elements to the stack
  stack.add(10);
  stack.add(20);
  stack.add(30);
  stack.add(40);
  stack.add(50);


  //structure of stack

  // 50
  // 40
  // 30
  // 20
  // 10

  // Accessing elements
  // print(stack[0]); // 10
  // print(stack[4]); // 50

  // Removing elements from the stack
  // stack.removeLast();
  // stack.removeLast();

  //removeLast() is used to remove the last element from the stack.

  //access the top element of the stack
  print(stack.last); // 30


  stack.removeLast();

  print(stack.last);


  //length of stack
  print(stack.length); // 3

  //clear the stack
  // stack.clear();

  print(stack.length); // 0

  //check stack is empty or not
  print(stack.isEmpty); // true





  // Accessing elements
  // print(stack[3]); // 30
  // print(stack.length); // 3
}



// Queue
