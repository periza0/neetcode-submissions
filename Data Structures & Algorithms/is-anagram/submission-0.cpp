class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()){
            return false;
        }
        unordered_map<int,int> freq;
        for (char a:s){
            freq[a]++;
        }
        for (char a:t){
            freq[a]--;        
        if (freq[a]<0){
        return false;
        }}
return true;
        
    }
};
