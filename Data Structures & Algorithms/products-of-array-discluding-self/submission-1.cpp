class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int preffix = 1;
        int suffix = 1;
        vector<int> res;

        int size = nums.size();
        for (int i = 0; i < size; i++) {
            res.push_back(preffix);
            preffix *= nums[i];
        }
        for (int i = size - 1; i >= 0; i--) {
            res[i] *= suffix;
            suffix *= nums[i];
        }
        return res;
    }
};
