#include <iostream>
using namespace std;
#define ll long long
#include<vector>
#include<algorithm>
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int size= 2*n;
	    int a[size];
	    for(int i=0;i<size;i++){
	        cin>>a[i];
	    }
	    
	    vector<ll> difference1;
	    vector<ll> difference2;
	    
	    for(int i=0; i < size; i++){
	        if(a[i] > size/2 && i < size/2)
	            difference1.push_back(i+1);
	        if(a[i] <= size/2 && i >= size/2)
	            difference2.push_back(i+1);
	    }
	    sort(difference1.begin(),difference1.end());
	    sort(difference2.begin(),difference2.end());
	    
	    ll op=0;
	    
	    for(int i=0 ; i < difference1.size() ; i++ )
	           op+=abs(difference1[i] - difference2[i]);
	    cout<<op<<endl;
	        
	    
	}
	return 0;
}
