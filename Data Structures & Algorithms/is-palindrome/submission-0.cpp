class Solution {
public:
    bool isPalindrome(string s) {
        // at all steps, we'll check if its isalnum(char) 
        //returns true on both i and j, if they both return 
        //true, we compare them, otherwise we move the necessary 
        //index until they find a character
        
        // start i from 0
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
            if (left_index == right_index)
                break;
        }
        return true;
    }
};
