class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {

                // Shift elements left from index i
                for (int j = i; j < n - 1; j++) {
                    nums[j] = nums[j + 1];
                }

                // Put zero at the end
                nums[n - 1] = 0;

                // Check the current index again
                i--;
                n--;   // Last position is now fixed as zero
            }
        }
    }
};