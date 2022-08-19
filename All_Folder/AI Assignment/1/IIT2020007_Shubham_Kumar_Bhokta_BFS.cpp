
#include <bits/stdc++.h>

using namespace std;

class Node{
public:
    Node();
    Node(int[]);
    list<Node*> children;
    Node *parent;
    int puzzle[9];
    int x;
    void setPuzzle(int[]);
    bool goalTest();
    void moveLeft(int[], int); 
    void moveRight(int[], int); 
    void moveUp(int[], int); 
    void moveDown(int[], int); 
    void copyPuzzle(int[], int[]);
    void printPuzzle();
    bool samePuzzle(int[]);
    void moveAllDirections();

};

class UninformedSearch{
public:
    UninformedSearch();
    list<Node*> breadthFirstSearch(Node*);
};

int main(){
    int array[9] = {
        1, 2, 4,
        3, 0, 5,
        7, 6, 8
    };

    Node root(array);
    UninformedSearch ui;

    list<Node*> solution = ui.breadthFirstSearch(&root);
    if(solution.size()>0){
        solution.reverse();
        for(list<Node*>::iterator it=solution.begin();it!=solution.end();++it)
            (*it)->printPuzzle();
    }
    else
        cout << "NO SOLUTION WAS FOUND\n";
}

Node::Node(){
    parent = NULL;
    x = 0;
    for(int i=0;i<9;i++)
        puzzle[i] = 0;
}

Node::Node(int arr[9]){
    setPuzzle(arr);
    parent = NULL;
    x = 0;
}

 void Node::setPuzzle(int arr[9]){
     for(int i=0;i<9;i++)
        puzzle[i] = arr[i];
 }

 bool Node::goalTest(){ 
    for(int i=0;i<9;i++)
        if(puzzle[i]!=i)
            return false;
    return true;
}

void Node::copyPuzzle(int p1[9], int p2[9]) {
    for(int i=0;i<9;i++) 
        p1[i] = p2[i];
}

void Node::moveLeft(int arrPuzzle[9], int i){
    if(i%3 > 0) {
        int newArrPuzzle[9];
        copyPuzzle(newArrPuzzle, arrPuzzle); 
        newArrPuzzle[i] = newArrPuzzle[i-1];
        newArrPuzzle[i-1] = 0;

        Node* child = new Node(newArrPuzzle);
        children.push_back(child); 
        child->parent = this; 
    }
}

void Node::moveRight(int arrPuzzle[9], int i){ 
    if(i%3 < 2) {
        int newArrPuzzle[9];
        copyPuzzle(newArrPuzzle, arrPuzzle);
        newArrPuzzle[i] = newArrPuzzle[i+1];
        newArrPuzzle[i+1] = 0;

        Node* child = new Node(newArrPuzzle);
        children.push_back(child);
        child->parent = this;
    }
}

void Node::moveUp(int arrPuzzle[9], int i){ 
    if(i-3 >= 0) {
       int newArrPuzzle[9];
        copyPuzzle(newArrPuzzle, arrPuzzle);
        newArrPuzzle[i] = newArrPuzzle[i-3];
        newArrPuzzle[i-3] = 0;

        Node* child = new Node(newArrPuzzle);
        children.push_back(child);
        child->parent = this;
    }
}

void Node::moveDown(int arrPuzzle[9], int i){ 
    if(i +3 < 9) {
        int newArrPuzzle[9];
        copyPuzzle(newArrPuzzle, arrPuzzle);
        newArrPuzzle[i] = newArrPuzzle[i+3];
        newArrPuzzle[i+3] = 0;

        Node* child = new Node(newArrPuzzle);
        children.push_back(child);
        child->parent = this;
    }   
}

void Node::printPuzzle(){ 
    int k = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout << puzzle[k++] << " ";
        cout << endl;
    }
    cout << endl;
}

bool Node::samePuzzle(int puzzleArr[9]){ 
    for(int i=0;i<9;i++)
        if(puzzle[i]!=puzzleArr[i])
            return false;
    return true;
}

void Node::moveAllDirections(){
    for(int i=0;i<9;i++)
        if(puzzle[i]==0)
            x = i; 
    
    moveLeft(puzzle, x);
    moveRight(puzzle, x);
    moveUp(puzzle, x);
    moveDown(puzzle, x);

}

UninformedSearch::UninformedSearch(){

}

list<Node*> UninformedSearch::breadthFirstSearch(Node *root){
    list<Node*> pathToSolution;
    list<Node*> openList;
    list<Node*> closedList;

    openList.push_back(root);
    bool goalFound = false;

    while(openList.size()>0&&!goalFound){
        Node* currentNode = openList.front();
        closedList.push_back(currentNode);
        openList.pop_front();

        currentNode->moveAllDirections();
        // currentNode->printPuzzle();
        for(list<Node*>::iterator it=currentNode->children.begin();it!=currentNode->children.end()&&!goalFound;++it){
            //Node* currentChild = currentNode->children.front();
            
            if((*it)->goalTest()){
                cout << "GOAL FOUND\n";
                goalFound = true;
                //trace dayun sa path kay nakit-an naman
                Node *current = *it;
                pathToSolution.push_back(current);

                while(current->parent!=NULL){
                    current = current->parent;
                    pathToSolution.push_back(current);
                }
            }
            bool containsClosed = false;
            bool containsOpen = false;
            for(list<Node*>::iterator itt=closedList.begin();itt!=closedList.end();++itt)
                if((*itt)->samePuzzle((*it)->puzzle))
                    containsClosed = true;
            for(list<Node*>::iterator itt=openList.begin();itt!=openList.end();++itt)
                if((*itt)->samePuzzle((*it)->puzzle))
                    containsOpen = true;
            if(!containsClosed&&!containsOpen)
                openList.push_back(*it);
        }
    }
    return pathToSolution;
}

