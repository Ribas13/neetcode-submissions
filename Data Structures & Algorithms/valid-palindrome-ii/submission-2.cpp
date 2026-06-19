class Solution {
public:

    bool isPalindrome(const string& s, int i, int j) {
        while (i < j) {
            if (tolower(s[i]) != tolower(s[j]))
                return false;
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        if (isPalindrome(s, 0, s.size()))
            return true;

        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            // if there's a wrong char, call isPalindrome function on the different indexes and return the value
            if (s[i] != s[j]) {
                return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
            }
            i++;
            j--;
        }
        return true;
    }
};