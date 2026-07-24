class Solution {
public:
int solve(int idx,vector<int>&nums,vector<int>&v){
    if(idx==0)return nums[0];
     if(idx<0)return 0;
     if(v[idx]!=-1)return v[idx];
    else{
    int pick=nums[idx]+solve(idx-2,nums,v);
    int not_pick=0+solve(idx-1,nums,v);
         v[idx]= max(pick,not_pick);
         return v[idx];
    }
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n, -1); 
        return solve(n-1,nums,v);
    }
};