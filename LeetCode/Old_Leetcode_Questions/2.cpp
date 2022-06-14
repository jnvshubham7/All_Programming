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

// reverseList(ListNode* head) {
//     ListNode* prev = nullptr;   
//     ListNode* curr = head;
//     ListNode* next = nullptr;
//     while(curr != nullptr) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }




    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {




        







//add function to reverse the list
//ListNode* add(ListNode* l1, ListNode* l2) {
    // ListNode* head = nullptr;
    // ListNode* curr = nullptr;
    // int carry = 0;

    // while(l1 != nullptr || l2 != nullptr) {
    //     int sum = 0;
    //     if(l1 != nullptr) {
    //         sum += l1->val;
    //         l1 = l1->next;
    //     }
    //     if(l2 != nullptr) {
    //         sum += l2->val;
    //         l2 = l2->next;
    //     }
    //     sum += carry;
    //     carry = sum / 10;
    //     sum = sum % 10;
    //     ListNode* node = new ListNode(sum);
    //     if(head == nullptr) {
    //         head = node;
    //     }
    //     if(curr != nullptr) {
    //         curr->next = node;
    //     }
    //     curr = node;
    // }
    // if(carry > 0) {
    //     ListNode* node = new ListNode(carry);
    //     curr->next = node;
    // }
    // return head;
//}


//reverse the list
// ListNode* reverse(ListNode* head) {
//     ListNode* prev = nullptr;
//     ListNode* curr = head;
//     ListNode* next = nullptr;
//     while(curr != nullptr) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }











        //reverse l1 and l2
        // ListNode* l1_rev = reverse(l1);
        // ListNode* l2_rev = reverse(l2);

        // //add l1 and l2
        // ListNode* l1_l2_sum = add(l1_rev, l2_rev);

        // //reverse l1_l2_sum
        // ListNode* l1_l2_sum_rev = reverse(l1_l2_sum);

        // return l1_l2_sum_rev;

        
    }
};