#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int x,y,z;
	    cin>>x>>y>>z;
	    
	    if(x<y && x<z){
	        cout<<"ALICE"<<endl;
	    }
	    else if(y<x && y<z){
	        cout<<"BOB"<<endl;
	    }
	    else if(z<x && z<y){
	        cout<<"CHARLIE"<<endl;
	    }
	}
	return 0;
}