#include <iostream>
using namespace std;

class Complex{
    // Creating a constructor
    // Constructor is a special member function with same name as of the class. It is used to initialize the objects of it's class
    // It is automatically invoked whenever an object is created

    int a, b;
    public:
    Complex (void); // Constructor declaration

    void printNumber(){
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(void) // Default constructor definition
{
    a= 0;
    b= 0;
}

int main() {
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}

// Properties of Constructors:

// 1. It should be declared in the public section of the class.
// 2. They are automatically invoked whenever an object is created.
// 3. They cannot return values and do not have return types.
// 4. It can have default arguments.
// 5. We cannot refer to their address.