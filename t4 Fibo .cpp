#include <iostream>
using namespace std;


// int factorial (int n){
//     if (n<=1){
//         return 1;
//     }
//     return n * factorial(n-1);
// }


// The fibonacci series is a sequence where each number is the sum of the two preceding ones, usually starting with 0 and 1.
// The series starts like this: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main() {
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    // cout<<"The factorial of "<< a << " is " << factorial(a) << endl; 
    cout<<"The term in fibonacci sequence at position "<<a<< " is "<<fib(a)<<endl;
    return 0;
}


