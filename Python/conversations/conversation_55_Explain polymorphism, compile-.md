## USER
Explain polymorphism, compile-time polymorphism, and run-time polymorphism.

## ASSISTANT
**Polymorphism:**
Polymorphism is a fundamental concept in Object-Oriented Programming (OOP) that allows objects of different types to be treated as objects of a common base type. It enables a single interface to represent different underlying data types or forms. There are two main types of polymorphism: compile-time (static) polymorphism and run-time (dynamic) polymorphism.

1. **Compile-Time Polymorphism (Static Polymorphism):**
   - **Definition:** Compile-time polymorphism occurs when the method or function to be executed is determined during the compile time (before the program runs).
   - **Implementation:** Achieved through method overloading and operator overloading.
   - **Method Overloading:** Involves defining multiple methods in the same class with the same name but different parameter lists (different types or number of parameters).
   - **Example:**
     ```java
     public class MathOperations {
         public int add(int a, int b) {
             return a + b;
         }

         public double add(double a, double b) {
             return a + b;
         }
     }
     ```
   - **Usage:** The appropriate method is selected based on the method signature during compilation.

2. **Run-Time Polymorphism (Dynamic Polymorphism):**
   - **Definition:** Run-time polymorphism occurs when the method or function to be executed is decided during runtime.
   - **Implementation:** Achieved through method overriding and interfaces in Java.
   - **Method Overriding:** Involves providing a specific implementation for a method in a subclass that is already defined in its superclass.
   - **Example:**
     ```java
     public class Animal {
         public void makeSound() {
             System.out.println("Some generic sound");
         }
     }

     public class Dog extends Animal {
         @Override
         public void makeSound() {
             System.out.println("Woof!");
         }
     }
     ```
   - **Usage:** The actual method called is determined by the type of object at runtime.
   - **Usage Example:**
     ```java
     Animal myDog = new Dog();
     myDog.makeSound(); // Calls the makeSound() method of the Dog class
     ```
   - **Interfaces:** Interfaces in Java also enable run-time polymorphism by allowing objects of different classes to be treated as objects of the same interface type.

In summary, polymorphism is the ability of objects of different types to be treated as objects of a common type. Compile-time polymorphism is achieved through method and operator overloading, while run-time polymorphism is achieved through method overriding and interfaces, allowing the selection of the appropriate method at either compile time or runtime, respectively.