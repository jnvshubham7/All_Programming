/*
 * @lc app=leetcode id=1721 lang=cpp
 *
 * [1721] Swapping Nodes in a Linked List
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
      ListNode *next;
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
    ListNode* swapNodes(ListNode* head, int k) {

      

        



        
    }
};
// @lc code=end





int main(){
Solution s;

   int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


   //create a linked list
    ListNode* head=NULL;
    ListNode* temp=NULL;
    for(int i=0;i<n;i++)
    {
        if(head==NULL)
        {
            head=new ListNode(a[i]);
            temp=head;
        }
        else
        {
            temp->next=new ListNode(a[i]);
            temp=temp->next;
        }
    }

    ListNode* ans=s.swapNodes(head,2);

    while(ans!=NULL)
    {
        cout<<ans->val<<" ";
        ans=ans->next;
    }



    


    return 0;
}