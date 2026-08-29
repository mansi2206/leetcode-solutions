// this is brute-force because the sorted array concept is not used anywhere.

// class Solution {
// public:
//     int findSpecialInteger(vector<int>& arr) {
//         unordered_map<int, int> cnt;
//         int n = arr.size();
//         for(int x: arr){
//             cnt[x]++;
//         }
//         for(auto it: cnt){
//             if(it.second >(n/4)){
//                 return it.first;
//             }
//         }
//         return -1;
//     }
// };

// optimization
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int k = arr.size() / 4;

        // i+k == i ye check krta h element repeat ho rha hain.
        for (int i = 0; i + k < arr.size(); i++) {
            if (arr[i] == arr[i + k]) {
                return arr[i];
            }
        }
        return -1;
    }
};