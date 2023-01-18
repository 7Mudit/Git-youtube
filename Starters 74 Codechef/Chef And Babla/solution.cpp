#include <iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   // an integer x for which all postive element are greater than that number
	   // an integer x for which all negative elements are less than number number
	   //[-X,X]
	        
	    long long rangeFirst = INT_MIN;
	    long long rangeSecond = INT_MAX;
	    
	    for(int i=0;i<n;i++){
         // calculating minimum for positive elemnts
	        if(a[i] >=0 && a[i] < rangeSecond)
	            rangeSecond = a[i];
	            
	       // calculating maximum for negative elemnts
	        if(a[i] < 0 && a[i] > rangeFirst)
	            rangeFirst=a[i];
	    }
	    long long ans=min(rangeSecond,abs(rangeFirst));
	    cout<<ans-1<<endl;
	}
	return 0;
}