## USER
With example,

## ASSISTANT
Certainly! Let's expand on the previous example in C++ to include more interactions with the attributes:

```cpp
#include <iostream>

class Car {
public:
    // Attributes
    std::string brand;
    int year;
    float price;

    // Constructor to initialize attributes
    Car(std::string b, int y, float p) : brand(b), year(y), price(p) {}

    // Method to display car details
    void displayDetails() {
        std::cout << "Brand: " << brand << ", Year: " << year << ", Price: $" << price << std::endl;
    }

    // Method to update the price
    void updatePrice(float newPrice) {
        price = newPrice;
        std::cout << "Price updated to: $" << price << std::endl;
    }
};

int main() {
    // Creating an object of the Car class
    Car myCar("Toyota", 2022, 25000.50);

    // Accessing and displaying attributes
    myCar.displayDetails();

    // Updating the price attribute
    myCar.updatePrice(27000.75);

    // Displaying updated details
    myCar.displayDetails();

    return 0;
}
```

In this extended example, a new method `updatePrice` is added to the `Car` class. This method allows you to modify the `price` attribute of a car. The `main` function demonstrates creating a `Car` object, displaying its initial details, updating the price, and displaying the updated details.

Here, the attributes (`brand`, `year`, and `price`) serve as the internal state of the `Car` object, and methods provide a way to interact with and manipulate this state. This encapsulation allows for better control and organization of the object's behavior and data.