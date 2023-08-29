https://leetcode.com/problems/sort-an-array/description/
https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1/#
https://practice.geeksforgeeks.org/problems/reverse-a-stack/1/

//Sorting through recursion

#include<bits/stdc++.h>
using namespace std;
//sorting an array---------------------------------------
void insert(vector<int>& v,int temp){
    if(v.size()==0 || v.at(v.size()-1)<=temp){
        v.push_back(temp);
        return;
    }else{
        int val=v.at(v.size()-1);
        v.pop_back();
        insert(v,temp);

        v.push_back(val);
        //return;
    }
}
void sort_vector(vector<int>& v){
    if(v.size()==1){
        return;
    }else{
        int temp=v.at(v.size()-1);

        v.pop_back();
        sort_vector(v);

        insert(v,temp);
    }
}
//========================================================

//sorting a stack-----------------------------------------
void stack_insert(stack<int>& s,int temp){
    //  if(s.size()==0||s.top()>=temp) --> this condition if the greatest element has to be at the top() of stack;
    if(s.size()==0||s.top()<=temp){ // --> this condition if the smallest element has to be at the top() of stack;
        s.push(temp);
        return;
    }
    int val=s.top();
    s.pop();
    stack_insert(s,temp);
    s.push(val);
    return;
}

void sort_stack(stack<int>& s){
    if(s.size()==1){
        return;
    }
    else{
        int temp=s.top();
        s.pop();
        sort_stack(s);

        stack_insert(s,temp);
        return;
    }
}
//====================================================

//Deleting the mid element of the stack-----------------------------
void delete_mid_stack(stack<int>& s,int mid){
    if(mid==1){
        s.pop();
        return;
    }
    int temp=s.top();

    s.pop();
    --mid;

    delete_mid_stack(s,mid);
    //mid++;

    s.push(temp);
    return;
}
//=======================================================

//reversing a stack--------------------------------------
void insert_reverse(stack<int>& s,int temp){
    if(s.empty()){
        s.push(temp);
        return;
    }
    int val=s.top();
    s.pop();
    insert_reverse(s,temp);

    s.push(val);
    return;
}
void reverse_stack(stack<int>& s){
    if(s.size()==1){
        return;
    }
    int temp=s.top();
    s.pop();
    reverse_stack(s);

    insert_reverse(s,temp);
    return;
}
//======================================================
int main(){
    int n=10,inp;

    vector<int>v;
    stack<int>s;
//input--------------------------
    for(int i=0;i<n;i++){
        cin>>inp;
        v.push_back(inp);
        s.push(inp);
    }
//sorting a vector----------------
cout<<"\nsorting a vector----------------\n";
    sort_vector(v);
    for(int i=0;i<n;i++){
        cout<<v.at(i)<<" ";
    }
//sorting a stack-----------------
cout<<"\nsorting a stack-----------------\n";
    sort_stack(s);
    cout<<"\n";
    stack<int> temp=s; //copying the value of stack s to temp
    for(int i=0;i<n;i++){
        cout<<temp.top()<<" ";
        temp.pop();
    }

//deleting mid element of a stack-------------
    cout<<"\ndeleting mid element of a stack-------------\n";
    delete_mid_stack(s,(s.size()/2)+1);
    temp=s;
    cout<<"\n";
    for(int i=0;i<s.size();i++){
        cout<<temp.top()<<" ";
        temp.pop();
    }
//reversing a stack----------------------------
    cout<<"\nreversing a stack----------------------------\n";
    reverse_stack(s);
    temp=s;
    cout<<"\n";
    for(int i=0;i<s.size();i++){
        cout<<temp.top()<<" ";
        temp.pop();
    }
//
    return 0;
}