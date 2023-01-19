#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    int x=__gcd(a,b);
	    
	    int lcmvalue=lcm(a,x);
	    int gcdvalue=__gcd(b,x);
	    
	    cout<<lcmvalue-gcdvalue<<endl;
	}  
	    
}