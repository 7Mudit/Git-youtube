#include <iostream>
#include<map>
#include<vector>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	   long long n;
	    cin>>n;
	    long long a[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    map<long long,long long> m1;
	    map<long long,long long> m2;
	    
	    for(int i=0;i<n;i++){
	        m1[a[i]]++;
	    }

        // ans vector
	    vector<long long> v(n+1,0);
	    
	    for(int i=n-1;i>=0;i--){

	        v[i] = v[i+1];

	        v[i] = v[i] +  m1[a[i]+1];

	        v[i] = v[i]  -  m2[a[i]-1];

	        m1[a[i]]--;
	        m2[a[i]]++;
	    }
	    long long ans=0;
	    for(int i =0;i<n;i++){
	        ans=max(ans,v[i]);
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}