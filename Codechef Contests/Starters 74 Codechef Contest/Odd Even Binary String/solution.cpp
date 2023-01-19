#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin>>n;
        
        int b[n];
        for(int i=0;i<n;i++)
            cin>>b[i];
        int cnt=0;
        for(auto i : b){
            if(i == 0)
                cnt++;
        }
        if(cnt % 2 == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
