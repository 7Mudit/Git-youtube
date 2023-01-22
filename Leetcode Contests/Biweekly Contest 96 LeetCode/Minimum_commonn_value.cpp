class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        // first is my vector value and second stands for count
          map<int,int> m1;
          map<int,int> m2;
        
        for(int i=0;i<nums1.size();i++)
            m1[nums1[i]]++;
        for(int i=0;i<nums2.size();i++)
            m2[nums2[i]]++;
        
        for(auto i: m1){
            if(m2.find(i.first) != m2.end())
                return i.first;
        }
        
        return -1;
        
          
    }
};