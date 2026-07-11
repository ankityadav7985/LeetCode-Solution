class Solution {
public:
    vector<vector<int>> res;

    void solve(int idx, int target, vector<int>& candidates, vector<int>& ans) {

        if(target == 0) {
            res.push_back(ans);
            return;
        }

        if(target < 0)
            return;       

        for(int i = idx; i < candidates.size(); i++) {
            ans.push_back(candidates[i]);

            solve(i, target - candidates[i], candidates, ans);

            ans.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int> ans;

        solve(0, target, candidates, ans);

        return res;
    }
};