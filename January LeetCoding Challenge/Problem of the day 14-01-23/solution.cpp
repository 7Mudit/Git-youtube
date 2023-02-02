class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        char chArray[26];
        // initialising our character array to store minimum values
        for(int i = 0 ; i < 26 ; i++)
            chArray[i] = 'a' + i;
        
        for(int i = 0 ; i < s1.size() ; i++){
            // computing maximum char value and minimum char value
            char maximum= max(chArray[s1[i]-'a'] , chArray[s2[i]-'a']);
            char minimum= min(chArray[s1[i]-'a'] , chArray[s2[i]-'a']);
            //checking for all  maximum value and replacing it  with minimum value
            for(int i=0 ; i < 26 ; i++)
                if(chArray[i] == maximum)
                    chArray[i] = minimum;
        }
        //change base str with minimum mapping stored in character array
        for(int i = 0 ;i <baseStr.size() ; i++)
            baseStr[i] = chArray[baseStr[i] - 'a'];

        //returning our final answer
        return baseStr;

    }
};