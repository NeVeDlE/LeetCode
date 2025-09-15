class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        string s = "";
        bool valid = 0;
        int ans = 0;
        map<char, int> m;
        for (int i = 0; i < brokenLetters.size(); i++) {
            m[brokenLetters[i]]++;
        }
        for (int i = 0; i < text.size(); i++) {
            if (text[i] == ' ') {
                if (!valid)
                    ans++;
                valid = 0;
            }

            if (m[text[i]]) {
                valid = 1;
            }
        }
        if (!valid)
            ans++;

        return ans;
    }
};