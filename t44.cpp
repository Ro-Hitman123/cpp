#include <iostream>
using namespace std;

class dollar; // Forward declaration

class rupee {
    double amount;
public:
    rupee() : amount(0) {}
    rupee(double amt) : amount(amt) {}

    void display() {
        cout << amount << endl;
    }

    // Conversion operator: rupee to dollar
    operator dollar();
};

class dollar {
    double amount;
public:
    dollar() : amount(0) {}
    dollar(double amt) : amount(amt) {}

    void display() {
        cout << amount << endl;
    }

    // Conversion operator: dollar to rupee
    operator rupee() {
        double r = amount * 133;
        return rupee(r);
    }
};

// Define rupee to dollar conversion outside rupee class
rupee::operator dollar() {
    double d = amount / 133;
    return dollar(d);
}

int main() {
    int choice;
    cout << "Enter 1 to convert dollar to rupee" << endl;
    cout << "Enter 2 to convert rupee to dollar" << endl;
    cin >> choice;
    double amt;

    if (choice == 1) {
        cout << "Enter amount in dollar: ";
        cin >> amt;
        dollar D(amt);
        rupee R = D;
        cout << "Equivalent amount in rupee = Rs. ";
        R.display();
    } else {
        cout << "Enter amount in rupee: ";
        cin >> amt;
        rupee R(amt);
        dollar D = R;
        cout << "Equivalent amount in dollar = $ ";
        D.display();
    }
    return 0;
}