class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // int size = 0;

        // // Count the size of the linked list
        // ListNode* curr = head;
        // while (curr) {
        //     size++;
        //     curr = curr->next;
        // }

        // // Find the middle node
        // int middle = size / 2;
        // curr = head;
        // for (int i = 0; i < middle; i++) {
        //     curr = curr->next;
        // }

        // return curr;



        ListNode* slow=head;
        ListNode* fast=head;

        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        return slow;

            }
};
