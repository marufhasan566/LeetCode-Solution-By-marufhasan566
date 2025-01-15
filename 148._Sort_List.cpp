// https://leetcode.com/problems/sort-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
vector<int> v;
ListNode *newHead;
ListNode *newTail;
void createList(int value)
{
    ListNode *newNode = new ListNode(value);
    if (newHead == NULL)
    {
        newHead = newNode;
        newTail = newNode;
        return;
    }
    newTail->next = newNode;
    newTail = newNode;
}
class Solution
{
public:
    ListNode *sortList(ListNode *head)
    {
        v.clear();
        newHead = NULL;
        newTail = NULL;
        ListNode *temp = head;
        while (temp != NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
            createList(v[i]);
        }
        return newHead;
    }
};