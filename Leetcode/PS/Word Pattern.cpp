class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word) words.push_back(word);

        if (pattern.length()!=words.size()) return false;

        unordered_map<char, string> p2w;
        unordered_map<string, char> w2p;

        for (int i = 0; i < pattern.length(); ++i) {
            char p = pattern[i];
            string w = words[i];

            if ((p2w.count(p) && p2w[p] != w) ||
                (w2p.count(w) && w2p[w] != p))
                return false;

            p2w[p] = w;
            w2p[w] = p;
        }

        return true;




    }
};