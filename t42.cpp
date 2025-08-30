#include <iostream>
using namespace std;

class TIME {
private:
    int hour;
    int minutes;

public:
    // Default constructor
    TIME() : hour(0), minutes(0) {}

    // Parameterized constructor
    TIME(int h, int m) : hour(h), minutes(m) {}

    // Conversion constructor: converts int (total minutes) to TIME
    TIME(int totalMinutes) {
        hour = totalMinutes / 60;
        minutes = totalMinutes % 60;
    }

    void displayTime() const {
        cout << "Time: " << hour << " hour(s) and " << minutes << " minute(s)" << endl;
    }
};

int main() {
    int totalMinutes = 135;  // example total minutes

    // Convert integer to TIME object using conversion constructor
    TIME t = totalMinutes;

    t.displayTime();  // Output: Time: 2 hour(s) and 15 minute(s)

    return 0;
}
