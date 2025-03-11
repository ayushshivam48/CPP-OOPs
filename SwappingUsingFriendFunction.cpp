// WAP to swap two no by using third variable and without using 3rd variable with using frnd function
#include <iostream>
using namespace std;

class Swap {
private:
    int a, b;

public:
    // Constructor to initialize numbers
    Swap(int x, int y) : a(x), b(y) {}

    // Friend functions for swapping
    friend void swapWithThirdVar(Swap &obj);
    friend void swapWithoutThirdVar(Swap &obj);

    // Function to display the numbers
    void display() const {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

// Function to swap using a third variable
void swapWithThirdVar(Swap &obj) {
    int temp = obj.a;
    obj.a = obj.b;
    obj.b = temp;
    cout << "Swapped using third variable: ";
    obj.display();
}

// Function to swap without using a third variable
void swapWithoutThirdVar(Swap &obj) {
    obj.a = obj.a + obj.b;
    obj.b = obj.a - obj.b;
    obj.a = obj.a - obj.b;
    cout << "Swapped without third variable: ";
    obj.display();
}

int main() {
    // Initialize the Swap object
    Swap obj(10, 20);

    cout << "Before swapping: ";
    obj.display();

    // Swap using a third variable
    swapWithThirdVar(obj);

    // Swap back to original using no third variable
    swapWithoutThirdVar(obj);

    // Display your details
    cout << "\nName: Ayush Shivam" << endl;
    cout << "Enrollment no: A45304823048" << endl;
    cout << "Class: BCA 3 A" << endl;

    return 0;
}
