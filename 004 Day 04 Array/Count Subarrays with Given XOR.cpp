#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int xr = 0;
    int cnt = 0;
    unordered_map<int,int> map;
    for(auto it:arr){
        xr = xr^it;
        if(xr==x) cnt++;
        if(map.count(xr^x)>0){
            cnt+=map[xr^x];
        }
        map[xr]++;
    }
    return cnt;
}
