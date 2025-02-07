// https://leetcode.com/problems/find-the-number-of-distinct-colors-among-the-balls/description/?envType=daily-question&envId=2025-02-07
// took help from YT: https://www.youtube.com/watch?v=Gx-gGzz7S-s&ab_channel=Techdose
// Medium. must revise this problem

class Solution
{
public:
    vector<int> queryResults(int limit, vector<vector<int>> &queries)
    {
        vector<int> ans;
        unordered_map<int, int> ball_color;
        unordered_map<int, int> color_freq;
        for (int i = 0; i < queries.size(); i++)
        {
            int ball = queries[i][0];
            int color = queries[i][1];
            if (ball_color.count(ball))
            {
                color_freq[ball_color[ball]]--;
                if (color_freq[ball_color[ball]] == 0)
                    color_freq.erase(ball_color[ball]);
            }
            ball_color[ball] = color;
            color_freq[color]++;
            ans.push_back(color_freq.size());
        }
        // check
        for (int i : ans)
            cout << i << " ";
        return ans;
    }
};