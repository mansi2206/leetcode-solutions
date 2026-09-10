class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 1;
        int e = arr.size() - 2;
        // int peak = 0;
        int mid = 0;
        int peak = 0;

        while (s <= e) {
            mid = (e - s) / 2 + s;
            if (arr[mid] >= arr[mid - 1]) {
                peak = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return peak;
    }
};