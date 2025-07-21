#include <iostream>
using namespace std;


class Employee {
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); //Declaration
        void getData() {
           cout <<"The value of a is "<< a << endl;
           cout <<"The value of b is "<< b << endl;
           cout <<"The value of c is "<< c << endl;
           cout <<"The value of d is "<< d << endl;
           cout <<"The value of e is "<< e << endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
    d=10;
    e=20;
}

int main() {
    // a=4; // This will throw an error as a is private and cannot be accessed directly
    Employee Kritagya;
    Kritagya.setData(5, 6, 7);
    Kritagya.getData();
    return 0;
}