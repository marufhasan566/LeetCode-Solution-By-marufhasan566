// https: // leetcode.com/problems/find-the-punishment-number-of-an-integer/description/?envType=daily-question&envId=2025-02-15
//Help 1: https://www.youtube.com/watch?v=LWgksJP-5SA&ab_channel=NeetCodeIO
//Help 2: https://www.youtube.com/watch?v=k5ZGK5LdRDU&ab_channel=AnimatedAnand
//Help 3: https://www.youtube.com/watch?v=NByJemyF_rQ&ab_channel=Techdose




class Solution {
    bool isValid(string& sq, int pos, int sum, int& val) {
        if (pos >= sq.size())
            return sum == val;

        for (int i = 0; i + pos < sq.size(); ++i) {
            int curr_val = stoi(sq.substr(pos, i + 1));
            if (isValid(sq, i + pos + 1, sum + curr_val, val))
                return true;
        }
        return false;
    }

public:
    int punishmentNumber(int n) {
        int punishment_number = 1;
        for (int i = 2; i <= n; ++i) {
            string sq = to_string(i * i);
            if (isValid(sq, 0, 0, i))
                punishment_number += i * i;
        }
        return punishment_number;
    }
};