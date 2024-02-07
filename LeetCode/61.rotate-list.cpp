/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
 */

// @lc code=start
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
    ListNode* rotateRight(ListNode* head, int k) {

        ListNode* temp=head;
        ListNode* l2 = new ListNode();
      
       int len=0;

        while(temp!=NULL){
            len++;
            temp=temp->next;
        }

        if(len==0){
            return head;
        }

        int sz=len-k%len;

        if(sz==len){
            return head;
        }


        temp=head;

        while(sz>1){
            temp=temp->next;
            sz--;
        }

        l2=temp->next;

        temp->next=NULL;

        // l1=l2;

        ListNode* temp2=l2;


        // while(l2->next!=NULL){
        //     l2=l2->next;
        // }

        while(temp2->next!=NULL){
            temp2=temp2->next;
        }

        temp2->next=head;

      

      
        return l2;

      

    //   while()

        
        
    }
};
// @lc code=end

