/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head==NULL) return head;

        set <int> s;
        ListNode* temp=head;
        while(temp!=NULL){
            s.insert(temp->val);
            temp=temp->next;
        }
        temp=head;

        vector<int> v;
        //push all the elements in the set into the vector
        for(auto it:s){
            v.push_back(it);
        }


       ListNode* head1=new ListNode(v[0]);
         ListNode* temp1=head1;
        for(int i=1;i<v.size();i++){
            temp1->next=new ListNode(v[i]);
            temp1=temp1->next;
        }
        return head1;




        
    }
};
// @lc code=end





int main(){
Solution s;

    int n;
    cin>>n;
   vi v(n);

   fr(i,n)
   {
         cin>>v[i];
   }
   
   ListNode* head= new ListNode(v[0]);
    ListNode* temp=head;
   
    for(int i=1;i<n;i++)
    {
        temp->next=new ListNode(v[i]);
        temp=temp->next;
    }

    ListNode* res=s.deleteDuplicates(head);
    while(res!=NULL)
    {
        cout<<res->val<<" ";
        res=res->next;
    }








    return 0;
}