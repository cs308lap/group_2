#include<bits/stdc++.h>
#include "functions.h"
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
