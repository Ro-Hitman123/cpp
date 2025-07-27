#include <iostream>
using namespace std;

// Base class
class Employee{
    public:
        int id;
        float salary;
        Employee(){}
        Employee(int inpID){
            id = inpID;
            salary = 34.0;
        }
};

// Derived Class Syntax
/*class {{derived-class name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
};

Note:     
1. Default visibility mode is private
2. Pubic visibility mode: Public members of the base class becomes Public members of the derived class
3. Private visibility mode: Public members of the base class becomes Private members of the derived class
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee{
public:
    int languageCode = 9;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}

