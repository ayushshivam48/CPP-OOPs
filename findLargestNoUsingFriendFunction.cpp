// WAP that uses a frnd func to find a largest of two no from two diff classes
#include <iostream>
using namespace std;

class Class1; // Forward declaration of Class1

class Class2 {
private:
    int num2;

public:
    Class2(int n) : num2(n) {}

    // Friend function declaration
    friend int findLargest(Class1, Class2);
};

class Class1 {
private:
    int num1;

public:
    Class1(int n) : num1(n) {}

    // Friend function declaration
    friend int findLargest(Class1, Class2);
};

// Definition of friend function
int findLargest(Class1 obj1, Class2 obj2) {
    return (obj1.num1 > obj2.num2) ? obj1.num1 : obj2.num2;
}

int main() {
    Class1 obj1(10); // Object of Class1
    Class2 obj2(20); // Object of Class2

    cout << "The largest number is: " << findLargest(obj1, obj2) << endl;

    // Display your details
    cout << "\nName: Ayush Shivam" << endl;
    cout << "Enrollment no: A45304823048" << endl;
    cout << "Class: BCA 3 A" << endl;

    return 0;
}
