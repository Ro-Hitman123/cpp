#include <iostream>
using namespace std;

class Distance{
    int feet,inches;
    public:
    void getdata(){
        cout<<"Enter feet and inch"<<endl;
        cin>>feet>>inches;
    }
    Distance operator + (Distance d2){
        Distance d3;
        d3.feet=feet+d2.feet;
        d3.inches=inches+d2.inches;
        d3.feet=d3.feet+d3.inches/12;
        d3.inches=d3.inches%12;
        return d3;
    }
    void display(){
        cout<<"("<<feet<<","<<inches<<")"<<endl;
    }
};

int main() {
    Distance d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3=d1+d2;
    cout<<"d3="; d1.display();
    cout<<"d1="; d2.display();
    cout<<"d2="; d3.display();
    return 0;
}