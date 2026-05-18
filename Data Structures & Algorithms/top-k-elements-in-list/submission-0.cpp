class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int i=0;i<nums.size();i++){
            int copy = nums[i];
            mp[copy]++;
        }

        priority_queue<pair<int, int>> pq;
        for(auto pair:mp){
            pq.push({pair.second, pair.first});
        }

        vector<int> answer;
        while(k--){
            answer.push_back(pq.top().second);
            pq.pop();
        }

        return answer;
    }
};
