class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        if(n==1)return 1;

        int maxPoints=0;

        //using relation slope=y2-y1/x2-x1;

        for(int i=0;i<n;i++)
        {
            // double for slope and int for count
            unordered_map<double,int>m;
            for(int j=i+1;j<n;j++)
            {
                double x1=points[i][0];
                double y1=points[i][1];
                double x2=points[j][0];
                double y2=points[j][1];
                double slope;
                double dx=x2-x1;
                
                // we have got infinity situation
                if(dx==0)
                    slope=INT_MAX;
                else
                    slope=((y2-y1)/dx);

                m[slope]++;
                maxPoints=max(maxPoints,m[slope]+1);
            }
        }
        return maxPoints;
    }
};