#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(int a ,int b,int c,int d){
    
    
    pair<int,int> p1,p2;
    p1.first=a;
    p1.second=b;
    p2.first = c;
    p2.second = d;
    vector<pair<int,int>> v;
    v.push_back(p1);
    v.push_back(p2);
    sort(v.begin(), v.end());
    // if it is overlapping range
    
    
    if(v[1].first <= v[0].second){
        int maxRange= max(v[0].second , v[1].second);
        int minRange= min(v[0].first , v[1].first);
        cout<<maxRange - minRange +1 <<endl;
    }
    else{
        int first=b-a+1;
        int second=d-c+1;
        cout<<second+first << endl;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a==b && b==c && c==d)
	   {
	       cout<<1<<endl;
	       continue;
	   }
	    solve(a,b,c,d);
	}
	return 0;
}