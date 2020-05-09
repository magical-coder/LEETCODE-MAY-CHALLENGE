class Solution {
    #define ll long long
public:

    bool isPerfectSquare(int num) {
        if(num==1) return true;
        ll int l=0;
        ll int r=num;
      //  cout<<"l: "<<l<<endl;
        //cout<<"r: "<<r<<endl;
        while(l<r)
        {
           ll int m=l+(r-l)/2;
           // cout<<"m: "<<m<<endl;
            if((m*m)==num) return true;
            else if((m*m)>num) r=m;
            else l=m+1;
        }
        return false;
    }
};
