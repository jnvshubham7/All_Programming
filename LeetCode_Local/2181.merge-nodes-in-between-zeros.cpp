/*
 * @lc app=leetcode id=2181 lang=cpp
 *
 * [2181] Merge Nodes in Between Zeros
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
    ListNode* mergeNodes(ListNode* head) {

        ListNode* newhead =NULL;

        if(head == nullptr)
            return nullptr;

       vector<int> v;
         ListNode* cur = head;
            while(cur != nullptr)
            {
                v.push_back(cur->val);
                cur = cur->next;
            }

            //print v
            // for(int i=0;i<v.size();i++)
            // {
            //    cout<<v[i]<<" ";
            // }
            // cout<<endl;


      
        vector <int> v2;
        int sum=0;
         
      
                



            
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==0)
                {

                    //find sum until next 0
                    // for(int j=i+1;j<v.size();j++)
                    // {
                        
                    //     if(v[j]==0)
                    //     {
                    //         v2.push_back(sum);
                    //         sum=0;
                    //         break;
                    //     }
                    //     sum+=v[j];
                    //     i++;
                    // }
                   
                }
            }

            //print v2
            for(int i=0;i<v2.size();i++)
            {
                cout<<v2[i]<<" ";
            }
            cout<<endl;





            

        return newhead;
                
        
    }
};
// @lc code=end





int main(){
Solution s;

   // head = [0,1,0,3,0,2,2,0]

   int arr[] = {0,1,0,3,0,2,2,0};
    ListNode* head = new ListNode(arr[0]);
    ListNode* cur = head;
    for(int i = 1; i < sizeof(arr)/sizeof(int); i++)
    {
        cur->next = new ListNode(arr[i]);
        cur = cur->next;
    }
    s.mergeNodes(head);



    return 0;
}