public class MethodOverloadingExample {

    public static void main(String[] args) {
        Calculator calculator = new Calculator();

        // Calling overloaded methods with different parameter lists
        System.out.println("Sum of two integers: " + calculator.add(5, 10)); // Outputs: 15
        System.out.println("Sum of three integers: " + calculator.add(5, 10, 15)); // Outputs: 30
        System.out.println("Sum of two doubles: " + calculator.add(5.5, 10.5)); // Outputs: 16.0
    }
}

class Calculator {
    // Method to add two integers
    public int add(int a, int b) {
        return a + b;
    }

    // Overloaded method to add three integers
    public int add(int a, int b, int c) {
        return a + b + c;
    }

    // Overloaded method to add two doubles
    public double add(double a, double b) {
        return a + b;
    }
}
