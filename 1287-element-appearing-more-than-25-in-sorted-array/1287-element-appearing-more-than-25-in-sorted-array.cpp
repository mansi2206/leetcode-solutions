class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> cnt;
        int n = arr.size();
        for(int x: arr){
            cnt[x]++;
        }
        // int p = n % 4;
        for(auto it: cnt){
            if(it.second >(n/4)){
                return it.first;
            }
        }
        return -1;
    }
};