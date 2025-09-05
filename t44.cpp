#include<iostream>
using namespace std;
class dollar;
class rupee {
double amount;
public:
rupee(){ amount=0;}
rupee(double amt){amount=amt;}
void display (){
cout<<amount<<endl;
}
operator dollar();
};
class dollar {
double amount;
public:
dollar(){ amount=0;}
dollar(double amt){ amount=amt;}
void display(){
cout<<amount<<endl; }
operator rupee()
{
double r=amount*133;
return (rupee (r));
}
};
rupee::operator dollar()
{
double d= amount/133;
return (dollar (d));
}
int main()
{
int choice;
cout<<"Enter 1 to convert dollar to rupee"<<endl;
cout<<"Enter 2 to convert rupee to dollar"<<endl;
cin>>choice;
double amt;
if(choice==1){

cout<<"enter amount in dollar"<<endl;
cin>>amt;
dollar D(amt);
rupee R = D;
cout<<"equivalent amount in rupee= Rs. " ;
R.display();
}
else
{
cout<<"enter amount in rupee"<<endl;
cin>>amt;
rupee R(amt);
dollar D= R;
cout<<"equivalent amount in dollar = $ ";
D.display();
}
return 0;
}