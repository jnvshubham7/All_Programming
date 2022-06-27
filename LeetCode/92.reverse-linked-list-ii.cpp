/*
 * @lc app=leetcode id=92 lang=cpp
 *
 * [92] Reverse Linked List II
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





int main(){
Solution s;

    int n,left,right;
    cin>>n>>left>>right;

    int a[n];
    fr(i,n)
    {
        cin>>a[i];
    }

    ListNode* head = new ListNode(a[0]);
    ListNode* curr = head;
    fr(i,n)
    {
        if(i!=0)
        {
            curr->next = new ListNode(a[i]);
            curr = curr->next;
        }
    }
    ListNode* ans = s.reverseBetween(head,left,right);
    while(ans!=NULL)
    {
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    cout<<endl;
    //cout<<s.reverseBetween(head,left,right)<<endl;





    return 0;
}