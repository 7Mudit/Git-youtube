#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n , y;
        cin>>n >> y;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        int result= arr[0];
        for(int i=1;i<n;i++){
            result|=arr[i];
        }
        result =y-result;
        int ans=result & y;
        if(ans == result)
            cout<< result << endl;
        else
            cout<< -1<<endl;
    
}
	
	return 0;
}