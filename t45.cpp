#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Overload '-' operator to find Euclidean distance between two points
    double operator-(const Point& p) const {
        int dx = x - p.x;
        int dy = y - p.y;
        return sqrt(dx * dx + dy * dy);
    }

    void display() const {
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    Point p1(3, 4);
    Point p2(0, 0);

    double distance = p1 - p2;  // Using overloaded '-' operator
    cout << "Euclidean distance between ";
    p1.display();
    cout << " and ";
    p2.display();
    cout << " = " << distance << endl;

    return 0;
}