class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        return rev(head, NULL);
    }

    ListNode* rev(ListNode* curr, ListNode* prev) {
        if (!curr) {
            return prev;
        }

        ListNode* next = curr->next;
        curr->next = prev;

        return rev(next, curr);
    }
};
