
// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;



int main() {
	// your code goes here

	 int t;
	 cin>>t;
	 
	 while(t--){
	     int n;
	     cin>>n;
	     int a[n];
	     
	     for(int i=0;i<n;i++)
	        cin>>a[i];
	        
	    for(int i=1;i<n;i++){
	        a[i]=a[i]^a[i-1];
	        a[i-1]=0;
	    }
	    
	    int temp = n;
	    for(int i=0; i< n ;i++){
	        if(a[i]!=0)
	            temp--;
	    }
	    if(n == temp){
	    	        cout<<"YES"<<endl;
	    	        continue;
	    }
	    if(n-1 == temp){
	        if(temp % 2==0)
	            cout<<"YES"<<endl;
	        else
	            cout<<"NO"<<endl;
	    continue;
	    }
	    cout<<"NO"<<endl;

	    
	 }
	
	return 0;
}