#include <iostream>
using namespace std;
#include<vector>
#include<climits>
#include<algorithm>

#define ll long long

bool solve(int n , vector<ll> arr ,ll mid)
{
    vector<ll> newArray =arr;
    if(newArray[0] > mid){
        return false;
    }
    for(int i = 1 ; i < n ; i++){
        if(newArray[i-1] < mid)
    }
    
    
    
    
    return true;
    
}
int main() {
	// your code goes here
	int t;
	
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<ll> arr[n];
	    for(int i=0 ; i < n ;i++)
	        cin>>arr[i];
	   //starting number
	    ll  i = 0;
	   // ending number
	    ll  j = *max_element(arr.begin(),arr.end());
	    
	    ll ans = LONG_MAX;
	    
	    while( i <= j){
	        ll mid = i + (j-i) / 2;
	        
	        if(solve(n , arr ,mid )){
	            ans = min(ans,mid);
	            j = mid - 1;
	        }
	        else{
	            i = mid + 1;
	        }
	    }
	    
	    cout<<ans<<endl;
	}
	
	return 0;
}
