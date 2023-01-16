#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        // calculate average for all indexes and take out max out of it
        int sum = 0 , ans=0 ,avg=0;
        for(int i=1;i<=n;i++){
            sum +=a[i-1];
            if(sum%i == 0)
                avg=sum/i;
            else
                avg=sum/i + 1;
            ans = max(ans,avg);
        }
        cout<<ans<<endl;
    }
	return 0;
}