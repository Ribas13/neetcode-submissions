class Solution {
   public:
    unordered_map<char, int> makeDictionary(string s) {
        unordered_map<char, int> dic;
        for (int i = 0; i < s.size(); i++) {
            dic[s[i]]++;
        }
        return dic;
    }

    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> dic = makeDictionary(s1);
        int smallSize = s1.size();

        for (int i = 0; i < s2.size(); i++) {
            if (dic.count(s2[i]) > 0) {  // matches one of the chars in s1
                unordered_map<char, int> match;
                int start_index = i;
                while (i < s2.size()) {
                    if (dic.count(s2[i]) > 0) {
                        match[s2[i]]++;
                    } else break;

                    if (i - start_index + 1 >= smallSize) break;
                    i++;
                }
                if (match == dic) {
                    return true;
                } else {
                    i = start_index;
                }
            }
        }
        return false;
    }
};
