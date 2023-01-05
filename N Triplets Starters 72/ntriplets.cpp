#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        //solving part
        
        int a=1;
        int b=0;
        int c=0;
        bool flag=false;
        
        
        // time complexity: O(sqrt(n))
        for(int i=2; i < sqrt(n) ; i++){
            if( n % i == 0){
                b=i;
                c=n/i;
                flag=true;
                break;
            }
        }
        if(!flag || b==c)
            cout<<-1<<endl;
        else
            cout<<a<<" "<<b<<" "<<c<<endl;
        
    }
}