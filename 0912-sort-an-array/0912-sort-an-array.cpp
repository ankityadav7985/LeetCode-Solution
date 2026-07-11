class Solution {
public:
void solve(vector<int>&nums){
    int max_element=nums[0];
    int mn=nums[0];
    for(int x:nums){
        max_element=max(max_element,x);
        mn=min(mn,x);
    }
    vector<int>res(max_element-mn+1,0);
    for(int x:nums){
        res[x-mn]++;
    }
    int idx=0;
    for(int i=0;i<res.size();i++){
        while(res[i]>0){
            nums[idx++]=i+mn;
            res[i]--;
        }
    }
}
    vector<int> sortArray(vector<int>& nums) {
       solve(nums);
       
       return nums; 
    }
};