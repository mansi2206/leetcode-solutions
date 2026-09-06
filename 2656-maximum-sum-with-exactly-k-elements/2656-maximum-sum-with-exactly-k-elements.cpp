class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum = 0;

        while (k != 0) {
            int maxi = INT_MIN;
            int maxIdx = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] > maxi) {
                    maxi = nums[i];
                    maxIdx = i;
                }
            }
            sum += maxi;
            // replace that maxi number with maxi + 1 in the array
            nums[maxIdx] = maxi + 1;
            k--;
        }
        return sum;
    }
};