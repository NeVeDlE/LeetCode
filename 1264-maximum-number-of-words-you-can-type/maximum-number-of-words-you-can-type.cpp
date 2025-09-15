class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        string s = "";
        bool valid = 0;
        int ans = 0;
        for (int i = 0; i < text.size(); i++) {
            if (text[i] == ' ') {
                if (!valid)
                    ans++;
                valid = 0;
            }
            for (int j = 0; j < brokenLetters.size(); j++) {
                if (text[i] == brokenLetters[j]) {
                    valid = 1;
                    break;
                }
            }
        }
        if(!valid)ans++;

        return ans;
    }
};