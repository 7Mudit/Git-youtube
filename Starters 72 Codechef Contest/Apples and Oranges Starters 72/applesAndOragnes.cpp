#include <iostream>
using namespace std;

//Time complexity: O(log(min(a,b)))
int func(int a,int b){
    //base case
    if(a==0)
        return b;

    //recursive call
    return func(b%a , a);
}

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int n,m;
	    
	    //number of apples and oranges
	    cin>>n>>m;
	    
	    cout<<func(n,m)<<endl;
	    
	    
	}
	
	return 0;
}