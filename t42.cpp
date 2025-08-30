#include <iostream>
using namespace std;

class TIME {
private:
    int hour;
    int minutes;

public:
    // Constructor using member initializer list
    TIME(int h, int m) : hour(h), minutes(m) {}

    void displayTime() {
        cout << "Time: " << hour << " hour(s) and " << minutes << " minute(s)" << endl;
    }
};

int main() {
    TIME t(2, 45);   // Initialize TIME object to 2 hours 45 minutes
    t.displayTime();

    return 0;
}
