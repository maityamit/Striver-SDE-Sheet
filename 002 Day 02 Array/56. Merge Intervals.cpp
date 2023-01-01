class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>> vt;
        int start=intervals[0][0];
        int end=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(end<intervals[i][0]){
                vector<int> temp;
                temp.push_back(start);
                temp.push_back(end);
                vt.push_back(temp);
                
                start=intervals[i][0];
                end=intervals[i][1];
                
            }else{
                end=max(end,intervals[i][1]);
            }
        }
        
        vector<int> temp;
        temp.push_back(start);
        temp.push_back(end);
        vt.push_back(temp);
        
        return vt;
    }
};
