/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        if(l1==NULL)
        {
            return l2;
        }
        if(l2==NULL)
        {
            return l1;
        }
        vector<int>v;
        ListNode* curr=l1;
        while(curr!=NULL)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }
        curr=l2;
        while(curr!=NULL)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }
        sort(v.begin(),v.end());
        if(v.size()==0)
        {
            return NULL;
        }
        ListNode* ans=new ListNode(v[0]);
        ListNode* curr2=ans;
        for(int i=1;i<v.size();i++)
        {
            curr2->next=new ListNode(v[i]);
            curr2=curr2->next;
        }
        return ans;
   
        
        
    }
};
// @lc code=end







int main(){
Solution s;

    


    return 0;
}





















     
//   if(l1 == NULL) 
//             return l2;
//         if(l2 == NULL) 
//             return l1;
//         if(l1->val>=l2->val) 
//             l2->next = mergeTwoLists(l1, l2-> next);
//         else{
//             l1->next = mergeTwoLists(l1->next, l2);
//             l2 = l1;
//         }
        
//         return l2;