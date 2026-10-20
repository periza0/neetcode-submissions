class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for (auto a:nums){
            if (st.count(a)){
            return true;
        }
        st.insert(a);
        }
        return false;
    }
};