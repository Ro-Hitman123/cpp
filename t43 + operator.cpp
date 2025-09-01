#include <iostream>
using namespace std;

class Height {
private:
    int meter;
    int centimeter;

public:
    // Constructor
    Height(int m = 0, int cm = 0) {
        meter = m;
        centimeter = cm;
    }

    // Friend function to overload the + operator
    friend Height operator+(const Height& h1, const Height& h2);

    // Display function
    void display() const {
        cout << meter << " meter(s) and " << centimeter << " centimeter(s)" << endl;
    }
};

// Definition of the friend function
Height operator+(const Height& h1, const Height& h2) {
    Height result;
    result.meter = h1.meter + h2.meter;
    result.centimeter = h1.centimeter + h2.centimeter;

    // Normalize the result (i.e., convert 100 cm = 1 m)
    if (result.centimeter >= 100) {
        result.meter += result.centimeter / 100;
        result.centimeter = result.centimeter % 100;
    }

    return result;
}

// Main function to test the code
int main() {
    Height h1(1, 75); // 1 meter 75 cm
    Height h2(2, 50); // 2 meter 50 cm..

    Height sum = h1 + h2;

    cout << "Height 1: ";
    h1.display();

    cout << "Height 2: ";
    h2.display();

    cout << "Sum of heights: ";
    sum.display();

    return 0;
}
