#include <iostream>
using namespace std;

inline int product(int a, int b){
    // Don't use inline if you use static variables inside the function
    // static int c= 0; //This executes only once
    // return a*b+c;//Next time the value of c will be retained
    
    return a*b;
}

int main() {
    int a, b;
    cout << "Enter the value of a and b"<<endl;
    cin>> a >> b;
    cout << "The product of a and b is: " << product(a, b) << endl;
    return 0;
}







// #include <iostream>
// using namespace std;


// int main() {
//     long double age; 
//     string name;

//     cout<<"Enter your name"<<endl;
//     getline(cin, name);
//     cout<<"Enter your age"<<endl;
//     cin>>age; 

//     cout<<"My name is "<< name <<" and my age is " << age <<" years old."<<endl;
//     return 0;

// }