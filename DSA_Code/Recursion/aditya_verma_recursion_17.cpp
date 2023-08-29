// https://leetcode.com/problems/generate-parentheses/
#include<bits/stdc++.h>
using namespace std;
  vector<string> ans;
 void solve(string op,int open,int close){
        if(open==0 && close==0){
            ans.push_back(op);
            return;
        }
        if(open>0){
            op.push_back('(');
            solve(op,open-1,close);
            op.pop_back();
        }
        if(close>open){
            op.push_back(')');
            solve(op,open,close-1);
            op.pop_back();
        }
    }



//void balanced_parantheses(vector<string>& ans,string output,int open,int closed){
    // if(open==0){        //if all the opening brackets are finished push all the remaining closing brackets
    //     string out=output;
    //     while(closed--){
    //         out.push_back(')');
    //     }
    //     v.push_back(out);
    //     return;
    // }
    // if(closed>open){        //till closing brackets are strictly greater in no. than opening brackets we are gonnna consider choosing anyone of the closing or opening bracket
    //     string out_choose_open=output;
    //     out_choose_open.push_back('(');
    //     string out_choose_close=output;
    //     out_choose_close.push_back(')');

    //     balanced_parantheses(v,out_choose_open,open-1,closed);
    //     balanced_parantheses(v,out_choose_close,open,closed-1);
    //     return;
    // }else{  //if(opening brackets are now greater than or equal to the number of closing brackets, only choose the option of pushing the opening bracket, in the output string
    //     string out_choose_open=output;
    //     out_choose_open.push_back('(');

    //     balanced_parantheses(v,out_choose_open,open-1,closed);
    //     return;
    // }
//}
//display fn
void display(vector<string>& v){
    for(auto itr=v.begin();itr!=v.end();itr++)
        cout<<*itr<<" ";
}
int main() {
    vector<string>v;
    string output="";
    int len;
    //input the number of opening-closing bracket pairs we are going to consider
    cin>>len;
    solve("",len,len);
    //print ans
    display(ans);
    // balanced_parantheses(v,output,len,len);
    // display(v);
     return 0;
}
