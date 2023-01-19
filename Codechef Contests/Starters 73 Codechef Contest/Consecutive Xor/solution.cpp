#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int xorOp=0
	    for(int i =0 ;i<n;i++){
	        xorOp^=arr[i];
	    }

	    if(xorOp == 0 || n % 2==1){
	        cout<<"Yes"<<endl;
	    }
	    else
	        cout<<"No"<<endl;
	    
	}
	return 0;
}