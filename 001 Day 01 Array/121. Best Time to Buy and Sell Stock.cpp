class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int pr=0;
        for(auto i:prices){
            if(i<min) min=i;
            pr = max(pr,i-min);
        }
        return pr;
    }
};
