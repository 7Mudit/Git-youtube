#include <iostream>
using namespace std;
typedef long long ll;


// ek odd element lo array ka ek even element ka array ka aur usko odd bna diya mera x h even even | odd = odd

// odd ^ odd = even
// odd ^ even = odd
// even ^ even = even

// do number lene h unka xor krdo fir uska bitwise or
// xor ka result odd ana chahiye

// odd | even = odd
// even | even = even
// odd | odd = odd

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n,x;
	    
	    cin>>n>>x;
	    
	    int a[n];
	    
	    for(int i = 0; i < n;i++){
	        cin>>a[i];
	    }
	    
	    int evenNumbers = 0;
	    
	    for(int i = 0 ;i < n;i++){
	        if(a[i] % 2 == 0)
	            evenNumbers++;
	    }
	    
	   // odd case
	    if(x % 2 != 0){
            if(evenNumbers % 2 == 0)
                cout<<evenNumbers/2 <<endl;
            else
                cout<<evenNumbers/2 +1<<endl;
	    }
	   // even case
	    else{
	        if(evenNumbers == n)
	            cout<<-1<<endl;
	         else
	            cout<<evenNumbers<<endl;
	    }
	    
	}
	return 0;
}