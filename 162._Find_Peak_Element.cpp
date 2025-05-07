// https://leetcode.com/problems/find-peak-element/description/?envType=study-plan-v2&envId=top-interview-150
// https://www.youtube.com/watch?v=qQKbr4WtGjc&ab_channel=AyushiSharma

class Solution
{
public:
    int findPeakElement(vector<int> &arr)
    {

        int n = arr.size();
        if (n == 1)
        {
            return 0;
        }
        int low = 0, high = n - 1;
        while (low <= high)
        {

            int mid = low + (high - low) / 2;
            if (mid == 0)
            {
                if (arr[mid] > arr[mid + 1])
                {
                    return mid;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else if (mid == n - 1)
            {
                if (arr[mid - 1] < arr[mid])
                {
                    return mid;
                }
                else
                {
                    high = mid - 1;
                }
            }
            else
            {
                if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
                {
                    return mid;
                }
                else if (arr[mid] < arr[mid + 1])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }

        return -1;
    }
};