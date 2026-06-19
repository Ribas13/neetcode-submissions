class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        // current max value - value, frequency
        pair<int, int> current_max = {0, 0};

        for (int i : nums) {
            freq[i]++;
            if (current_max.second < freq[i]) {
                current_max.first = i;
                current_max.second = freq[i];
            }
        }

        return current_max.first;
    }
};