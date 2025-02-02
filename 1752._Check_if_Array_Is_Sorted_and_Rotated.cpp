// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/?source=submission-noac

// My Solution:
// Got Error on test case 105: nums=[6,10,6]
class Solution
{
public:
    bool check(vector<int> &nums)
    {
        vector<int> v;
        for (int i : nums)
            v.push_back(i);
        sort(v.begin(), v.end());
        int countRotation = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[0] == nums[i])
                break;
            countRotation++;
        }
        // cout << countRotation << endl;
        for (int i = 0; i < countRotation; i++)
        {
            int x = nums[i];
            nums.push_back(x);
        }
        nums.erase(nums.begin(), nums.begin() + countRotation);
        // check
        for (int i : nums)
            cout << i << " ";
        if (v == nums)
            return true;
        else
            return false;
    }
};

// Help from ChatGPT
class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n = nums.size();
        int countBreaks = 0;

        // Count the number of breaks in sorted order
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > nums[(i + 1) % n])
                countBreaks++;
        }

        // A valid rotated sorted array has at most one break
        return countBreaks <= 1;
    }
};

// Help from ChatGPT and a little improvised
class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n = nums.size();
        int countBreaks = 0;
        // Count the number of breaks in sorted order
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                if (nums[i] > nums[0])
                    countBreaks++;
            }
            else
            {
                if (nums[i] > nums[i + 1])
                    countBreaks++;
            }
        }
        // A valid rotated sorted array has at most one break
        return countBreaks <= 1;
    }
};
