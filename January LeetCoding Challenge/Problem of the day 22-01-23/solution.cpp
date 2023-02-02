class Solution {
public:
    bool isPalindrome(int &left,int &len,string &s){
        //if the len is one then always a palindrome
        if(len==1){
            return true;
        }
        //we have initialized right pointer to check s[left+i]==s[right-i]
        
        int right=left+len-1;
        for(int i=0;i<=len/2;i++){
            //if we dont satisfy condition we will simply return false 
            if(s[left+i]!=s[right-i]){
                return false;
            }
        }
        //all s[left+i]==s[right-i] then we will return true 
        return true;
    }
    void rec(int idx,string &s,vector<string>&cur,vector<vector<string>>&ans){
        //we will check if the index get beyond the size of s then we will simply add the
        //cur vector to our ans vector
        int n=s.size();
        if(idx>=n){
            ans.push_back(cur);//push the cur to ans
            return ;
        }
        //This for loop is to count for the length of palindrome starting from the 
        //index idx and we will check if the length i + idx doesnt exceed the size of 
        //string s.
        for(int i=1;i+idx<=n;i++){
            //Now if the substring starting from index idx and length i is palindrome or not
            if(isPalindrome(idx,i,s)){
                //if palindrome we will simply push it into cur and call for further index
                cur.push_back(s.substr(idx,i));
                //calling for remaing substring
                rec(idx+i,s,cur,ans);
                //as we are passing cur by reference we are backtracking by poping out the last 
                //element from the cur vector
                cur.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        //We will Store the ans in this ans vector vector of string 
        vector<vector<string>>ans;
        //This vector would be storing the value of the cur 
        vector<string>cur;
        //we are calling our recursive function with index equal to 0.
        rec(0,s,cur,ans);
        //returning the ans
        return ans;
    }
};