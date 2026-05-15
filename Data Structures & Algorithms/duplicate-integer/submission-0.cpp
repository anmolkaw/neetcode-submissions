class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> s(nums.begin(), nums.end());
        int x = s.size();
        int y = nums.size();
        if(x == y){
            return false;
        }
        else{
            return true;
        }

    }
};
