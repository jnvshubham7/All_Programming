class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;

        int len = 0;
        while (temp != NULL) {
            len++;
            temp = temp->next;
        }

        ListNode* l1 = head;
        for (int i = 0; i < k - 1; i++) {
            l1 = l1->next;
        }

        ListNode* l2 = head;
        for (int i = 0; i < len - k; i++) {
            l2 = l2->next;
        }

        // Swap values of l1 and l2
        int tempVal = l1->val;
        l1->val = l2->val;
        l2->val = tempVal;

        return head;
    }
};
