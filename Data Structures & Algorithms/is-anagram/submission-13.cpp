class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        if(s.length() != t.length()){
            return false;
        }

        for(char ch:s){
            mp[ch]++;
        }

        int count = t.size();

        for(char ch:t){
            if(mp.find(ch) != mp.end() && mp[ch]>0){
                mp[ch]--;
                count--;
            }
            if(count == 0){
                return true;
            }
        }
        

        return false;
    }
};
