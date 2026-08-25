class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* curr1 = list1;
        ListNode* curr2 = list2;

        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        while (curr1 != NULL && curr2 != NULL) {

            if (curr1->val <= curr2->val) {
                tail->next = curr1;
                curr1 = curr1->next;
            }
            else {
                tail->next = curr2;
                curr2 = curr2->next;
            }

            tail = tail->next;
        }

        // Attach whatever is left
        if (curr1 != NULL)
            tail->next = curr1;
        else
            tail->next = curr2;

        return dummy->next;
    }
};