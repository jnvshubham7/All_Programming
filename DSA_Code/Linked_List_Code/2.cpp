#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node* next;

    node(int val)
    {
        next->val=val;
        
    }
};

int main() {
    node* head;
    // node* one = NULL;
    // node* two = NULL;
    // node* three = NULL;





    vector<int> v = {1,2,3,4};

    for(int i=0;i<v.size();i++)
    {
        node*temp;
        temp->val=v[i];
        head->next=temp;
    }


    // one = new node();
    // two = new node();
    // three = new node();

    // one->val = 1;
    // two->val = 2;
    // three->val = 3;

    // one->next = two;
    // two->next = three;
    // three->next = NULL;

    // head = one;

    // while (head != NULL) {
    //     cout << head->val << "->";
    //     head = head->next;
    // }

    // return 0;
}
