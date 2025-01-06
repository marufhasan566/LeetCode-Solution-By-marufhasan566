// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int freq_arr[101] = {0};
        int freq_arr2[101] = {0};
        vector<int> v;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= 0)
            {
                if (!freq_arr[nums[i]])
                {
                    v.push_back(nums[i]);
                    freq_arr[nums[i]]++;
                }
            }
            if (nums[i] < 0)
            {
                if (!freq_arr2[100 + nums[i]])
                {
                    v.push_back(nums[i]);
                    freq_arr2[100 + nums[i]]++;
                }
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        int k = v.size();
        nums.clear();
        nums = v;
        cout << endl
             << k << endl;
        return k;
    }
};