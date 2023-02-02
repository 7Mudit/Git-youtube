#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, x,y;
	    cin>>n>>x>>y;
	   //  n stands for number of pages
	   // x stands for number of pages chef can read in a day
	   // y number of days
	   int number_of_pages = x*y;
	   if(number_of_pages >= n)
	        cout<<"YES"<<endl;
	   else
	        cout<<"NO"<<endl;
	}
	return 0;
}
