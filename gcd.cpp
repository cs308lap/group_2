#include<bits/stdc++.h>

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

int main(){
	int x,y;
	cout<<"*** GCD Calculator ***\n\n";
	cout<<"x: ";
	cin>>x;
	cout<<"y: ";
	cin>>y;

	int inbuilt_gcd = __gcd(x,y),        // in-built function
	    custom_gcd = iterative_gcd(x,y); // iterative gcd
	
	cout<<"\nIn-built gcd of "<<x<<" and "<<y<<" is "<<inbuilt_gcd<<"\n";
	cout<<"Custom iterative gcd of the same is "<<custom_gcd<<"\n";
	cout<<"\n*** END ***\n";

	return 0;
}
