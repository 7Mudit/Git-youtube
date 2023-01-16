// code includes debugging please remove cout statements
#include <iostream>
using namespace std;
#define ll long long
#include<algorithm>
#include<vector>

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	    
	   // first array input
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   // second array input
	    for(int i=0;i<n;i++)
	        cin>>b[i];
	    
	    for(int i=0;i<n;i++){
	       // if its lesser we are going to swap it
	        if(a[i] < b[i])
	            swap(a[i],b[i]);
	    }
        cout<<"After swapping printing the first array "<<endl;
        for(int i=0 ;i <n;i++)
            cout<<a[i]<<" ";
        cout<<endl;

        for (int i = 0; i < n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
        

	     // make another 2d combined array
	    vector<vector<int>> combined( n , vector<int> (2)); 
	     
	     for(int i=0 ; i < n ; i++){
	         combined[i][0]=a[i];
	         combined[i][1]=b[i];
	     }

        sort(combined.begin(),combined.end());

        for(int i =0 ;i<n;i++){
            for (int j = 0; j < 2; j++)
            {
                cout<<combined[i][j] << " ";
            }
            cout<<endl;
        }

	     int maximum = combined[n-1][0];
	     int minimum = combined[0][0];
	     
	     int ans = maximum - minimum;
	     
         cout<<"Answer now is " << ans<<endl; 
	   //  now make four arrays
	   int firstMin[n] , firstMax[n] ,lastMin[n] , lastMax[n];
	   
	   firstMin[0] = combined[0][0];
	   lastMin[n-1] = combined[n-1][1];
	   
	   firstMax[0] = combined[0][0];
	   lastMax[n-1] = combined[n-1][1]; 
	   
	   for(int i = 1 ; i < n ; i++){
	       firstMin[i] = min(firstMin[i-1] , combined[i][0]);
           cout<<"First min now at index i = "<<i<<"is " <<firstMin[i]<<endl; 
	       firstMax[i] = max(firstMax[i-1] , combined[i][0]);
           cout<<"First max now at index i = "<<i<<"is " <<firstMax[i]<<endl; 
	   }
 	     
	  for(int i = n-2 ; i >= 0 ; i--){
	      lastMin[i] = min(lastMin[i+1] , combined[i][1]);
           cout<<"Last Min now at index i = "<<i<<"is " <<lastMin[i]<<endl; 
	      lastMax[i] = max(lastMax[i+1] , combined[i][1]);
           cout<<"Last Max now at index i = "<<i<<"is " <<lastMax[i]<<endl; 
	  } 
	  
	  for(int i = n-1 ; i >=0 ; i--){
	      swap(combined[i][0] , combined[i][1]);
	      	  if( i == 0 ){
	            maximum=lastMax[0];
	            minimum=lastMin[0];
	         }
	        else{
	            maximum=max(firstMax[i-1],lastMax[i]);
	            minimum=min(firstMin[i-1],lastMin[i]);
	         }
             cout<<"Maxium is "<< maximum<<endl;
             cout<<"Minimum is "<< minimum<<endl;
	     ans = min(ans,maximum-minimum);
	  }
	  cout << ans<<endl;
	}
	return 0;
}