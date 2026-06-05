1class Solution {
2public:
3    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
4        sort(arr.begin(),arr.end());
5        vector<vector<int>>ans;
6        int minn = arr[1] - arr[0];
7        for(int i=0; i<arr.size()-1; i++){
8            if(arr[i+1] - arr[i] < minn){
9                minn = arr[i+1] - arr[i];
10            }
11        }
12        for(int i=0;i<arr.size()-1;i++){
13            if(arr[i+1] - arr[i] == minn){
14               ans.push_back({arr[i] , arr[i+1]});
15            }
16        }
17        return ans;
18    }
19};