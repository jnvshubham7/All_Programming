/*
 * @lc app=leetcode id=725 lang=cpp
 *
 * [725] Split Linked List in Parts
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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

        vector<ListNode*> newhead;


        vector<int> v;
        ListNode* p = head;
        while(p != nullptr) {
            v.push_back(p->val);
            p = p->next;
        }

        int n = v.size();
        vector<vector<int>> vv;

       if(n/k==0)
       {
        for(int i = 0; i < n; i++)
        {
            vector<int> v1;
            v1.push_back(v[i]);
            vv.push_back(v1);
        }
       }

      else {
        int m=n/k;
        for(int i = 0; i < k; i++)
        {
            vector<int> v1;
            for(int j = 0; j < m; j++)
            {
                v1.push_back(v[i*m+j]);
            }
            vv.push_back(v1);
        }
       
      }

        //print the vv
        for(int i = 0; i < vv.size(); i++)
        {
            cout<<"vv["<<i<<"] = ";
            for(int j = 0; j < vv[i].size(); j++)
            {
                cout<<vv[i][j]<<" ";
            }
            cout<<endl;
        }

        

        return newhead;



        
    }
};
// @lc code=end





int main(){
Solution s;

//[1,2,3,4,5,6,7,8,9,10], k = 3

int arr[] = {1,2,3,4,5,6,7,8,9,10};
int n = sizeof(arr)/sizeof(arr[0]);
ListNode* head = new ListNode(arr[0]);
ListNode* p = head;
for(int i = 1; i < n; i++)
{
    p->next = new ListNode(arr[i]);
    p = p->next;
}

  s.splitListToParts(head,3);
    


    return 0;
}