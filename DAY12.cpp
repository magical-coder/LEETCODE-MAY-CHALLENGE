class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int n=a.size();
        if(n==1) return a[n-1];
        if(a[0]!=a[1]) return a[0];
        if(a[n-1]!=a[n-2]) return a[n-1];
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(a[m]!=a[m-1] && a[m]!=a[m+1])
            {
                return a[m];
            }
            if(((m%2==0) && (a[m-1]==a[m])) || ((m%2!=0) && (a[m+1]==a[m])))
            {
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return -1;
    }
};
