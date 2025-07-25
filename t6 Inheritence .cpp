// inheritance is a way to create a new class based on an existing class
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog dog;
    dog.eat();  // Calling base class method
    dog.bark(); // Calling derived class method
    return 0;
}       


// polymorphism is the method to take different forms
// dynamic bindiing is the process in which code is executed at runtime based on the type of object