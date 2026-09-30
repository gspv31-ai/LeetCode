class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
    int minr=0,minc=0;
    int maxr=m-1, maxc=n-1;
    int tm=m*n;
    int count=0;
    vector<int>v;
    while(minr<=maxr && minc<=maxc ){
        //right
        for(int j=minc;j<=maxc && tm>count;j++){
            v.push_back(matrix[minr][j]);
           // count++;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        //down
        for(int i=minr;i<=maxr &&count<tm;i++){
            v.push_back(matrix[i][maxc]);
            //count++;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        //left
        for(int j=maxc;j>=minc &&count<tm;j--){
            v.push_back(matrix[maxr][j]);
           // count++;
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        //up
        for(int i=maxr;i>=minr &&count<tm;i--){
            v.push_back(matrix[i][minc]);
           // count++;
        }
        minc++;
        if(minr>maxr || minc>maxc) break;
    }
    return v;
    }  
};