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
    ListNode* removeElements(ListNode* head, int val) {

        if (head == NULL) {
            return head;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;

        while (curr != NULL) {
            if (curr->val == val) {
                // if current node is at node
                if (curr == head) {
                    head = curr->next;
                    curr = head;
                } else {
                    // current node not at head
                    prev->next = curr->next;
                    curr = curr->next;
                }
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};