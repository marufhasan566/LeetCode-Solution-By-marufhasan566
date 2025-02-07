// https://leetcode.com/problems/reverse-bits/description/?envType=study-plan-v2&envId=top-interview-150
// took help from YT. chatGPT helped me to understand the concept of the problem
// https://www.youtube.com/watch?v=FzRz6Xj4WGk&ab_channel=RoshanBhatta
// https://www.youtube.com/watch?v=-5z9dimxxmI&ab_channel=CodeAndCoffee

class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t result = 0;
        for (int i = 0; i < 32; i++)
        {
            int lastBit = n & 1;
            // cout << "lastBit: " << lastBit << endl;
            result = (result << 1) | lastBit;
            // cout << "result: " << result << endl;
            n = n >> 1;
            // cout << "n: " << n << endl;
            // cout << endl << endl;
        }
        return result;
    }
};
