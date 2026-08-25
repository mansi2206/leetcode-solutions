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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // here we are taking curr(i.e current node) as duplicate.
        if (head == NULL) {
            return head;
        }
        ListNode* curr = head->next;
        ListNode* prev = head;

        while (curr != NULL) {
            if (curr->val != prev->val) {
                curr = curr->next;
                prev = prev->next;
            } else {
                // delete curr;
                prev->next = curr->next;
                // curr ko link kro next se
                curr = curr->next;
            }
        }
        return head;
    }
};