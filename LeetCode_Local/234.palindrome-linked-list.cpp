/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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

        
    

    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        ListNode* temp=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        
        return temp;
        
    }




    bool isPalindrome(ListNode* head) {

        //go to the middle of the list

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        //reverse the second half of the list

        slow = reverseList(slow);

        //compare the first half and the second half

        ListNode* p = head;
        ListNode* q = slow;

        while(q != nullptr) {
            if(p->val != q->val) {
                return false;
            }
            p = p->next;
            q = q->next;
        }

        return true;



        

    }

    
};
// @lc code=end

















//  if(head == NULL)
//         {
//             return true;
//         }
//         vector<int> v;
//         ListNode* p = head;
//         while(p != nullptr) {
//             v.push_back(p->val);
//             p = p->next;
//         }
//         int i = 0;
//         int j = v.size()-1;
//         while(i < j) {
//             if(v[i] != v[j]) {
//                 return false;
//             }
//             i++;
//             j--;
//         }
//         return true;