class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int pIdx = -1;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 1) {
                
                if (pIdx != -1) {
                    if (i - pIdx - 1 < k) {
                        return false;
                    }
                }

                pIdx = i;
            }
        }
        return true;
    }
};