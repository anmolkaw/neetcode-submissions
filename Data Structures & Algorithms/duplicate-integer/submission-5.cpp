class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int num:nums){
            mp[num]++;
        }

        for(auto pairs:mp){
            if(pairs.second > 1){
                return true;
            }
        }

        return false;
    }
};