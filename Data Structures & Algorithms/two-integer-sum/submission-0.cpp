class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for (int a=0;a<nums.size();a++){
           if ( mp.count(target-nums[a])){
            return{mp[target-nums[a]],a};
           }
           mp[nums[a]]=a;
        }
        return {};
    }
};
