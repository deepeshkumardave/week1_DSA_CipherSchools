class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>> res;
    vector<int> subset;
    int n = nums.size();
    int limit = 1 << n;
    for (int i = 0; i < limit; i++) {
        subset.clear();
        for (int j = 0; j < n; j++) {
            if (i & 1 << j) {
                subset.push_back(nums[j]);
            }
        }
        res.push_back(subset);
    }
    return res;
    }
};