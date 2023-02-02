#include <iostream>
using namespace std;

void solve(int n){
    for(int i = 0; i < n; i++){
        if(i % 2 == 0)
            cout<<1<<" ";
        else
            cout<<0<<" ";
    }
    cout<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin >> n;
	    solve(n);

	}
	return 0;
}