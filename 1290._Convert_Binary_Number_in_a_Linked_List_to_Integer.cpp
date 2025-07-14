// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/?envType=daily-question&envId=2025-07-14
// https://www.youtube.com/watch?v=sUf_-_c1zYI&ab_channel=codestorywithMIK
class Solution
{
public:
    ListNode *reverseLL(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *last = reverseLL(head->next);
        head->next->next = head;
        head->next = NULL;
        return last;
    }

    int getDecimalValue(ListNode *head)
    {
        head = reverseLL(head);

        int result = 0;
        int power = 0;
        while (head)
        {
            if (head->val == 1)
            {
                result += pow(2, power);
            }
            power++;
            head = head->next;
        }

        return result;
    }
};
