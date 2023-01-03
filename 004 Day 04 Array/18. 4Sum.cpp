class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j!=i+1 && nums[j]==nums[j-1]) continue;
                
                long long temp_target = (long long)target-nums[i]-nums[j];
                
                int left = j+1;
                int right = n-1;
                
                while(left<right){
                    if(nums[left]+nums[right]==temp_target){
                        ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                        int tempu1 = nums[left];
                        while(left<n && tempu1==nums[left]) left++;
                        
                        int tempu2 = nums[right];
                        while(right>j && tempu2==nums[right]) right--;
                        
                    }else if(nums[left]+nums[right]<temp_target){
                        int tempu = nums[left];
                        while(left<n && tempu==nums[left]) left++;
                    }else{
                        int tempu = nums[right];
                        while(right>j && tempu==nums[right]) right--;
                    }
                    
                }
                
            }
        }
        return ans;
    }
};
