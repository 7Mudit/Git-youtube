#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=1;i<99;i++)
        {
            if(a % i!=0 && b % i!=0 && c % i != 0){
                cout<<i<<endl;
                break;
            }

        }

    }
	
	return 0;
}