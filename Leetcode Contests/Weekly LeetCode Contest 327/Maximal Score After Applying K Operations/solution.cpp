class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long int score=0;     
        priority_queue<long long int> pq;
        for(int i=0;i<nums.size();i++){
             pq.push(nums[i]);
        }
        while(k){
            
            score+=pq.top();
            // double x=nums[max_index];
            double x=pq.top();
            pq.pop();
            x=ceil(x/3);
            pq.push(x);
            k--;
        }
        return score;
    }
};