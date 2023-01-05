#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0)
            return 0;
        
        sort(points.begin(),points.end());

        
        // initialize ans = 1
        // Check interval lies or not 
            // end point agr pichle k starting point s kam to rehne de min both end points
            // increment krdo answer and end point change krdo

        int end = points[0][1];
        int arrows = 1;

        for(int i = 1;i < points.size(); i++){
            if(points[i][0] <= end){
                end = min(points[i][1] , end);
                continue;
            }
            else{
                arrows++;
                end =  points[i][1];
            }
        }
        return arrows;
    }
};