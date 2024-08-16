## USER
Explan 4 Pillars of OOPS, which is like a Object-Oriented Programming, 4 Pillars, Explan. With Example

## ASSISTANT
Object-Oriented Programming (OOP) is based on four fundamental principles, often referred to as the "Four Pillars of OOP." These pillars are:

1. **Encapsulation:**
   - **Definition:** Encapsulation is the bundling of data and the methods that operate on that data into a single unit or class. It restricts direct access to some of an object's components and can prevent unintended interference.
   - **Example:** Consider a `Car` class. Encapsulation allows you to hide the internal details (like the engine, transmission) and expose only necessary methods (like `start()`, `stop()`, `drive()`).

2. **Abstraction:**
   - **Definition:** Abstraction involves simplifying complex systems by modeling classes based on the essential properties and behaviors an object should have. It hides the unnecessary details and focuses on what an object does rather than how it achieves it.
   - **Example:** In a graphical application, you may have an abstract class `Shape` with methods like `draw()` and properties like `color`. Specific shapes like `Circle` and `Square` then inherit from this abstract class, providing their own implementation of `draw()`.

3. **Inheritance:**
   - **Definition:** Inheritance allows a class (subclass or derived class) to inherit the properties and behaviors of another class (superclass or base class). It promotes code reuse and establishes a relationship between classes.
   - **Example:** If you have a `Vehicle` class, you can create a more specialized class like `Car` that inherits from `Vehicle`. The `Car` class inherits common attributes (e.g., `speed`, `fuel`) and methods from `Vehicle` and can also have its own specific attributes and methods.

4. **Polymorphism:**
   - **Definition:** Polymorphism allows objects to be treated as instances of their parent class, but they can take on the form or behavior of their actual class. It enables flexibility in working with different types of objects through a common interface.
   - **Example:** A `Shape` class may have a method `calculateArea()`. Different shapes like `Circle` and `Square` can implement this method differently, but you can use a common interface to calculate the area without knowing the specific shape at compile time.

These four pillars together provide a foundation for creating modular, reusable, and maintainable code in object-oriented programming paradigms.