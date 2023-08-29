https://leetcode.com/problems/k-th-symbol-in-grammar/
//kth symbol in grammar--leetcode

#include <bits/stdc++.h>
using namespace std;

/* ///naive method
void push_for_one(vector<int>& v){
    v.push_back(1);
    v.push_back(0);
}
void push_for_zero(vector<int>& v){
    v.push_back(0);
    v.push_back(1);
}

void update_grammar(vector<int>& v){
    if(v.size()==0) return;

    int temp=v.at(v.size()-1);
    v.pop_back();

    update_grammar(v);

    if(temp==0) push_for_zero(v);
    else if(temp==1) push_for_one(v);
    return;
}

void generate_grammar(vector<int>& v,int n){
    if(n==0){
        v.push_back(0);
        return;
    }
    --n;
    generate_grammar(v,n);
    update_grammar(v);
}
int search_grammar(int n,int k){
    if(n==0) return 0;

    vector<int> grammar;
    generate_grammar(grammar,n);

    return grammar.at(k-1);
}
*/
//efficient method
int kthGrammar(int n, int k) {
    if(n==1 && k==1) return 0;

    int mid=pow(2,n-1);
    //cout<<mid;

    if(k<=mid) return kthGrammar(n-1,k);
        //else return !(kthGrammar(n-1,k-mid));
    else return !kthGrammar(n-1,k-mid);
}
int main() {
    int n=2,k=2;
    //cin>>n>>k;

    cout<<kthGrammar(n,k)<<"\n";
    return 0;
}
