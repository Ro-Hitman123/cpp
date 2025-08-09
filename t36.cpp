#include<iostream>
#include<conio.h>
using namespace std;
inline void sum(int a,int b){
	int s;
	s=a+b;
	cout<<"Sum of two number is:="<<s<<endl;
	s=a-b;
	cout<<"Difference of two number is:="<<s<<endl;
}
int main(){
	int x,y;
	cout<<"Enter the two Numbers"<<endl;
	cin>>x>>y;
	sum(x,y);
	return 0;
}