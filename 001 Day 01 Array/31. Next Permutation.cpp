class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int ind1=-1;
        int ind2=-1;
        int n = a.size();
        for(int i=n-2;i>=0;i--){
            if(a[i]<a[i+1]){
                ind1 = i;
                break;
            }
        }
        if(ind1==-1){
            reverse(a.begin(),a.end());
            return;
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]>a[ind1]){
                ind2=i;
                swap(a[ind1],a[ind2]);
                break;
            }
        }
        reverse(a.begin()+ind1+1,a.end());
    }
};
