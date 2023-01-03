class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0 || s.length()==1) return s.length();
        unordered_map<char,int> map;
        int ans = 0;
        int left = 0;
        for(int i=0;i<s.length();i++){
            if(map.count(s[i])>0) left=max(left,map[s[i]]+1);
            map[s[i]]=i;
            ans = max(ans,i-left+1);
        }
        return ans;
    }
};
