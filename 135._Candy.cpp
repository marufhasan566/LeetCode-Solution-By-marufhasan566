// https://leetcode.com/problems/candy/description/?envType=daily-question&envId=2025-06-02
// https://www.youtube.com/watch?v=5khpLVzW7QQ&ab_channel=Techdose

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> candies(n, 1);

        // Step-1: Assign increasing curve with increasing candies
        for (int i = 1; i < n; ++i) {
            if (ratings[i] > ratings[i - 1])
                candies[i] = 1 + candies[i - 1];
        }

        // Step-2: Assign decreasing curve with increasing candies
        int total = candies[n - 1];
        for (int i = n - 1; i > 0; --i) {
            if (ratings[i - 1] > ratings[i])
                candies[i - 1] = max(candies[i - 1], 1 + candies[i]);
            total += candies[i - 1];
        }
        return total;
    }
};