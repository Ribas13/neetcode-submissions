class Solution {
public:
    bool isPalindrome(string s) {
        int right_index = s.size() - 1;
        int left_index = 0;
        while (left_index < right_index) {
            // first, check if they both are alnmum
            bool left_al_num = isalnum(s[left_index]);
            bool right_al_num = isalnum(s[right_index]);
            if (left_al_num && right_al_num) {
                // we compare them, they must match
                if (tolower(s[left_index]) == tolower(s[right_index])) {
                    left_index++;
                    right_index--;
                } else {
                    return false;
                }
            } else {
                if (!left_al_num)
                    left_index++;
                if (!right_al_num)
                    right_index--;
            }
        }
        return true;
    }
};
