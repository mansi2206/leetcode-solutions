class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int peakN = INT_MIN;
        int peakIdx = 0;

        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > peakN){
                peakN = arr[i];
                peakIdx = i;
            }
        }
        return peakIdx;
    }
};