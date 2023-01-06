class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n);
        
        int currMin=arr[0];
        int currMax=arr[n-1];
        
        int diff=currMax-currMin;
        
        for(int i=1; i<n; i++){
            
            if(arr[i] -k < 0)
                continue;
            
            currMin=min(arr[0] + k, arr[i]-k);
            currMax=max(arr[i-1] + k, arr[n-1]-k);
            diff=min(diff , currMax-currMin);
        }
        return diff;
    }
};