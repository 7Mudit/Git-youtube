int x;
class Solution {
public:
    static bool sortcol(const vector<int>& v1,const vector<int>& v2){
        return v1[x] > v2[x];
    }
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        x = k;
        sort(score.begin(),score.end(),sortcol);
        return score;
    }
};