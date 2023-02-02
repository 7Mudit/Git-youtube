#include <iostream>
using namespace std;
#include<vector>

void solve(int n){
    vector<int> v;
    
    if(n % 2 != 0){
        cout<<-1<<endl;
        return;
    }
    
    // if my index is odd then
    // sum of first starting i elements should be greater than sum of  last i elements
    // if my index is even then
    // sum of first starting i elements should be less than sum of  last i elements
    // input 4 ans 1 -2 2 -1
    for(int i = 1 ; i <= n/2 ; i++ ){
        if(i % 2!=0){
            v.push_back(i);
        }
        else{
            v.push_back(-1*i);
        }
    }
    for(int i = 0 ;i <v.size() ; i++){
        cout<<v[i]<<" ";
    }
    for(int i = v.size()-1 ; i >= 0 ; i--){
        cout<<(-1 * v[i])<<" ";
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