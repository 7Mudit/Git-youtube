#include <iostream>
using namespace std;

void solve(string s , int n){
    int num_of_zeroes = 0;
    int num_of_ones = 0;
    
    for(int i = 0; i < n ; i++){
        if(s[i] == '0')
            num_of_zeroes++;
        else
            num_of_ones++;
    }
    if(num_of_ones == 0)
        cout<<0<<endl;
    else if(num_of_zeroes == 0)
        cout<<1<<endl;
    else if(num_of_ones > num_of_zeroes)
        cout<<num_of_zeroes + 1<<endl; 
    else
        cout<<num_of_ones<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        solve(s,n);
	       
	}
	return 0;
}