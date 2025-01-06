// https://leetcode.com/problems/remove-element/description/

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int count = 0;
        int countTotal = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val)
            {
                count++;
            }
            countTotal++;
        }
        sort(nums.begin(), nums.end());
        int idx;
        // check
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
            if (nums[i] == val)
            {
                idx = i;
                break;
            }
        }
        int k = countTotal - count;
        remove(nums.begin(), nums.end(), val);
        cout << endl
             << idx << " " << count << " " << k << " ";
        return k;
    }
};