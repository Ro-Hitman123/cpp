// Copy COnstructor in C++

#include <iostream>
using namespace std;

class Number{
    int a;
    public:
    // Default constructor
        Number(){
            a = 0;
        }
        Number (int num){
            a = num;
        }

        // When no copy constructor is found, compiler supplies it's own copy constructor
        Number(Number &obj){
            cout << "Copy constructor called!!! " << endl;
            a = obj.a;
        }

        void display(){
                cout << "The number for this object is " << a << endl;
        }
};

int main() {
    Number x, y, z(10);
    x.display();
    y.display();
    z.display();

    Number z1(z);
    z1.display();

    Number z3 = z;
    z3.display();
    return 0;
}  