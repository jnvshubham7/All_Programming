/*
 * @lc app=leetcode id=92 lang=cpp
 *
 * [92] Reverse Linked List II
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {



        ListNode* curr=head;
        ListNode* prev=head;

        //print val

        //print list node
        cout<<"list node"<<endl;

        cout<<curr->val<<" ";
        cout<<prev->val<<endl;


        stack<int> st;

        for(int i=0;i<left-1;i++)
        {
            //print "first loop "
            cout<<"first loop "<<endl;
            curr=curr->next;
            prev=prev->next;

            //print the values of the nodes
            cout<<curr->val<<" ";
            cout<<prev->val<<" "<<endl;
        }

        for(int i=0;i<(right-left+1);i++)
        {

            //print "second loop "
            cout<<"second loop "<<endl;
            st.push(curr->val);
            curr=curr->next;

           
            //print the values of the stack
            cout<<st.top()<<" ";

             //print the values of the nodes
            cout<<curr->val<<" "<<endl;


        }

        for(int i=0;i<(right-left+1);i++)
        {

            //print "third loop "
            cout<<"third loop "<<endl;
            prev->val=st.top();
            cout<<st.top()<<" ";
            
            st.pop();

            prev=prev->next;
            cout<<prev->val<<" "<<endl;

        }

        return head;




        
    }
};
// @lc code=end

