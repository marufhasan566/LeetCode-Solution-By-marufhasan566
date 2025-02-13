// https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-ii/description/?envType=daily-question&envId=2025-02-13

// Solution that gave me TLE on Test Case #657
class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        vector<long> numz;
        for (int val : nums)
        {
            numz.push_back(val);
        }
        int opCount = 0;
        while (numz.size() >= 2)
        {
            // check
            bool flag = true;
            for (long int val : numz)
            {
                if (val < k)
                    flag = false;
            }
            if (flag)
                break;

            sort(numz.begin(), numz.end(), greater<long>());

            long long int last = numz[numz.size() - 1];
            numz.pop_back();
            long long int secondLast = numz[numz.size() - 1];
            numz.pop_back();

            long long int numberToAdd = (last * 2) + secondLast;
            numz.push_back(numberToAdd);

            opCount++;

            /*
            for (long int val : numz)
                cout << val << " ";
            cout << endl;
            */
        }
        return opCount;
    }
};

// Help from YT: https://www.youtube.com/watch?v=PVHJh8Gq3js&ab_channel=codestorywithMIK

class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        priority_queue<long, vector<long>, greater<long>> pq(begin(nums),
                                                             end(nums));
        int opCount = 0;
        while (!pq.empty() && pq.top() < k)
        {
            long smallest = pq.top();
            pq.pop();

            long secondSmallest = pq.top();
            pq.pop();

            pq.push(smallest * 2 + secondSmallest);

            opCount++;
        }
        return opCount;
    }
};
