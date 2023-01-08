class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int num_of_pos=0;
        int num_of_neg=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0)
                num_of_pos++;
            else if(nums[i] < 0)
                num_of_neg++;
            
        }
        return max(num_of_pos,num_of_neg);
    }
};