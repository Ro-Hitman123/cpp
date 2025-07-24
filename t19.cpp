#include <iostream>
using namespace std;

class Point{
    int x, y;
    public:
    Point(int , int);
    void display() {
        cout << "The Point is (" << x << ", " << y << ")" << endl;
    }
};

    Point::Point(int a, int b)
     {
        x = a;
        y = b;
    }

int main() {
    Point p1(3,4);
    p1.display();
    Point p2(5,6);
    p2.display();
    return 0;
}