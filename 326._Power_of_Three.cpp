// https://leetcode.com/problems/power-of-three/description/

// float solve(int x, int k) {
//     float answer;
//     answer = log10(x) / log10(k);
//     return answer;
// }

// class Solution {
// public:
//     bool isPowerOfThree(int n) {
//         if (n > 0) {
//             double ans = solve(n, 3);
//             int ans2 = solve(n, 3);
//             double diff = ans - ans2;
//             // cout << ans << " " << ans2 << " " << diff << endl;
//             if (diff == 0)
//                 return true;
//             else
//                 return false;
//         } else
//             return false;

//         from discussion
//     }
// };

class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        if (n == 0)
            return false;
        if (n == 1)
            return true;
        if (n > 1)
            return n % 3 == 0 && isPowerOfThree(n / 3);
        else
            return false;
    }
};