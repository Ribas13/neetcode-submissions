class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_size = s.size();
        int t_size = t.size();

        if (s_size != t_size)
            return false;

        std::map<char, int> map_s;
        std::map<char, int> map_t;

        for (int i = 0; i < s_size; i++) {
            map_s[s[i]] += 1;
            map_t[t[i]] += 1;
        }

        // maps are filled
        // check if they have different counts
        for (int i = 0; i < s_size; i++) {
            printf("s: %c, t: %c\n", map_s[s[i]], map_t[s[i]]);
            if (map_s[s[i]] != map_t[s[i]])
                return false;
        }
        return true;
    }
};
