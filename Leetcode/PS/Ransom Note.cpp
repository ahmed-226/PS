class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        uint32_t letters_in_ransom[26] = {0};
        for (const char& letter : ransomNote)
            letters_in_ransom[letter - 'a']++;
        
        for (const char& letter : magazine) {
            if (letters_in_ransom[letter - 'a'] > 0)
                letters_in_ransom[letter - 'a']--;
        }

        for (uint8_t i = 0; i < 26; i++) {
            if (letters_in_ransom[i] > 0)
                return false;
        }

        return true;
    }
};