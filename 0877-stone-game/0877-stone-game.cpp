class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < piles.size();i++) {
            for (int j = i + 1; j < piles.size(); j++) {
                if (piles[i] > piles[j]) {
                    int temp = piles[i];
                    piles[i] = piles[j];
                    piles[j] = temp;
                }
            }
        }
        int sum1 = 0;
        int sum2 = 0;
        for (int i = piles.size() - 1; i > 0; i--) {
            v1.push_back(piles[i]);
            v2.push_back(piles[i-1]);
        }
        for (int i = 0; i < v1.size(); i++) {
            sum1 += v1[i];
            sum2 += v2[i];
        }
        if (sum1 > sum2)
            return true;
        else
            return false;
    }
};