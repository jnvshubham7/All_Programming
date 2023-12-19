#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

node* top;


void push(int data)
{
    node* temp new node();
    if(!temp)
    {
        cout<<"stack overflow"<<endl;
        exit(1);
    }

    temp->data=data;
    temp->next=top;
    top=temp;

}


int is_empty()
{
    return top==NULL;
}


int 