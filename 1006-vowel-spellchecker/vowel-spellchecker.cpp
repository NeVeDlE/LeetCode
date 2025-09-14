#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> spellchecker(vector<string>& wordlist,
                                vector<string>& queries) {
        auto tolower_str = [](const string& s) {
            string t = s;
            for (char &c : t) c = (char)tolower((unsigned char)c);
            return t;
        };
        auto devowel = [&](const string& s) {
            string t = s;
            for (char &c : t) {
                char lc = (char)tolower((unsigned char)c);
                if (lc=='a'||lc=='e'||lc=='i'||lc=='o'||lc=='u') c='*';
                else c=lc;
            }
            return t;
        };

        unordered_set<string> exact;
        unordered_map<string,string> caseMap, vowelMap;
        exact.reserve(wordlist.size()*2);
        caseMap.reserve(wordlist.size()*2);
        vowelMap.reserve(wordlist.size()*2);

        for (const string& w : wordlist) {
            exact.insert(w);

            string lw = tolower_str(w);
            caseMap.emplace(lw, w);              
            vowelMap.emplace(devowel(lw), w);    
        }

        vector<string> ans;
        ans.reserve(queries.size());

        for (const string& q : queries) {
            if (exact.count(q)) { ans.push_back(q); continue; }

            string lq = tolower_str(q);
            if (auto it = caseMap.find(lq); it != caseMap.end()) {
                ans.push_back(it->second); continue;
            }

            string vq = devowel(lq);
            if (auto it = vowelMap.find(vq); it != vowelMap.end()) {
                ans.push_back(it->second); continue;
            }

            ans.push_back("");
        }
        return ans;
    }
};
