#include<iostream> 
#include "functions.h"

using namespace std; 

int factorial(int n){

    //Check for negative numbers and getting a new number from user
    if(n<0){
        return -1; 

    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
