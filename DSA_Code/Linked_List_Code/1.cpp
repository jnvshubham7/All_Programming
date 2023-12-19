#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node* next;

    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }

};


void insert(node* &head, int val)
{
    node* temp=new node(val);
    temp->next=head;
    head=temp;
}


void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


void reverse(node* &head)
{

    node* prev=NULL;
    node* curr=head;
    node* next=NULL;

    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;




    }

    head=prev;
    
}





// void insertAtTail(node* &head, int val)
// {
//     node* temp=new node(val);
//     node* temp1=head;
//     while(temp1->next!=NULL)
//     {
//         temp1=temp1->next;
//     }
//     temp1->next=temp;
// }


// void insertAtPosition(node* &head, int val, int pos)
// {
//     node* temp=new node(val);
//     node* temp1=head;
//     int count=1;
//     while(count<pos-1)
//     {
//         temp1=temp1->next;
//         count++;
//     }
//     temp->next=temp1->next;
//     temp1->next=temp;
// }


// void deleteAtHead(node* &head)
// {
//     node* temp=head;
//     head=head->next;
//     delete temp;
// }


// void deleteAtTail(node* &head)
// {
//     node* temp=head;
//     while(temp->next->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     node* temp1=temp->next;
//     temp->next=NULL;
//     delete temp1;
// }



// void deleteAtPosition(node* &head, int pos)
// {
//     node* temp=head;
//     int count=1;
//     while(count<pos-1)
//     {
//         temp=temp->next;
//         count++;
//     }
//     node* temp1=temp->next;
//     temp->next=temp1->next;
//     delete temp1;
// }


int main()
{
    vector<int> v ={1,2,3,4,5};
    node* head=NULL;
    for(int i=0;i<v.size();i++)
    {
        insert(head,v[i]);
    }

    print(head);

    reverse(head);

    print(head);

    


}






