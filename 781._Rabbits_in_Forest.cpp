// https://leetcode.com/problems/rabbits-in-forest/description/?envType=daily-question&envId=2025-04-20
// https://www.youtube.com/watch?v=q2IwDoISeVc&ab_channel=CppCode


class Solution {
public:
    int numRabbits(vector<int>& a) {
        unordered_map<int, int> m;
        int ans = 0;
        for (int i = 0; i < a.size(); i++) {
            if (m.find(a[i] + 1) == m.end()) {
                ans += a[i] + 1;
                if (a[i] == 0) {
                    continue;
                }
                m[a[i] + 1]++;
            } else {
                m[a[i] + 1]++;
                int key = a[i] + 1;
                int freq = m[key];
                if (freq == key) {
                    m.erase(key);
                }
            }
        }
        return ans;
    }
};