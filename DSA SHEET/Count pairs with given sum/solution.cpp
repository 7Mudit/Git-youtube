class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> m;
        int count = 0;
        for(int i = 0; i < n; i++){
            // finding sum - current number 
            if(m.find(k - arr[i]) != m.end()){
                count+=m[k-arr[i]];
            }
            m[arr[i]]++;
        }
        return count;
    }
};