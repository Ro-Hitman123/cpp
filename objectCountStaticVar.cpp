#include<iostream>
using namespace std;

class Student
{
private:
    static int count;
    char name[30];
public:

//constructor > increase count whar object is created!
    Student(){
        count++;
    }

    void setData(){
        cout<<"Enter your name: ";
        cin>>name;
    }
    
    void showData(){
        cout<<"Student Name: "<<name<<endl;
    }
    static void showCount(){
        cout<<"Total student objects: "<<count<<endl<<endl;
    }
};

int Student :: count = 0;

int main(){

    Student s1;
    s1.setData();
    s1.showData();
    Student::showCount();

    Student s2,s3;
    Student::showCount();
    s2.setData();
    s2.showData();

    s3.setData();
    s3.showData();

    Student::showCount();



return 0;
}