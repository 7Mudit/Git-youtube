class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int totalSum = 0 , maxSum = INT_MIN , minSum = INT_MAX , currSum1 = 0 ,currSum2 = 0;

        for( auto i : nums){
            totalSum += i;
            currSum1 += i;
            currSum2 += i;

            //maximum subarray
            maxSum = max(maxSum , currSum1);
            if(currSum1 < 0)
                currSum1 = 0;

            // minimum subarray
            minSum = min(minSum , currSum2);
            if(currSum2 > 0)
                currSum2 = 0;
        }
        int ans = 0;
        if(totalSum == minSum)
            ans = maxSum;
        else
            ans = max(maxSum , totalSum - minSum);
        return ans;

    }
};
