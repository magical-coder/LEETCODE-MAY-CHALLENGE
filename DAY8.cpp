class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
            for(int i=1;i<c.size()-1;i++)
            {
                // int a=(c[i][0]-c[i-1][0]);
                // int b=c[i][1]-c[i-1][1];
                // int mm=c[i+1][0]-c[i][0];
                // int nn=c[i+1][1]-c[i][1];
                if(((c[i][1]-c[i-1][1])*(c[i+1][0]-c[i][0]))!=((c[i][0]-c[i-1][0])*(c[i+1][1]-c[i][1]))) return false;
            }
            return true;
    }
};
