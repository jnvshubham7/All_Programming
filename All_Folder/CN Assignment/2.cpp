
#include <algorithm>
#include <assert.h>
#include <bitset>
#include <climits>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <time.h>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;
typedef long long ll;
typedef long double ld;
#define mod 1000000007
#define inf 1e17
#define endl '\n'
struct Node {
  int data;
  struct Node *next;
};
void insertAtBeg(struct Node **head_ref, int new_data) {

  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}
void insertAtEnd(struct Node **head_ref, int new_data) {
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  struct Node *last = *head_ref;
  new_node->data = new_data;
  new_node->next = NULL;
  if (*head_ref == NULL) {
    *head_ref = new_node;
    return;
  }
  while (last->next != NULL)
    last = last->next;
  last->next = new_node;
  return;
}
void deleteNode(struct Node **head_ref, int key) {
  struct Node *temp = *head_ref, *prev;
  if (temp != NULL && temp->data == key) {
    *head_ref = temp->next;
    free(temp);
    return;
  }
  while (temp != NULL && temp->data != key) {
    prev = temp;
    temp = temp->next;
  }
  if (temp == NULL)
    return;
  prev->next = temp->next;
  free(temp);
}
bool searchNode(struct Node **head_ref, int key) {
  struct Node *current = *head_ref;
  while (current != NULL) {
    if (current->data == key)
      return true;
    current = current->next;
  }
  return false;
}
void sortLinkedList(struct Node **head_ref) {
  struct Node *current = *head_ref, *index = NULL;
  int temp;
  if (head_ref == NULL) {
    return;
  } else {
    while (current != NULL) {
      // index points to the node next to current
      index = current->next;
      while (index != NULL) {
        if (current->data > index->data) {
          temp = current->data;
          current->data = index->data;
          index->data = temp;
        }
        index = index->next;
      }
      current = current->next;
    }
  }
}
void printList(struct Node *node) {
  while (node != NULL) {
    cout << node->data << " ";
    node = node->next;
  }
}
int main() {
  struct Node *head = NULL;
  insertAtEnd(&head, 1);
  insertAtBeg(&head, 2);
  insertAtBeg(&head, 3);
  insertAtEnd(&head, 4);
  insertAtEnd(&head, 5);
  cout << "In the beginning this is the list :- ";
  printList(head);
  cout << "\nAfter deleting an element: ";
  deleteNode(&head, 3);
  printList(head);
  int item_to_find = 3;
  if (searchNode(&head, item_to_find)) {
    cout << endl << item_to_find << " is found";
  } else {
    cout << endl << item_to_find << " is not found";
  }
  sortLinkedList(&head);
  cout << "\nSorted List: ";
  printList(head);
}
