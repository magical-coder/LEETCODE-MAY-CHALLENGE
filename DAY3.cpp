class Solution {
public:
    bool canConstruct(string r, string m) {
        int hash[26];
        memset(hash,0,sizeof(hash));
        for(int i=0;i<m.length();i++)
        {
            hash[m[i]-'a']++;
        }
        //int fl=0;
        for(int i=0;i<r.length();i++)
        {
            if(hash[r[i]-'a']<=0)
            {
                return false;
            }
            else
            {
                hash[r[i]-'a']--;
            }
        }
        return true;
    }
};
