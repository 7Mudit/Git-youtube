class Solution {
public:

    void nextPermutation(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
            // Time complexity : O(n)
            // Space complexity : O(1) 

        // algorithm
        // Iterate array from end and find first index(pivot element) which does not follow property of non increasing order
        // if pivot element does not exit that means this sequence is largest so reverse array

        // if we found pivot element then just swap the pivot with nearest greater number
        // reverse array from pivot + 1 index till end

        int n = nums.size(), pivot , successor;

        for( pivot = n-2 ; pivot >= 0 ; pivot--){
            if(nums[pivot] < nums[pivot+1])
                break;
        }
        //this means this is largest sequence possible
        if(pivot < 0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(successor = n-1 ;successor > pivot ;successor--){
                if(nums[successor] > nums[pivot])
                    break;
            }
            swap(nums[pivot] , nums[successor]);
            reverse(nums.begin() + pivot +1, nums.end());
        }

    }
}; 
