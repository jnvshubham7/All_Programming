// Linked list implementation in C++
#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

class Node {
    public:
       int value;
         Node *next;

       
};

int main(){
   // fileio;

Node* head;
Node* one = NULL;
Node* two = NULL;
Node* three = NULL;


one = new Node();
two = new Node();
three = new Node();

one->value = 1;
two->value = 2;
three->value = 3;

one->next = two;
two->next = three;
three->next = NULL;


head = one;

while(head != NULL){


    cout<<head->value<<" ";
    head = head->next;
}

    

   
}