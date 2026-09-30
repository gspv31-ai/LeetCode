class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int row=grid.size();
        int cols=grid[0].size();
        //making first all colums 1
        for(int i=0;i<row;i++){
            if(grid[i][0]==0){ //flip
                for(int j=0;j<cols;j++){
                if(grid[i][j]==0) grid[i][j]=1;
                else grid[i][j]=0;
                }
            }
        }
        //flipp the colums where noz>noo
        for(int j=0;j<cols;j++){
            int noo=0;
            int noz=0;
            for(int i=0;i<row;i++){
                if(grid[i][j]==0) noz++;
                else noo++;
            }
            if(noz>noo){//flip
            for(int i=0;i<row;i++){
                if(grid[i][j]==0) grid[i][j]=1;
                else grid[i][j]=0;
            }
        }
        }
        //sum 
        int sum=0;
        for(int i=0;i<row;i++){
            int x=1;
            for(int j=cols-1;j>=0;j--){
                sum+=grid[i][j]*x;
                x*=2;
            }
        }
        return sum;
    }
};