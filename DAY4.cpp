class Solution {
public:
    int findComplement(int num) {
        int bits=floor(log2(num))+1;
        int n=num;
        int x=(pow(2,bits))-1;
        int ans=num^x;
        return ans;
    }
};
--------------------------------------------------------------------------------------
                    SOLUTION 2

class Solution {
public:
    int findComplement(int num) {
        int bits=0;
        int n=num;
        while(n!=0)
        {
            n=n/2;
            bits++;
        }
        int x=(pow(2,bits))-1;
        int ans=num^x;
        return ans;
    }
};
