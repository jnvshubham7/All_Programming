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

    ListNode* reverseBetween(ListNode* head, int left, int right) {


        ListNode* temp=head;
        ListNode* temp1=head;
        vector<int>v;
		//converting linked list to vector
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
		//reversing the vector accordingly
        reverse(v.begin()+left-1,v.begin()+right);
        int i=0;
		//converting vector to linked list
        while(temp1){
            temp1->val=v[i++];
            temp1=temp1->next;
        }
        return head;

//   int len=0;
//         ListNode* curr=head;
//         while(curr){
//             len++;
//             curr=curr->next;
//         }
        
//         int arr[len];

//         fr(i,len){
//             arr[i]=head->val;
//             head=head->next;
//         }

//         //reverse arr from left element to right element

//         int index=arr[left];
//         int index2=arr[right];

//         while(index<index2){
//             int temp=arr[index];
//             arr[index]=arr[index2];
//             arr[index2]=temp;
//             index++;
//             index2--;
//         }
        

        

//         //create new linked list from arr
//         ListNode* newHead=new ListNode(arr[0]);
//         ListNode* curr2=newHead;
//         fr(i,len){
//             if(i==0)continue;
//             curr2->next=new ListNode(arr[i]);
//             curr2=curr2->next;
//         }
//         return newHead;

      
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


































//   int len=0;
//         ListNode* curr=head;
//         while(curr){
//             len++;
//             curr=curr->next;
//         }
        
//         int arr[len];

//         fr(i,len){
//             arr[i]=head->val;
//             head=head->next;
//         }

//         //reverse arr from left element to right element

//         int index=arr[left];
//         int index2=arr[right];

//         while(index<index2){
//             int temp=arr[index];
//             arr[index]=arr[index2];
//             arr[index2]=temp;
//             index++;
//             index2--;
//         }
        

        

//         //create new linked list from arr
//         ListNode* newHead=new ListNode(arr[0]);
//         ListNode* curr2=newHead;
//         fr(i,len){
//             if(i==0)continue;
//             curr2->next=new ListNode(arr[i]);
//             curr2=curr2->next;
//         }
//         return newHead;







 // ListNode* curr=head;
        // ListNode* prev=head;

        // //print val

        // //print list node
        // cout<<"list node"<<endl;

        // cout<<curr->val<<" ";
        // cout<<prev->val<<endl;


        // stack<int> st;

        // for(int i=0;i<left-1;i++)
        // {
        //     //print "first loop "
        //     cout<<"first loop "<<endl;
        //     curr=curr->next;
        //     prev=prev->next;

        //     //print the values of the nodes
        //     cout<<curr->val<<" ";
        //     cout<<prev->val<<" "<<endl;
        // }

        // for(int i=0;i<(right-left+1);i++)
        // {

        //     //print "second loop "
        //     cout<<"second loop "<<endl;
        //     st.push(curr->val);
        //     curr=curr->next;

           
        //     //print the values of the stack
        //     cout<<st.top()<<" ";

        //      //print the values of the nodes
        //     cout<<curr->val<<" "<<endl;


        // }

        // for(int i=0;i<(right-left+1);i++)
        // {

        //     //print "third loop "
        //     cout<<"third loop "<<endl;
        //     prev->val=st.top();
        //     cout<<st.top()<<" ";
            
        //     st.pop();

        //     prev=prev->next;
        //     cout<<prev->val<<" "<<endl;

        // }

        // return head;



