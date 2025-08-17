#include <iostream>
#include <cstring>
using namespace std;

// union is used for better memory management
// union can store only one value at a time
// struct can store multiple values at a time
// enum is used to define a set of named integer constants
// typedef is used to create an alias for a data type


typedef struct employee
{
    int id;
    string name;
    int salary;
} ep;

// union student
// {
//     int id;
//     char name[100];
//     float roll_no;
// };

int main() {

    ep harry;
    harry.id = 1;
    harry.name = "Harry";
    harry.salary = 50000;
    cout << "Employee ID: " << harry.id << endl;
    cout << "Employee Name: " << harry.name << endl;
    cout << "Employee Salary: " << harry.salary << endl;

    // next

    // union student s1;
    // s1.id = 10;
    // cout << "ID: " << s1.id << endl;

    // // In c++ we can't directly assign a string to a char array
    // // We need to use strcpy function from cstring library
    // strcpy(s1.name, "Rohit");
    // cout << "Name: " << s1.name << endl;

    // s1.roll_no = 45;
    // cout << "Roll No: " << s1.roll_no << endl;

    // // next


    // enum days {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    // cout << "Enum value for Wednesday: " << Wednesday << endl;

return 0;
}

