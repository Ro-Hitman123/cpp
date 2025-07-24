#include <iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;

    public:
    Simple(int x = 1, int y = 2, int z = 5) {
        data1 = x;
        data2 = y;
        data3 = z;
    }
    void PrintNum() {
        cout << "Values are: " << data1 << ", " << data2 << ", " << data3 << endl;
    }
};

int main() {
    Simple s(1);
    s.PrintNum();

    return 0;
}