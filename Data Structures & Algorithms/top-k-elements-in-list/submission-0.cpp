class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for (int a=0;a<nums.size();a++){
            mp[nums[a]]++;
        }
        priority_queue<pair<int,int>>pq;
        for (auto i:mp){
        pq.push({i.second,i.first});}
        vector<int>ans;
        while(k>0){
        ans.push_back(pq.top().second);
        k--;
        pq.pop();
        }
        return ans;
            }
};
