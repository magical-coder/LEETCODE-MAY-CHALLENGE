class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
        for(int i=0;i<S.length();i++)
        {
            int t=J.find(S[i]);
            if(t!=string::npos)
            {
                count++;
            }
        }
        return count;
    }
};
