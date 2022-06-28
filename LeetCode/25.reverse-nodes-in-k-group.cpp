/*
 * @lc app=leetcode id=25 lang=cpp
 *
 * [25] Reverse Nodes in k-Group
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

    ListNode* reverseKGroup(ListNode* head, int k) {

        if(head==NULL)
        {
            return NULL;
        }

        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;

        int count=0;

        while(curr!=NULL && count<k)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }

        if(next!=NULL)
        {
            head->next=reverseKGroup(next,k);
        }
        else
        {
            head->next=NULL;
        }

        return prev;



        
    }
};
// @lc code=end





int main(){
Solution s;

//    [1,2,3,4,5]
// 3

   int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    ListNode* head=new ListNode(a[0]);
    ListNode* curr=head;

    fr(i,n-1)
    {
        curr->next=new ListNode(a[i+1]);
        curr=curr->next;
    }

    

    ListNode* head=new ListNode(arr[0]);
    ListNode* cur=head;
   for(int i=1;i<10;i++){
       cur->next=new ListNode(arr[i]);
       cur=cur->next;
    }

    ListNode* res=s.reverseKGroup(head,3);
    while(res)
    {
        cout<<res->val<<" ";
        res=res->next;
    }
    cout<<endl;

    







    return 0;
}