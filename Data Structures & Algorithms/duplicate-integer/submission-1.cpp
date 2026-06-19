class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int nums_size = nums.size();
        std::map<int, int> nums_map;
        for (int i = 0; i < nums_size; i++) {
            nums_map[nums[i]] += 1;

            if (nums_map[nums[i]] > 1)
                return true;
        }
        return false;
    }
};