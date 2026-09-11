class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> uni;

        for(int i = 0; i < nums.size(); i++){
            if(uni.count(nums[i])){
                return nums[i];
            }else{
                uni.insert(nums[i]);
            }
        }
        return -1;
    }
};