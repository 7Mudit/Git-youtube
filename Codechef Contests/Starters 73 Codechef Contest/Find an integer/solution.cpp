#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    long long int x, y;
	    cin>>x>>y;
	    
	   // logic
	   
	   // n + y = ax
	   // n + x = by
	   
	   // n= ax - y = xy - x -y
	   // n= by - x = xy - x - y
	   //equating these equation
	   // ax - y = by - x
	   // ax + x = by + y
	   
	   // x(a+1) = y(b+1)
	   //lets say a=y-1 and b=x-1
	   // xy = xy
	   
	   long long int ans= x*y -x -y;
	   // 1 1 = 3(1*1) -1 -1
	   if(ans <= 0)
	        ans=3*(x*y)- x - y;
	   cout<<ans<<endl;
	   

	}
	
}