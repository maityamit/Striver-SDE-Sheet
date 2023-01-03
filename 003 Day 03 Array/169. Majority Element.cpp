class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto i:nums) map[i]++;
        int n = nums.size()/2;
        for(auto i:map) if(i.second>n) return i.first;
        return -1;
    }
};
