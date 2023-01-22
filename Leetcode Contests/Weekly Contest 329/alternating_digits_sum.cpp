class Solution {
public:
    int alternateDigitSum(int n) {
        int sum  = 0;
        bool positive =true;
        
        int rev_num = 0;
        while(n){
            rev_num = rev_num*10 + n%10;
            n = n/10;
        }
        
        while(rev_num){
            if(positive){
                positive = false; 
                sum += rev_num %10;
            }
            else{
                positive = true;
                sum-= rev_num%10;
            }
            rev_num/=10;
        }
        return sum;
    }
};