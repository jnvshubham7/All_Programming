#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node* next;

    // Constructor to initialize node with a value
    node(int value) {
        val = value;
        next = nullptr; // Make sure to initialize next to nullptr
    }
};

int main() {
  

    vector<int> v = {1, 2, 3, 4};

    for (int i = 0; i < v.size(); i++) {
        node* temp = new node(v[i]); // Create a new node with the current value
       

    return 0;
}
