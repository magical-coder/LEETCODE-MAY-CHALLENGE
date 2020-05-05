class Solution {
public:
    int firstUniqChar(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int a[26];
        memset(a,0,sizeof(a));
        for(int i=0;i<s.length();i++)
        {
            a[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(a[s[i]-'a']==1)
            {
                return i;
            }
        }
        return -1;
    }
};
