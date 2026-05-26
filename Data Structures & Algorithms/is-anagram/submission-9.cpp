class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char, int> mp;

        for(char ch:s){
            mp[ch]++;
        }

        int count = t.size();

        for(char ch:t){
            if(mp.find(ch) != mp.end() && mp[ch]>0){
                mp[ch]--;
                count--;
            }
        }

        if(count == 0){
            return true;
        }


        return false;

    }
};
