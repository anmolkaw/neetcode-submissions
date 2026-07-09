// Using Hash-map

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;

        for(int num:nums){
            freq[num]++;
        }

        for(auto num:freq){
            if(num.second > nums.size()/2){
                return num.first;
            }
        }

        return -1;
    }
};