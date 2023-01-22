class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        if(s == target)
            return true;
        int countOne =0 , countOneT=0;
        // check if there is atleast one present in either of the strings
        for(auto i : s)
            if(i == '1')
                countOne++;
        for(auto i : target)
            if(i == '1')
                countOneT++;
        //  if any of the string has zero count of ones and other has more than 0 count of ones then return false
        if((countOne == 0 && countOneT > 0) || (countOne > 0 && countOneT == 0))
            return false;
        return true;
    }
};