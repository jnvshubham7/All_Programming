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


        //erase all the duplicate nodes in the list
        
        //push the node into a vector
        //sort the vector
        //create a new list
        //iterate through the vector and push the node into the new list only unique nodes
        //return the new list
        vector<int> v;
        ListNode* curr = head;
        while(curr != nullptr) {
            v.push_back(curr->val);
            curr = curr->next;
        }


        //store frequency of each element in a map


        //sort the vector
        sort(v.begin(), v.end());
        unordered_map<int, int> m;
        for(int i = 0; i < v.size(); i++) {
            m[v[i]]++;
        }

        //create a new list which have 1 frequency element
        ListNode* head2 = nullptr;
        ListNode* curr2 = nullptr;
        for(int i = 0; i < v.size(); i++) {
            if(m[v[i]] == 1) {
                if(head2 == nullptr) {
                    head2 = new ListNode(v[i]);
                    curr2 = head2;
                } else {
                    curr2->next = new ListNode(v[i]);
                    curr2 = curr2->next;
                }
            }
        }

        return head2;

        //check which element have duplicate 
        //then delete all elements == to the duplicate element
        // sort(v.begin(), v.end());
        // ListNode* new_head = new ListNode(v[0]);
        // ListNode* curr_new = new_head;
        // for(int i = 1; i < v.size(); i++) {
        //     if(v[i] != v[i-1]) {
        //         curr_new->next = new ListNode(v[i]);
        //         curr_new = curr_new->next;
        //     }
        // }
        // return new_head;


        // sort(v.begin(), v.end());
        // //erase the duplicate nodes in the vector
        // v.erase(unique(v.begin(), v.end()), v.end());
        // //create a new list
        // ListNode* new_head = new ListNode(v[0]);
        // ListNode* curr_new = new_head;
        // for(int i = 1; i < v.size(); i++) {
        //     curr_new->next = new ListNode(v[i]);
        //     curr_new = curr_new->next;
        // }
        // return new_head;


        // ListNode* new_head = new ListNode(v[0]);
        // ListNode* curr_new = new_head;
        // for(int i = 1; i < v.size(); i++) {
        //     if(v[i] != v[i-1]) {
        //         curr_new->next = new ListNode(v[i]);
        //         curr_new = curr_new->next;
        //     }
        // }
        // return new_head;




       




        // ListNode* curr = head;
        // ListNode* prev = nullptr;
        // while(curr != nullptr) {
        //     ListNode* next = curr->next;
        //     if(next != nullptr && curr->val == next->val) {
        //         curr->next = next->next;
        //     } else {
        //         prev = curr;
        //         curr = curr->next;
        //     }
        // }
        // return head;
        
    }
};