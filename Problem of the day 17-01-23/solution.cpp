class Solution {
public:
    int minFlipsMonoIncr(string s) {
        
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);


        int count_zero = 0,count_one = 0; 
        for(auto digit : s){
            if( digit == '1')
                count_one++;
            else
                count_zero++;
            count_zero = min(count_zero,count_one);
        }
        return count_zero;
    }
};
