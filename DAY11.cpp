class Solution {
public:
    void fill(vector<vector<int>>& image,int x,int y,int p,int n,int mm,int nn)
    {
        if(x<0 || x>=mm || y<0 || y>=nn)
        {
            return;
        }
        if(image[x][y]!=p) return;
        if(image[x][y]==n) return;

        image[x][y]=n;
        fill(image,x+1,y,p,n,mm,nn);
        fill(image,x-1,y,p,n,mm,nn);
        fill(image,x,y+1,p,n,mm,nn);
        fill(image,x,y-1,p,n,mm,nn);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int mm=image.size();
        int nn=image[0].size();
        int p=image[sr][sc];
        fill(image,sr,sc,p,newColor,mm,nn);
        return image;
    }
};
