//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
    // Time complexity : O(N1 * log(N2*N3))
    bool binarySearch(int arr[] , int size, int element){
        int l = 0 ,r =size-1;
        
        while(l <= r){
            int mid = l + (r-l)/2;
            
            if(arr[mid] == element)
                return true;
            else if(arr[mid] > element)
                r = mid - 1;
            else 
                l = mid + 1;
        }
        return false;
    }
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> ans;
            
            // if we search a value in a array
            // binary search O(logN)
            
            for(int i = 0; i < n1;i++){
                
                // handle duplicate case
                if(i!=0 && A[i] == A[i-1])
                    continue;
                
                // if we find the current value in both arrays b and c then push it in our ans vector
                if(binarySearch(B,n2,A[i]) && binarySearch(C,n3,A[i]))
                    ans.push_back(A[i]);
            }
            
            
            return ans;
            
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends