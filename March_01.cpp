// 912. Sort an array

// beats 93.1%
// time complexity : O( nlogn )   --> time complexity of sort function of C++ STL.

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums;
    }
};
