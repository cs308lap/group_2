#include<iostream> 
#include "functions.h"

using namespace std; 

int factorial(int n){

    //Check for negative numbers and getting a new number from user
    if(n<0){
        int newnum; 
        printf("%s","Negative numbers not allowed!!\n"); 
        printf("%s","Enter a positive numbers: ");
        cin>>newnum; 
        return factorial(newnum); 

    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
