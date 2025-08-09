#include <iostream>
using namespace std;

class Shape{
    protected:
        float p,l,b;
    public:
        void setvalue(int x, int y){
            l=x;
            b=y;
        }
};

class square:public Shape{
    public:
        void find_perimeter(){
            p=4*l;
            cout<<"perimeter="<<p<<endl;
        }
};

int main() {
    Shape bo, *bp;
    square s;
    bp=&s;
    bp->setvalue(3,3);
    s.find_perimeter();
    return 0;
}