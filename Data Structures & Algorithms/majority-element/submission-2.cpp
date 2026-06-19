class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        // current max value - value, frequency
        vector<int> current_max = {0, 0};

        for (int i : nums) {
            freq[i]++;
            if (current_max[1] < freq[i]) {
                current_max[0] = i;
                current_max[1] = freq[i];
            }
        }

        return current_max[0];
    }
};