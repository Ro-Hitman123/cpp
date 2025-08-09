#include <iostream>
using namespace std;

class Distance{
    int feet;
    int inch;
    public:
        Distance(){
            feet=inch=0;
        }
        Distance(int f, int i){
            feet=f;inch=i;
        }
        void display()
        {
            cout<<feet<<"ft  "<<inch<<"inch"<<endl;
        }
};

class Dist{
    int meter,centimeter;
    public:
        Dist(int m, int c){
            meter=m;
            centimeter=c;
        }
        operator Distance(){
            Distance D;
            int f, i;
            f=meter*3.3;
            i=centimeter*0.4;
            f=f+i/12;
            i=i%12;
            return Distance(f, i);
        }
};

int main() {
    Distance D1;
    Dist d2(4,50);
    D1=d2;
    D1.display();
    return 0;
}