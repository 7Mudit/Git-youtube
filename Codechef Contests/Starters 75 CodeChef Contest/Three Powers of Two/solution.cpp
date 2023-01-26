#include <iostream>
using namespace std;

void solve(string mudit, int size){
    int cnt=0;
    for(int i = 0; i <size ;i++){
        if(mudit[i] == '1')
            cnt++;
    }
    // exception cases
    if(mudit == "1" || mudit == "10")
    {
        cout<<"NO"<<endl;
    }
    else if(cnt <= 3)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string mudit;
	    cin>>mudit;
	    solve(mudit , n);
	}
	return 0;
}