## USER
Explicit Encapsulation

## ASSISTANT
Explicit encapsulation refers to a deliberate and intentional application of the encapsulation principle in object-oriented programming (OOP). Encapsulation is one of the four fundamental principles of OOP, alongside inheritance, polymorphism, and abstraction. It involves bundling the data (attributes) and methods (functions) that operate on the data into a single unit known as a class. Explicit encapsulation emphasizes a conscious effort to follow best practices related to encapsulation.

Here's how explicit encapsulation is achieved:

1. **Access Modifiers:**
   - Explicitly define and use access modifiers (such as public, private, protected) to control the visibility and accessibility of class members (attributes and methods).
   - Example:
     ```java
     public class Car {
         private String model; // private attribute
         
         public void startEngine() { // public method
             // code to start the engine
         }
     }
     ```

2. **Getters and Setters:**
   - Use getter and setter methods to provide controlled access to private attributes. This allows for validation and encapsulates the internal representation of the class.
   - Example:
     ```java
     public class Student {
         private String name;

         public String getName() {
             return name;
         }

         public void setName(String newName) {
             // additional validation logic can be added here
             this.name = newName;
         }
     }
     ```

3. **Constructor Initialization:**
   - Encapsulate the initialization of object properties within constructors, ensuring that an object is in a valid state upon creation.
   - Example:
     ```java
     public class Rectangle {
         private int length;
         private int width;

         public Rectangle(int length, int width) {
             this.length = length;
             this.width = width;
         }
     }
     ```

4. **Information Hiding:**
   - Conceal the internal details of the class from the outside world. Only expose what is necessary for the class's functionality.
   - Example:
     ```java
     public class BankAccount {
         private double balance;

         public double getBalance() {
             return balance;
         }
     }
     ```

Explicit encapsulation promotes a clean and well-defined interface for interacting with objects, enhances maintainability, and reduces the likelihood of unintended interference with the internal state of objects. It emphasizes the intentional design choices made to encapsulate and control the visibility of class members.