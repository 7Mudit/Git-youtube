class Solution {
public:

    string categorizeBox(int length, int width, int height, int mass) {


        //calculating volume
        long long  volume=(long long)length*(long long)width*(long long)height;

        //return value for function
        string ans="";

        // if box is both bulky and heavy
        if((length >= 1e4 || width>=1e4 || height>=1e4 || mass >=1e4 || volume >= 1e9) && mass>=100)
        {
            ans="Both";
        }
        // if box is only heavy
        else if(!(length >= 1e4 || width>=1e4 || height>=1e4 || mass >=1e4 || volume >= 1e9) && mass>=100){
            ans= "Heavy";
        }
        // if box is only bulky
        else if((length >= 1e4 || width>=1e4 || height>=1e4 || mass >=1e4 || volume >= 1e9) && mass<100){
            ans= "Bulky";
        }
        // box is neither bulky nor heavy
        else
            ans= "Neither";

            
        return ans;
        
    }
};