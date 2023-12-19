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

    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* temp = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return temp;
    }

    ListNode* findMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    bool compareLists(ListNode* p, ListNode* q) {
        while (p!=NULL && q != nullptr) {
            if (p->val != q->val) {
                return false;
            }
            p = p->next;
            q = q->next;
        }
        return true;
    }

    bool isPalindrome(ListNode* head) {
        // Find the middle of the list
        ListNode* middle = findMiddle(head);

        // Reverse the second half of the list
        ListNode* reversedSecondHalf = reverseList(middle);

        // Compare the first half and the reversed second half
        bool result = compareLists(head, reversedSecondHalf);

        // Reverse the second half back to its original order (optional)
        reverseList(reversedSecondHalf);

        return result;
    }
};
