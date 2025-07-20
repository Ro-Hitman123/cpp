#include <iostream>
using namespace std;

// Call by reference example using pointers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// // Call by reference using reference variables
// void swapVar(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }


int & swapVar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main() {
    int x = 5, y = 10;
    cout << "Before swap: the value of x is: " << x << ", the value of y is: " << y << endl;
    swap(&x, &y);
    cout << "After swap: the value of x is: " << x << ", and the value of y is: " << y << endl; 
    // cout << "Before swap: the value of x is: " << x << ", the value of y is: " << y << endl;
    // swapVar(x, y);
    // cout << "After swap: the value of x is: " << x << ", and the value of y is: " << y << endl;
    // return 0;

    // cout << "Before swap: the value of x is: " << x << ", the value of y is: " << y << endl;
    // swapVar(x, y) = 100; // This will change the value of x to 100
    // cout << "After swap: the value of x is: " << x << ", and the value of y is: " << y << endl;
    return 0;
}