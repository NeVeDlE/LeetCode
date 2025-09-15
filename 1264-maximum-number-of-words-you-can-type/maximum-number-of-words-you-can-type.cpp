class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        map<string, int> m;
        string s = "";
        for (int i = 0; i < text.size(); i++) {
            if (text[i] == ' ' || i == text.size() - 1) {
                if (i == text.size() - 1)
                    s += text[i];
                m[s]++;
                s = "";
            } else {
                s += text[i];
            }
        }
        int ans = 0;

        for (auto it : m) {
            bool f = 0;
            cout << it.first << " " << endl;
            for (int i = 0; i < it.first.size(); i++) {

                for (int j = 0; j < brokenLetters.size(); j++) {
                    if (it.first[i] == brokenLetters[j]) {
                        f = 1;
                        break;
                    }
                }
            }
            if (!f)
                ans+=it.second;
        }
        return ans;
    }
};