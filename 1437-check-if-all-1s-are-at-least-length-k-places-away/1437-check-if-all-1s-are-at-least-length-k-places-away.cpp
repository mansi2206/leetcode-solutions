class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int pIdx = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                int cIdx = i;
                // does pIdx exist
                if (pIdx == -1) {
                    pIdx = i;

                }
                // valid hain
                else if(cIdx - pIdx - 1 < k){ 
                    return false; 
                }
                pIdx = i;
            }
        }
        return true;
    }
};