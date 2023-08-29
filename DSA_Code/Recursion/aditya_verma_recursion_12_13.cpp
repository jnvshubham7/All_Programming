//https://leetcode.com/problems/distinct-subsequences-ii/description/
#include<bits/stdc++.h>
using namespace std;
//===================generating all substrings=================================
/*
                                    i/p  o/p
                                    abc   _
                               bc _           bc a
                        c _        c b     c a       c ab
                    _ _  _ c   _ b  _ bc  _ a  _ ac  _ ab  _ abc       ---->o/p on leaves bcz input is empty here....

 */

void generate_substring(string input,string output){
    if(input.size()==0){
        cout<<output<<endl;
        return;
    }

    string op1=output;
    string op2=output;
    op1=op1+input[0];
    input.erase(input.begin()+0);
    generate_substring(input,op1);
    generate_substring(input,op2);

    return;




    //  generate_substring(input.substr(1),output);
    // generate_substring(input.substr(1),output+input[0]);
   
    
    // if(input.length()==0){
    //     cout<<output<<" ";
    //     return;
    // }
    // string out_dont_choose=output; 
    // string out_choose=output;
    // out_choose.push_back(input.at(0));
    // input.erase(input.begin()+0);

    // generate_substring(input,out_dont_choose);
    // generate_substring(input,out_choose);

    // return;
}
//======================generating unique substring===========================
/*
                                    i/p  o/p
                                    abc   _
                               bc _       bc a
                            c _  c b    c a  c ab
                        _ _ _ c  _ b _ bc _ a _ ac _ ab _ abc       ---->will store the o/p strings in leaves in a map and then output it altogrther in order to remove repeated substrings.

 */



void print_substr(unordered_set<string>& sub_str){
    //reverse(sub_str.begin(),sub_str.end());
    for(auto itr:sub_str){
        cout<<itr<<" ";
    }
}


void generate_unique_substring(unordered_set<string>& sub_str,string input,string output){
    if(input.size()==0){
        sub_str.insert(output);
        return;
    }
    string op1=output;
    string op2=output;
    op1=op1+input[0];
    input.erase(input.begin()+0);
    
   generate_unique_substring(sub_str,input,op2);
   generate_unique_substring(sub_str,input,op1);

    return;

    // string out_dont_choose=output;
    // string out_choose=output;
    // out_choose.push_back(input.at(0));
    // input.erase(input.begin()+0);

    // generate_unique_substring(sub_str,input,out_dont_choose);
    // generate_unique_substring(sub_str,input,out_choose);

    
}
int main() {
    //user input
    string inp;
    string out;
    cin>>inp;
    out="";

    //generate all substrings
    //generate_substring(inp,out);
    //cout<<"\n";

    //generate all unique substrings
    unordered_set<string> sub_str;  //if the order in which substring is obtained doesnt matter then we can even take normal set(which will sort the substrings while insertion)
   generate_unique_substring(sub_str,inp,out);
   print_substr(sub_str);  //print the unique subset

    return 0;
}




/*
                                    i/p  o/p
                                    abc   _
                               bc _       bc a
                            c _  c b    c a  c ab
                        _ _ _ c  _ b _ bc _ a _ ac _ ab _ abc       ---->o/p on leaves bcz input is empty here....

 */



















