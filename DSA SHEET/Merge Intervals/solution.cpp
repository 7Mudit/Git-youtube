class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin() , intervals.end());

        vector<vector<int>> ans;

        vector<int>  prev= intervals[0];

        for( int i = 1 ; i< intervals.size() ;i++){
            //comparing the first value of present index with last value of prev pointer

            // if its is less than then change prev last value to max of both intervals last value
            if(intervals[i][0] <= prev[1]){
                prev[1]= max(prev[1] , intervals[i][1]);
            }
            //if its is not a overlapping interrval
            else{
                ans.push_back(prev);
                prev = intervals[i];
            }
        }
        ans.push_back(prev);


        return ans; 
    }
};