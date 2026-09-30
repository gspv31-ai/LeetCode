class Solution {   
public:
void reversePart(vector<int>&v,int i,int j){
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
}
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n) k=k%n;
        reversePart(nums,0,n-k-1);
        reversePart(nums,n-k,n-1);
        reversePart(nums,0,n-1);
    }
};