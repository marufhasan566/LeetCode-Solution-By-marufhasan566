// https://leetcode.com/problems/count-the-number-of-fair-pairs/description/?envType=daily-question&envId=2025-04-19
// https://www.youtube.com/watch?v=xe6y4aEfvDw&ab_channel=Techdose



class Solution {
    #define ll long long
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        ll ans=0;
        for(int i=0;i<n-1;++i){
            int lb = lower_bound(nums.begin()+i+1,nums.end(),lower-nums[i])-nums.begin();
            int ub = upper_bound(nums.begin()+i+1,nums.end(),upper-nums[i])-nums.begin();
            ans += (ub - lb);
        }
        return ans;
    }
};