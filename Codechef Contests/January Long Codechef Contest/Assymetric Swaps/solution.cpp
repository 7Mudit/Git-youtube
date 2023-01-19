#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

#define ll  long long
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	
	while(t--){
	    int n ;
	    cin >> n;
	    int a[n];
	    int b[n];
	    
	    for(int i =0 ;i < n ;i++)
	        cin>>a[i];
	    for(int i =0 ;i < n ;i++)
	        cin>>b[i];
	        
	    ll minDifference= LONG_MAX;
	    
	    //logic part
	    vector<ll> allValues;
	    for(int i =0 ; i < n ;i++)
        {
            allValues.push_back(a[i]);
            allValues.push_back(b[i]);
        }
        
        sort(allValues.begin() , allValues.end());
        
        // 1 2 2 2 3 3 4 6
            
        for(int i =0 ; i<=n ;i++){
            ll difference = allValues[n-1+i] - allValues[i];
            minDifference = min(minDifference , difference);
        }
	    
	    cout<<minDifference<<endl;
	}
	
	return 0;
}
