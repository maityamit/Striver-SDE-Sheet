class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int ans=INT_MIN;
        int cnt=1;
        map<int,int> map;
        for(auto i:nums) map[i]++;
        for(auto i:map){
            if(map.count(i.first+1)>=1) cnt++;
            else{
                ans=max(ans,cnt);
                cnt=1;
            }
        }
        return ans;
    }
};
