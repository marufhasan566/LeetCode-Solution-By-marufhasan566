// https://leetcode.com/problems/tuple-with-same-product/description/
// Help from YT: https://www.youtube.com/watch?v=TBCOBD-24oE&ab_channel=Techdose
// Must Revise this problem along with the concept of the solution

class Solution
{
    int nC2(int n) { return (n * (n - 1)) / 2; }

public:
    int tupleSameProduct(vector<int> &nums)
    {
        unordered_map<int, int> freq; // key->product of two and value->frequency of such pair
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                freq[nums[i] * nums[j]]++;
        int count = 0;
        for (auto [product, frequency] : freq)
            count += 8 * nC2(frequency);
        return count;
    }
};