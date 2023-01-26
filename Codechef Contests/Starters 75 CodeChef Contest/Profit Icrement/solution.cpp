#include <iostream>
using namespace std;

int solve(int sellingPrice, int y){
    int ans = 0;
    int costPrice = sellingPrice - y;
    sellingPrice+= 0.10 * sellingPrice;
    ans= sellingPrice - costPrice;
    return ans;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        // x selling price
        // y is profit
        // profit = selling price - cost price
        int x , y;
        cin>> x >> y;
        cout<< solve(x, y)<<endl;
    }
}