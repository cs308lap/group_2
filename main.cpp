#include <iostream>
#include "functions.h"

using namespace std;

int main(){
    print_hello();
    cout<< endl;
    cout<<"The factorial of 5 is "<< factorial(5)<< endl;
    
    int x = 56, y = 98;
    cout<<"GCD of (iterative)"<<x<<" and "<<y<<" is "<<iterative_gcd(x,y)<<"\n";
    cout<<"GCD of (recursive)"<<x<<" and "<<y<<" is "<<recursive_gcd(x,y)<<"\n";
    return 0;
}
