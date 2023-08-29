#include<iostream>
#include<map>
using namespace std;

class ListNode {

    public:
    int data;
    ListNode* next;

    //constructor
    ListNode(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~ListNode() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for ListNode with data " << value << endl;
    }

};

void insertAtHead(ListNode* &head, int d) {

    // new ListNode create
    ListNode* temp = new ListNode(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(ListNode* &tail, int d) {
     // new ListNode create
    ListNode* temp = new ListNode(d);
    tail -> next = temp;
    tail  = temp;
}

void print(ListNode* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    ListNode* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtPosition(ListNode* &tail, ListNode* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
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
        insertAtTail(tail,d);
        return ;
    }

    //creating a ListNode for d
    ListNode* ListNodeToInsert = new ListNode(d);

    ListNodeToInsert -> next = temp -> next;

    temp -> next = ListNodeToInsert;
}

void deleteListNode(int position, ListNode* & head) { 

    //deleting first or start ListNode
    if(position == 1) {
        ListNode* temp = head;
        head = head -> next;
        //memory free start ndoe
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

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}

bool isCircularList(ListNode* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    ListNode* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;
}


bool detectLoop(ListNode* head) {

    if(head == NULL)
        return false;

    map<ListNode*, bool> visited;

    ListNode* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            cout << "Present on element " << temp->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}

ListNode* floydDetectLoop(ListNode* head) {

    if(head == NULL)
        return NULL;

    ListNode* slow = head;
    ListNode* fast = head;

    while(slow != NULL && fast !=NULL) {
        
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            cout << "present at " << slow -> data << endl;
            return slow;
        }
    }

    return NULL;

}

ListNode* getStartingListNode(ListNode* head) {

    if(head == NULL) 
        return NULL;

    ListNode* intersection = floydDetectLoop(head);
    ListNode* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;

}

void removeLoop(ListNode* head) {

    if( head == NULL)
        return;

    ListNode* startOfLoop = getStartingListNode(head);
    ListNode* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    } 

    temp -> next = NULL;

}


int main() {
    
    //created a new ListNode
    ListNode* ListNode1 = new ListNode(10);
    //cout << ListNode1 -> data << endl;
   // cout << ListNode1 -> next << endl;
    
    //head pointed to ListNode1
    ListNode* head = ListNode1; 
    ListNode* tail = ListNode1;
    //print(head);

    insertAtTail(tail, 12);

    //print(head);
    
    insertAtTail(tail, 15);
    //print(head);

    insertAtPosition(tail,head, 4, 22);
    //print(head);    

    //cout << "head " << head -> data << endl;
    //cout << "tail " << tail -> data << endl;

    //deleteListNode(4, head);
    

    tail -> next = head ->next;

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    //print(head);

    if(floydDetectLoop(head) != NULL) {
        cout << "Cycle is present " << endl;
    }
    else
    {
        cout << "no cycle" << endl;
    }

    ListNode* loop = getStartingListNode(head);

    cout << "loop starts at " << loop -> data  << endl;

    removeLoop(head);
    print(head);

    /*
    print(head);

    if(isCircularList(head)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }
    */


    return 0;
}





