#include<bits/stdc++.h>
#include "functions.h"
<<<<<<< HEAD
=======

>>>>>>> add-rec-function
using namespace std;


int iterative_gcd(int x, int y){
	// x is larger initially
	if(x < y) swap(x,y);
	while(y > 0){
		x  = x % y;
		swap(x,y);
	}
	return x;
}
<<<<<<< HEAD
=======


int recursive_gcd(int x, int y){
	if(y == 0) return x;
 	if(x < y) swap(x,y);
	return recursive_gcd(y, x%y);
}

>>>>>>> add-rec-function
