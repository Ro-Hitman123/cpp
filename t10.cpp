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

        static void getcount(void) {
            // cout << id; // This will throw an error as id is not static and cannot be accessed in a static function
            cout<< "The value of count is " << count << endl;
        }
};
        int Employee:: count = 100; // it will count from 100 and increment it by 1 for each object created

int main() {
    Employee harry, marry, jerry;
    harry.setData();
    harry.getData();
    Employee::getcount();

    marry.setData();
    marry.getData();
    Employee::getcount();

    jerry.setData();
    jerry.getData();
    Employee::getcount();
    
    return 0;
}