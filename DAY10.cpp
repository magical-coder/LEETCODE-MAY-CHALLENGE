
class Solution {
    #define ll long long
public:
    int findJudge(int n, vector<vector<int>>& t) {
        vector<ll int>in(n,0);  //containing vertice into which vertices are coming in
        vector<ll int>out(n,0); //containing vertice from which vertices are going out
        for(ll int i=0;i<t.size();i++)
        {
            out[t[i][0]-1]++;
            in[t[i][1]-1]++;
        }
        ll int ans=-1;
        auto it1=find(in.begin(),in.end(),n-1);
        auto it2=find(out.begin(),out.end(),0);
        ll int x=distance(out.begin(),it2)-distance(in.begin(),it1);
        if(it2!=out.end() && it1!=in.end() && x==0) ans= distance(out.begin(),it2)+1;
        return ans;
    }
};
