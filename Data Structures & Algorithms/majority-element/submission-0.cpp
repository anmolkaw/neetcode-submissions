// Hash Maps

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> frequency;

        for(int num:nums){
            frequency[num]++;

            if(frequency[num] > nums.size()/2){
                return num;
            }
        }

        return -1;
    }
};