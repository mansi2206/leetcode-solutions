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
    ListNode* middleNode(ListNode* head) {
        int size = 0;
        ListNode* temp = head;

        while(temp != NULL){
            temp = temp -> next;
            size++;
        }

        int midPos = size / 2 + 1;
        temp = head;

        for(int i = 1; i < midPos; i++){
            temp = temp -> next;
        }
        return temp;
    }
};