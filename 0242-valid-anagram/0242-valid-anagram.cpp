class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        int freq[26] = {0};

        for (int x : s) {
            freq[x - 'a']++;
        }
        for (int c : t) {
            freq[c - 'a']--;
        }
        for (auto it : freq) {
            if (it != 0) {
                return false;
            }
        }
        return true;
    }
};