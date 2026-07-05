class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,0);
        int sum=1;
        int zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
            sum*=nums[i];
            
            else zero++;
        }
        for(int i=0;i<nums.size();i++){
            if(zero>1)
                v[i]=0;
            
                else if(zero==1){
                if(nums[i]==0)v[i]=sum;
                else
                v[i]=0;
                }

            else
            v[i]=sum/nums[i];

        }
        return v;
    }
};