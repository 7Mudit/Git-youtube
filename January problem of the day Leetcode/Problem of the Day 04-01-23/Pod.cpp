#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,float> m;
        for(auto i:tasks){
            // if(m.find(i)==m.end)
            //     m[i]=1;
            // else
            //     m[i]++;
            m[i]++;
        }
        int cnt=0;

        //logic
        for(auto i:m){
            if(i.second==1)
                return -1;
            cnt+=ceil(i.second/3);
        }
        return cnt;
    }
};