#include <iostream>
using namespace std;

class Student{
    int id;
    string name; // Add name member
public:
    Student(){
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter id: ";
        cin >> id;
    }
    void Studentdisplay(){
        cout << "Student Name: " << name << endl;
        cout << "The ID of the student is: " << id << endl;
    }
};

class Mark{
    int mark;
public:
    Mark(){
        cout << "Enter mark: ";
        cin >> mark;
    }
    friend class Result;
    void Markdisplay(){
        cout << "The Mark of the student is: " << mark << endl;
    }
};

class Result:public Student, public Mark{
    int result;
public:
    Result(){
        result = mark;
    }
    void display(){
        Student::Studentdisplay();
        Mark::Markdisplay();
        cout << "The Result of the student is: " << result << endl;
    }
};

int main() {
    const int n = 10;
    Result students[n];

    for (int i = 0; i < n; i++) {
        cout << "\nDetails for student " << i + 1 << ":" << endl;
        students[i].display();
    }
    return 0;
}