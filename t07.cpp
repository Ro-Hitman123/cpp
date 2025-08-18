
#include<iostream>
#include<conio.h>
using namespace std;
class Name{
	public:
		virtual void show()=0;		
};
class District:public Name{
	public:
		void show(){
			cout<<"My District Name is Kapilvastujgjy"<<endl;
		}
};
class Campus:public Name{
	public:
		void show(){
			cout<<"My Campus Name is BMC, Bhairahawa"<<endl;
		}
};
int main(){
	Name *p;
	District obj2;
	p=&obj2;
		p->show();
	Campus obj3;
		p=&obj3;

	p->show();
	return 0;
}
