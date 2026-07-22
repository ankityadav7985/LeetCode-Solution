class Solution {
public:
    int t[10001];

    int solve(vector<int>& res,int n,int idx){
        if(idx>=n-1) return 0;

        if(t[idx]!=-1) return t[idx];

        int ans=INT_MAX;

        for(int i=1;i<=res[idx];i++){
            if(idx+i<n){
                int temp=solve(res,n,idx+i);

                if(temp!=INT_MAX){
                    ans=min(ans,1+temp);
                }
            }
        }

        return t[idx]=ans;
    }

    int jump(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        return solve(nums,nums.size(),0);
    }
};