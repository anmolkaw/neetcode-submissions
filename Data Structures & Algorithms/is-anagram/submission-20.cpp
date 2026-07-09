class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> seen;
        for(char ch:s){
            seen[ch]++;
        }

        for(char ch:t){
            if(seen.find(ch) != seen.end() && seen[ch]>0){
                seen[ch]--;
            }
            else{
                return false;
            }
        }

        return true;

    }
};
