//all linked list functions

//reverse a linked list

 ListNode *reverseList(ListNode *head) {
    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
 }
 
    //reverse a linked list in groups of k  

    ListNode *reverseKGroup(ListNode *head, int k) {
        if (head == NULL || k == 1) return head;
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *pre = dummy;
        ListNode *cur = head;
        ListNode *next = NULL;
        int count = 0;
        while (cur != NULL) {
            next = cur->next;
            count++;
            if (count == k) {
                pre->next = reverseList(cur);
                cur->next = next;
                pre = cur;
                cur = next;
                count = 0;
            } else {
                cur = next;
            }
        }
        return dummy->next;
    }

    