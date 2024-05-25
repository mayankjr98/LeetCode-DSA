class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector <int> v;

        int i = 0; 
        while (i<=n) {
            v.push_back(i);
            i++;
        }

        int ans;

        for (int i=0; i<n; i++) {
            if(v[i] != nums[i]) {
                ans = v[i];
                return ans;
            }
        }
        return v.back();
    }
};