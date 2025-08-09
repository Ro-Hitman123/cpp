#include <iostream>
using namespace std;

class Distance{
    private:
        int feet, inch;
    public:
        Distance (int f, int i){
            feet=f; inch=i;
        }
        Distance (float m){
            feet=int(m);
            inch=12*(m-feet);
        }
        void display(){
            cout<<"feet="<<feet<<endl<<"Inch="<<inch;
        }
};

int main() {
    float f=2.5;
    Distance d=f;
    d.display();
    return 0;
}