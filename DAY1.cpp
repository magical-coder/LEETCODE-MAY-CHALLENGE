// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
#define ll long long
class Solution {
public:
    int firstBadVersion(int n) {
        ll int l=1;
        ll int r=n;
        ll int ans;
        while(l<=r)
        {
            ll int m=(l+r)/2;
            if(isBadVersion(m))
            {
                r=m-1;
                ans=m;
            }
            else
            {
                l=m+1;
            }
        }
        return ans;
    }
};
