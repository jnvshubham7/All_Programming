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
    ListNode* swapPairs(ListNode* head) {

     //Given a linked list, swap every two adjacent nodes and return its head. 
     //You must solve the problem without modifying the values in the list's nodes 
     //(i.e., only nodes themselves may be changed.)

     //swap every two adjacent nodes and store the result in a new list 
        //and return its head.

        if(head==NULL || head->next==NULL)
            return head;
        ListNode* temp=head;
        ListNode* newhead=head->next;
        ListNode* prev=NULL;
        while(temp!=NULL && temp->next!=NULL){
            ListNode* next=temp->next;
            temp->next=next->next;
            next->next=temp;
            if(prev!=NULL)
                prev->next=next;
            prev=temp;
            temp=temp->next;
            
        }
        return newhead;






        //  if(head == NULL)
        //     return NULL;
        // if(head->next == NULL)
        //     return head;
        
        // ListNode* next = head->next;
        // head->next = swapPairs(next->next);
        // next->next = head;
        
        // return next;





        //code here
        // if(head==NULL || head->next==NULL)
        //     return head;
        // ListNode* temp=head;
        // ListNode* prev=NULL;
        // while(temp!=NULL && temp->next!=NULL){
        //     ListNode* next=temp->next;
        //     temp->next=next->next;
        //     next->next=temp;
        //     if(prev!=NULL)
        //         prev->next=next;
        //     prev=temp;
        //     temp=temp->next;
        // }
        // return head;


        // if(head==NULL || head->next==NULL)
        //     return head;
        // ListNode* temp=head;
        // ListNode* prev=NULL;
        // ListNode* next=NULL;
        // while(temp!=NULL && temp->next!=NULL){
        //     next=temp->next;
        //     temp->next=next->next;
        //     next->next=temp;
        //     if(prev!=NULL)
        //         prev->next=next;
        //     prev=temp;
        //     temp=temp->next;
        // }
        //reverse(head);

        //return whole list
        //return head;

        //return head;
        //return prev and prev->next
        // return prev;

        // return  next;
        //return temp;
        
    }
};









