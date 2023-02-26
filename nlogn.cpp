class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int &i:nums){
            i=i*i;
        }
        std::sort(nums.begin(), nums.end());
        return nums;
    }
};
