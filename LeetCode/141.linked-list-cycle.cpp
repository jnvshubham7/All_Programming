/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
    
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};




// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int hasCycle(ListNode *head) {

        if(head==NULL)
        {
            return false;
        }



        ListNode* slow=head;
        ListNode* fast=head;

        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;

            if(slow==fast)
            {
                return true;
            }

          }

          return false;



       




        
       
        
    }
};
// @lc code=end





int main(){
Solution s;

   int n;
   cin>>n;

    int a[n];
    fr(i,n)
    {
        cin>>a[i];
    }

    ListNode* head = new ListNode(a[0]);
    ListNode* cur = head;
    fr(i,n)
    {
        if(i!=0)
        {
            cur->next = new ListNode(a[i]);
            cur = cur->next;
        }
    }
    cout<<s.hasCycle(head)<<endl;

    //print 
    
    // ListNode* temp = head;
    // while(temp != NULL)
    // {
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // }
    // cout<<endl;
    
    
   










    //cout<<s.hasCycle(head)<<endl;





    return 0;
}





























//  if(head == NULL)
//            return false;
//          ListNode* slow = head;
//             ListNode* fast = head;
//             while(fast != NULL && fast->next != NULL){
//                 slow = slow->next;
//                 fast = fast->next->next;
//                 if(slow == fast)
//                     return true;

//             }
//             return false;