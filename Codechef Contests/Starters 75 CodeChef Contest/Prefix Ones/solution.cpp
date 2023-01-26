#include <iostream>
using namespace std;

void solve(string s , int n){
    int ans = 0 ;
    int firstOnes = 0; 
    // if our string starts from store it in our answer otherwise break
    int i = 0;
    
    for( i = 0 ;i < n;i++){
        if(s[i] == '1')
            firstOnes++;
        else
            break;
    }
    
    int secondOnes = 0;
    // count maximum ones coming together in our another substrings
    for(i ; i < n ; i++){
        if(s[i] == '1'){
            int maxOnes = 0;
            while(s[i++] =='1')
                maxOnes++;
            i--;
            secondOnes = max(secondOnes,maxOnes);
        }
            
    }
    ans = secondOnes + firstOnes;
    cout << ans<<endl;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    string mudit;
	    cin>>mudit;
	    
	    solve(mudit,n);
	}
	return 0;
}