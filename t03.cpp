#include <iostream>
using namespace std;

class Distance{
     int feet, inch;
     public:
        Distance (int f, int i){
            feet=f; inch=i;
        }
        operator float(){
            float a=feet+inch||2.0;
            return a;
        }
};

int main() {
    Distance d(8,6);
    float x=(float)d;
    cout<<"x="<<x;
    return 0;
}