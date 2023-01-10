class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n=nums.size();
        int arr[n+1];

        for(int i=0 ;i <=n; i++)
            arr[i]=0;


        for(int i=0; i<n; i++){
            if(arr[nums[i]]==0)
                arr[nums[i]]+=1;
            else
                return nums[i];
        }
        return 0;
    }
};