1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        sort(s.begin(),s.end());
5        sort(t.begin(),t.end());
6        for(int i=0;i<s.size();i++){
7            if(s[i] != t[i]){
8                return t[i];
9            }
10        }
11        return t[t.size() -1];
12   }
13};