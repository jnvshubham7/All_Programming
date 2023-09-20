// #include<bits/stdc++.h>
// using namespace std;

// struct Node {
//     int val;
//     Node* next;
//     Node(int x)
//     {
//         val=x;
//         next=NULL;
//     }
// };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;

        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        return prev;

       
       
    }
};






// int main() {
//     Solution s;

   
// }
