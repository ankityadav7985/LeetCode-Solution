class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);

        int product = 1;
        int zeroCount = 0;

        // Calculate product of non-zero elements and count zeros
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                zeroCount++;
            else
                product *= nums[i];
        }

        // Fill answer
        for (int i = 0; i < n; i++) {
            if (zeroCount > 1)
                v[i] = 0;
            else if (zeroCount == 1) {
                if (nums[i] == 0)
                    v[i] = product;
                else
                    v[i] = 0;
            }
            else {
                v[i] = product / nums[i];
            }
        }

        return v;
    }
};