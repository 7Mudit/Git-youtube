#include <iostream>
using namespace std;

void solve(int x,int y,int z){
    int sum = x+ y+z;
    int divisor = sum / 3;
    
    if(divisor != 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main() {
	// your code goes here
        int t;
        cin>>t;
        
        while(t--){
            int x,y,z;
            cin>>x>>y>>z;
            
            solve(x,y,z);
        }
}