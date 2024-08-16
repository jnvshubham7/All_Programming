## USER
Class and Objects.
Feature/characteristics of OOPs.
Compile time and Runtime polymorphism.
Variable scopes.
static (variables, Functions, Objects).
Inheritence (Type and Mode)
Virtual (Functions and Class)
Abstract class and Interface.
Friend function and Friend class.
Call by value, refrence.
This pointer
Abstraction
Exception Handling
Constructor and Destructor.
Copy constructor
copy assignemnt operator
Refrences variable
Const (variable, Function, Arguement)
Overloading (Function, Constructor, Operator)
Function overriding and Inline function.

## ASSISTANT
### Class and Objects:

- **Class:** A blueprint or template for creating objects. It defines a data structure along with methods to operate on that data.
  
- **Object:** An instance of a class. It represents a real-world entity and has characteristics (attributes) and behaviors (methods).

### Features/Characteristics of OOPs (Object-Oriented Programming):

1. **Encapsulation:** Bundling of data and methods that operate on that data into a single unit (class), hiding the internal details from the outside world.

2. **Inheritance:** A mechanism by which a new class inherits properties and behaviors from an existing class, promoting code reuse.

3. **Polymorphism:** The ability of a class to take on multiple forms. It includes compile-time (method overloading) and runtime (method overriding) polymorphism.

4. **Abstraction:** Simplifying complex systems by modeling classes based on the essential properties and behaviors, ignoring non-essential details.

### Compile Time and Runtime Polymorphism:

- **Compile-time polymorphism:** Achieved through function overloading and operator overloading. The decision is made at compile time.

- **Runtime polymorphism:** Achieved through function overriding. The decision is made at runtime.

### Variable Scopes:

- **Local Variable:** Defined within a function or a block and is only accessible within that scope.

- **Global Variable:** Defined outside any function or block, making it accessible throughout the program.

- **Class Variable (Static Member Variable):** Shared by all instances of a class. It's declared with the `static` keyword.

### Static (Variables, Functions, Objects):

- **Static Variables:** Shared by all instances of a class. They are declared with the `static` keyword and exist throughout the program's execution.

- **Static Functions:** Belong to the class rather than an instance. They can be called using the class name.

- **Static Objects:** Instances of a class that retain their values even when the class is out of scope.

### Inheritance (Type and Mode):

- **Type of Inheritance:**
  - Single Inheritance: A class inherits from only one base class.
  - Multiple Inheritance: A class inherits from more than one base class.
  - Multilevel Inheritance: A derived class is created from another derived class.

- **Mode of Inheritance:**
  - Public Inheritance: Public members of the base class become public members of the derived class.
  - Protected Inheritance: Public and protected members of the base class become protected members of the derived class.
  - Private Inheritance: Public and protected members of the base class become private members of the derived class.

### Virtual (Functions and Class):

- **Virtual Functions:** Functions declared with the `virtual` keyword in the base class, which can be overridden by derived classes.

- **Virtual Class:** A class that contains at least one virtual function.

### Abstract Class and Interface:

- **Abstract Class:** A class that cannot be instantiated and may contain one or more pure virtual functions. It serves as a base class for other classes.

- **Interface:** A collection of abstract methods without any implementation. A class can implement multiple interfaces.

### Friend Function and Friend Class:

- **Friend Function:** A function that is not a member of a class but has access to its private and protected members.

- **Friend Class:** A class that is not a member of another class but has access to its private and protected members.

### Call by Value, Reference:

- **Call by Value:** Passing the actual value to a function. Changes made to the parameter inside the function do not affect the original value.

- **Call by Reference:** Passing the reference or memory address of the variable to a function. Changes made to the parameter inside the function affect the original value.

### This Pointer:

- **This Pointer:** A pointer that refers to the current instance of the class. It is used to differentiate between the class members and the parameters with the same name.

### Abstraction:

- **Abstraction:** The process of hiding complex implementation details and showing only the necessary features of an object.

### Exception Handling:

- **Exception Handling:** The process of responding to the occurrence of exceptions (errors) during the execution of a program. It includes `try`, `catch`, `throw`, and `finally` blocks.

### Constructor and Destructor:

- **Constructor:** A special member function used for initializing objects. It has the same name as the class and is automatically called when an object is created.

- **Destructor:** A special member function used for releasing resources and cleaning up after an object. It has the same name as the class preceded by a tilde (`~`).

### Copy Constructor:

- **Copy Constructor:** A special constructor that creates a new object as a copy of an existing object.

### Copy Assignment Operator:

- **Copy Assignment Operator:** An operator (`=`) used for assigning the values of one object to another.

### References Variable:

- **Reference Variable:** A variable that acts as an alias for another variable. It is declared using the `&` symbol.

### Const (Variable, Function, Argument):

- **Const Variable:** A variable whose value cannot be changed after initialization.

- **Const Function:** A function that does not modify the object's state.

- **Const Argument:** A function parameter that cannot be modified within the function.

### Overloading (Function, Constructor, Operator):

- **Function Overloading:** Defining multiple functions with the same name but different parameters.

- **Constructor Overloading:** Defining multiple constructors within a class, each with a different set of parameters.

- **Operator Overloading:** Defining new behaviors for existing operators.

### Function Overriding and Inline Function:

- **Function Overriding:** Providing a specific implementation of a function in a derived class that is already defined in the base class.

- **Inline Function:** A function that is expanded in line when it is invoked, reducing the function call overhead.

If you have specific questions about any of these concepts or if you'd like more detailed explanations, feel free to ask!