/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
     ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head == NULL)
            return NULL;

            ListNode* temp = head;

            int cnt=0;

            while(temp!=NULL)
            {
                cnt++;
                temp = temp->next;
            }

            int k=cnt-n;

            if(k==0)
            {
                head = head->next;
                return head;
            }

            temp=head;

            while(k>1)
            {
                temp=temp->next;
                k--;
            }

            temp->next = temp->next->next;

            return head;

        
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

    int k;
    cin>>k;

    ListNode* head = new ListNode(a[0]);
    ListNode* cur = head;
    fr(i,n-1){
        cur->next = new ListNode(a[i+1]);
        cur = cur->next;
    }
    cur->next = NULL;

     vector<int> v;
        ListNode* p = head;
        while(p != nullptr) {
            v.push_back(p->val);
            p = p->next;
        }

        //erase the nth element from the end
        v.erase(v.end() - k);

        //print v
        // for(int i = 0; i < v.size(); i++) {
        //     cout<<v[i]<<" ";
        // }


        

       ListNode* newhead = new ListNode(v[0]);
        ListNode* newcur = newhead;
        for(int i = 0; i < v.size()-1; i++) {
            newcur->next = new ListNode(v[i+1]);
            newcur = newcur->next;
        }
        newcur->next = NULL;

        ListNode* p1 = newhead;
        ListNode* p2 = head;
        while(p1 != nullptr) {
            cout<<p1->val<<" ";
            p1 = p1->next;
            p2 = p2->next;
        }
        cout<<endl;
       
       // return head;



    // ListNode* res = s.removeNthFromEnd(head,k);
    // while(res){
    //     cout<<res->val<<" ";
    //     res = res->next;
    // }
    // cout<<endl;



    return 0;
}











































 vector<int> v;
        ListNode* p = head;
        while(p != nullptr) {
            v.push_back(p->val);
            p = p->next;
        }

        //erase the nth element from the end
        v.erase(v.end() - n);

        //print v
        // for(int i = 0; i < v.size(); i++) {
        //     cout<<v[i]<<" ";
        // }
      

      if(v.size() == 0) {
          return nullptr;
        }

        

       ListNode* newhead = new ListNode(v[0]);
        ListNode* newcur = newhead;
        for(int i = 0; i < v.size()-1; i++) {
            newcur->next = new ListNode(v[i+1]);
            newcur = newcur->next;
        }
        newcur->next = NULL;

        return newhead;



      




    //     // ListNode* temp=head;
    //     // int cnt=0;
    //     // while(temp!=NULL){
    //     //     cnt++;
    //     //     temp=temp->next;
    //     // }
    //     // int k=cnt-n;
    //     // if(k==0){
    //     //     head=head->next;
    //     //     return head;
    //     // }
    //     // temp=head;
    //     // while(k>1){
    //     //     temp=temp->next;
    //     //     k--;
    //     // }
    //     // temp->next=temp->next->next;
    //     // return head;

        