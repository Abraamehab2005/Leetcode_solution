1class Solution {
2public:
3    int largestSumAfterKNegations(vector<int>& nums, int k) {
4        sort(nums.begin(), nums.end());
5        for (int i = 0; i < nums.size() && k > 0; i++) {
6            if (nums[i] < 0) {
7                nums[i] = -nums[i];
8                k--;
9            }
10        }
11        if (k > 0 && k % 2 == 1) {
12            int idx = 0;
13            for (int i = 1; i < nums.size(); i++) {
14                if (nums[i] < nums[idx]) {
15                    idx = i;
16                }
17            }
18            nums[idx] = -nums[idx];
19        }
20        int sum = 0;
21        for (int x : nums) {
22            sum += x;
23        }
24        return sum;
25    }
26};