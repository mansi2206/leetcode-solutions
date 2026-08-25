class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) {
            return head;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
        while (curr != NULL) {
            if (curr->val == val) {
                // If current node is head
                if (curr == head) {
                    head = curr->next;
                    curr = head;
                }
                // Otherwise remove current node
                else {
                    prev->next = curr->next;
                    curr = curr->next;
                }
            } 
            else {
                // Current node is not deleted
                prev = curr;
                curr = curr->next;
            }
            }
        return head;
    }
};