class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr(m+n);
        int ind = 0;
        
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                arr[ind++]=nums1[i];
                i++;
            }else{
                arr[ind++]=nums2[j];
                j++;
            }
        }
        
        while(i<m){
            arr[ind++]=nums1[i++];
        }
        
        while(j<n){
            arr[ind++]=nums2[j++];
        }
        
        nums1.clear();
        nums1=arr;
        
    }
};
