class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // This disables the synchronization between the C and C++ standard streams.
        // If you disable the synchronization, then C++ streams are allowed to have their own independent buffers,
        ios_base::sync_with_stdio(false);

        // This unties cin from cout. Tied streams ensure that one stream is flushed automatically before each I/O operation on the other stream.
        cin.tie(nullptr);
        cout.tie(nullptr);

        //map automatically sorts unique values
        map<int,int> mp;

        //insert value in map and also store their counts
        for(int i = 0 ; i < m ; i++)
            mp[nums1[i]]++;

        for(int i = 0 ; i < n ; i++)
            mp[nums2[i]]++;
        int index=0;
        // now change our nums1 array accordingly with help of values stored in map
        for(auto i : mp){
            if(i.second == 1)
                nums1[index++]=i.first;
            // if we have same value in map more than one
            else{
                while(i.second--)
                    nums1[index++]=i.first;
            }
        }
    }
};