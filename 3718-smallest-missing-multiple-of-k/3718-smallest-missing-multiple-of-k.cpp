class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> div;

        for (int x : nums) {
            if (x % k == 0) {
                div.insert(x);
            }
        }
        int multiple = k;
        while(div.find(multiple) != div.end()) {
            // means k exist in the map
            multiple += k;
        }
        return multiple;
    }
};