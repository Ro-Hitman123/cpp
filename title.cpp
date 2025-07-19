#include <iostream>
using namespace std;
int sum(int , int ); // Function prototype
void g();

int main() {
   int num1, num2;
   cout << "Enter first number:"<<endl;
   cin >> num1;
   cout << "Enter second number:"<<endl;
   cin >> num2;
   // num1 and num2 are actual parameters
   cout << "Sum is: " << sum(num1, num2) << endl;
   g();
   return 0;
}
// Formal parameters are a and b which takes the values of num1 and num2 
int sum(int a, int b) {
   int c = a+b;
   return c;
}

void g(){
   cout << "Thank u";
}