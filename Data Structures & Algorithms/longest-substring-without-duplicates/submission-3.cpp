class Solution {
   public:

    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;

        unordered_map<char, int> repeats;
        
        int left = 0;
        int right = 0;
        int longestSpan = 0;

        while (right < s.size()) {
            repeats[s[right]]++;
            while (repeats[s[right]] > 1) {
                repeats[s[left]]--;
                left++;
            }
            longestSpan = max(longestSpan, right - left + 1);
            right++;
        }

        return longestSpan;
    }
};
