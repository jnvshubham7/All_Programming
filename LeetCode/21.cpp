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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        //Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

//Return the head of the merged linked list.



  if(l1 == NULL) 
            return l2;
        if(l2 == NULL) 
            return l1;
        if(l1->val>=l2->val) 
            l2->next = mergeTwoLists(l1, l2-> next);
        else{
            l1->next = mergeTwoLists(l1->next, l2);
            l2 = l1;
        }
        
        return l2;






        // ListNode* head = new ListNode(0);
        // ListNode* temp = head;
        // while(list1 && list2)
        // {
        //     if(list1->val < list2->val)
        //     {
        //         temp->next = list1;
        //         list1 = list1->next;
        //     }
        //     else
        //     {
        //         temp->next = list2;
        //         list2 = list2->next;
        //     }
        //     temp = temp->next;



        // }
        // temp->next = list1 ? list1 : list2;
        // return head->next;



        
    }
};