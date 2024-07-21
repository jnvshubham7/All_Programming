//Queue 
// it is a collection of elements that follows 
//the FIFO (First In First Out) order.
// real life example of queue 
//is a line of people waiting for a bus

//technical example of queue is printer queue
//where the printer prints documents in the order they are sent to the printer.


import 'dart:collection';

void main() {
  // Creating a queue
  // Queue<int> queue = Queue();

  // // Adding elements to the queue
  // queue.add(10);
  // queue.add(20);
  // queue.add(30);
  // queue.add(40);
  // queue.add(50);

  // // Accessing elements
  // print(queue.first); // 10
  // print(queue.last); // 50

  // // Removing elements from the queue
  // queue.removeFirst();
  // queue.removeLast();

  // print(queue.first); // 20
  // print(queue.last); // 40

  // // Length of the queue
  // print(queue.length); // 3

  // // Clear the queue
  // queue.clear();

  // print(queue.length); // 0


  // // Check queue is empty or not
  // print(queue.isEmpty); // true

  

  //2nd example

  // Creating a queue of string of name 

  Queue<String> name = Queue();

  // Adding elements to the queue
  name.add("John");
  name.add("Doe");
  name.add("Alex");
  name.add("Smith");
  name.add("David");


  // Accessing elements
  print(name.first); // John

  print(name.last); // David



  //iterating over the queue

  // for (var nm in name )
  // {
  //   print(nm);
  // }

  for(int i=0; i<name.length; i++)
  {
    print(name.elementAt(i));
  }






}




