#include <iostream>
using namespace std;

class Employee {
        int id;
        static int count; // Static variable is used to count all the objects of the class however in other hand if we use a count only then it will count the objects of that class only
    public:
        void setData(void) {
            cout <<"Enter Id of the employee: ";
            cin >> id;
            count++;
        }
        void getData(void) {
            cout <<"The id of this employee is " << id <<  " and this is employee number " << count <<endl;
        }
};
        int Employee:: count;

int main() {
    Employee harry, marry, jerry;
    harry.setData();
    harry.getData();
    marry.setData();
    marry.getData();
    jerry.setData();
    jerry.getData();
    
    return 0;
}