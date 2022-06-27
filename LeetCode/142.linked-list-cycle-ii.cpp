/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
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
    ListNode *detectCycle(ListNode *head) {


    }
};
// @lc code=end





int main(){
Solution s;

    int n;
    cin>>n;

    int a[n];
    fr(i,n){
        cin>>a[i];
    }

    
    ListNode* head= new ListNode(a[0]);
    ListNode* curr=head;

    for(int i=1;i<n;i++)
    {
        curr->next=new ListNode(a[i]);
        curr=curr->next;

    }

    

    ListNode* ans=s.detectCycle(head);
    if(ans==NULL){
        cout<<"no cycle"<<endl;
    }
    else{
        cout<<"cycle"<<endl;
    }

    // 4
    // 3 2 0 -4




    return 0;
}