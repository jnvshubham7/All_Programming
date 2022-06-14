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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //store every linked list in a vector
        // vector<ListNode*> lists1;
        // for (int i = 0; i < lists.size(); i++) {
        //     ListNode* node = new ListNode(lists[i]);
        //     lists1.push_back(node);
        // }
        // if the vector is empty return nullptr
        // if (lists.empty()) {
        //     return nullptr;
        // }
        // // if the vector has only one element return the element
        // if (lists.size() == 1) {
        //     return lists[0];
        // }

        //sort the vector
        // sort(lists1.begin(), lists1.end(), [](ListNode* a, ListNode* b) {
        //     return a->val < b->val;
        // });

        // //merge the vector
        // ListNode* head = lists1[0];
        // for (int i = 1; i < lists1.size(); i++) {
        //     head->next = lists1[i];
        //     head = head->next;
        // }
        // return head;
        


        // //sort the vector
        // sort(lists.begin(), lists.end(), [](ListNode* a, ListNode* b) {
        //     return a->val < b->val;
        // });
        // //merge the vector
        // ListNode* head = lists[0];
        // for (int i = 1; i < lists.size(); i++) {
        //     head->next = lists[i];
        //     head = head->next;
        // }
        //return the merged vector
       // return head;
       // return head;







       

        
        
    }
};