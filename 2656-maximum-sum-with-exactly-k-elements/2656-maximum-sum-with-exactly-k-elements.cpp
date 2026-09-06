class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {

        int sum = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
            }
        }
        // sum += maxi;
        sum = k * (maxi + (maxi + k - 1)) / 2;
        // while (k != 1) {
        //     sum += maxi + 1;
        //     maxi++;
        //     k--;
        // }
        return sum;
    }
};