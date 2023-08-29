#include<iostream>
using namespace std;

class ListNode {
    public:
    int data;
    ListNode* prev;
    ListNode* next;

    //constructor
    ListNode(int d ) {
        this-> data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~ListNode() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for ListNode with data "<< val << endl;
    }
};

//traversing a linked list
void print(ListNode* head) {
    ListNode* temp  = head ;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp  = temp -> next;
    }
    cout << endl;
}

//gives length of Linked List
int getLength(ListNode* head) {
    int len = 0;
    ListNode* temp  = head ;

    while(temp != NULL) {
        len++;
        temp  = temp -> next;
    }

    return len;
}
void insertAtHead(ListNode* &tail, ListNode* &head, int d) {

    //empty list
    if(head == NULL) {
        ListNode* temp = new ListNode(d);
        head = temp;
        tail = temp;
    }
    else{
        ListNode* temp = new ListNode(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }

}


void insertAtTail(ListNode* &tail,ListNode* &head, int d) {
    if(tail == NULL) {
        ListNode* temp = new ListNode(d);
        tail = temp;
        head = temp;
    }
    else{
        ListNode* temp = new ListNode(d);
        tail -> next  = temp;
        temp -> prev = tail;
        tail = temp;
    }

}

void insertAtPosition(ListNode* & tail, ListNode* &head, int position, int d) {
    
    //insert at Start
    if(position == 1) {
        insertAtHead(tail,head, d);
        return;
    }

    ListNode* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,head,d);
        return ;
    }

    //creating a ListNode for d
    ListNode* ListNodeToInsert = new ListNode(d);

    ListNodeToInsert ->next = temp -> next;
    temp -> next -> prev = ListNodeToInsert;
    temp -> next = ListNodeToInsert;
    ListNodeToInsert -> prev = temp;
}

void deleteListNode(int position, ListNode* & head) { 

    //deleting first or start ListNode
    if(position == 1) {
        ListNode* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle ListNode or last ListNode
        ListNode* curr = head;
        ListNode* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}



int main() {


    ListNode* head = NULL;
    ListNode* tail = NULL;

    print(head);
    //cout << getLength(head) << endl;

    insertAtHead(tail,head, 11);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(tail,head, 13);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(tail,head, 8);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtTail(tail,head, 25);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 2, 100);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 1, 101);
    print(head);

    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 7, 102);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    deleteListNode(7, head);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;





    return 0;
}


