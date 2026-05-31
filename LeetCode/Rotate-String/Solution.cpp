1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        if(s.length() != goal.length()){
5            return false;
6        }
7        string ss = s + s;
8        return ss.find(goal) != string::npos;
9    }
10};