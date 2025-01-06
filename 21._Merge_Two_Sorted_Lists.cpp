https : // leetcode.com/problems/merge-two-sorted-lists/

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
        void
        insertAtTail(ListNode *&head, int v)
{
    ListNode *newNode = new ListNode(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        vector<int> v;
        ListNode *temp1 = list1;
        ListNode *temp2 = list2;
        while (temp1 != NULL)
        {
            v.push_back(temp1->val);
            temp1 = temp1->next;
        }
        while (temp2 != NULL)
        {
            v.push_back(temp2->val);
            temp2 = temp2->next;
        }
        // check
        sort(v.begin(), v.end());
        ListNode *head = NULL;
        for (int i : v)
        {
            // cout << i << " ";
            insertAtTail(head, i);
        }
        return head;
    }
};