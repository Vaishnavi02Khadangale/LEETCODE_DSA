class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = {0};

        // Count characters
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
        }

        // Find first non-repeating character
        for (int i = 0; i < s.length(); i++) {
            if (count[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};