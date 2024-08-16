## USER
Explain Encapsulation.

## ASSISTANT
**Encapsulation** is one of the four fundamental principles of object-oriented programming (OOP), the others being inheritance, polymorphism, and abstraction. Encapsulation involves bundling the data (attributes or properties) and the methods (functions or procedures) that operate on the data into a single unit known as a **class**. The primary goal of encapsulation is to restrict access to certain components of an object and prevent the accidental modification of its internal state.

Here are key aspects of encapsulation:

1. **Data Hiding:**
   - Attributes of a class are often marked as private or protected, restricting direct access from outside the class.
   - This prevents external code from directly manipulating or changing the internal state of an object.

2. **Access Control:**
   - Access to the internal components of a class is controlled through methods (getters and setters).
   - Getters allow controlled access to retrieve the values of private attributes.
   - Setters enable controlled modification of attribute values, often with validation or additional logic.

3. **Implementation Independence:**
   - The internal details of the class are hidden from the outside world.
   - External code interacts with the class through a well-defined interface (public methods), making it independent of the internal implementation details.

4. **Enhanced Security and Maintenance:**
   - By encapsulating the implementation details, encapsulation enhances security by preventing unauthorized access to critical data.
   - Maintenance becomes easier because changes to the internal implementation do not affect external code as long as the interface remains consistent.

5. **Example in Java:**
   ```java
   public class Circle {
       private double radius;

       public Circle(double radius) {
           this.radius = radius;
       }

       // Getter method
       public double getRadius() {
           return radius;
       }

       // Setter method
       public void setRadius(double newRadius) {
           if (newRadius > 0) {
               this.radius = newRadius;
           } else {
               System.out.println("Invalid radius value.");
           }
       }

       // Method to calculate area
       public double calculateArea() {
           return Math.PI * radius * radius;
       }
   }
   ```

In the example above, the `Circle` class encapsulates the radius data and provides controlled access through getter and setter methods, demonstrating encapsulation principles in action.