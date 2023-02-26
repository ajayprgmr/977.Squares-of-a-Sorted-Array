class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0, right = n - 1;
        for (int i = n - 1; i >= 0; i--) {
            if (abs(nums[left]) > abs(nums[right])) {
                result[i] = nums[left] * nums[left];
                left++; // left ke liye kam kiye esiliye left--
            } else {
                result[i] = nums[right] * nums[right];
                right--; // right ke liye kaam kiye esiliye right--
            }
        }
        return result;


          
    }
};
