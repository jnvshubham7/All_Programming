/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    
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

    ListNode* head= new ListNode (a[0]);
    ListNode* temp=head;
    for(int i=1;i<n;i++)
    {
        temp->next=new ListNode (a[i]);
        temp=temp->next;
    }

    ListNode* res=s.reverseList(head);
    while(res!=NULL)
    {
        cout<<res->val<<" ";
        res=res->next;
    }



   

    return 0;
}




  if(head==NULL || head->next==NULL) return head;

       ListNode* chotaHead=reverse(head->next);

       head->next->next=head;

       head->next=NULL;

       return chotaHead;
    