//https://practice.geeksforgeeks.org/problems/permutation-with-spaces3627/1
//https://www.geeksforgeeks.org/permute-string-changing-case/
// https://leetcode.com/problems/letter-case-permutation/description/

#include<bits/stdc++.h>
using namespace std;
//============================permutation of spaces===========================
vector<string> ans;
void solve(string inp, string op){
    
    if(inp.length() == 0){
      ans.push_back(op);
      return;
    }

    if(op.size()==0)
    {
      string opt=op;
      op+=inp[0];
      inp.erase(0,1);
      solve(inp,op);

    }
else
{  string op1=op;
    string op2=op;

    op1+=" ";
    op1+=inp[0];
    op2+=inp[0];

    inp.erase(0,1);
    solve(inp, op1);
    solve(inp, op2);
    
    return;
}
}



    
// void space_permutations(string input,string output){
//     if(input.size()==0){
//         cout<<output<<" ";
//         return;
//     }

//     if(output.size()==0){//if there is no element currently in the output string then just append the first character of input string as spaces("_") aren't supposed to be at extremes.
//         string out=output;
//         out.push_back(input.at(0));
//         input.erase(input.begin()+0);

//         space_permutations(input,out);
//     }else {
//         //here we are not choosing to insert space"_" in output string
//         string out_dont_choose = output;
//         out_dont_choose.push_back(input.at(0));//as permutations have to be done with spaces so we are not ignoring any letters from the input string.

//         //here we are choosing to insert space"_" in output string
//         string out_choose = output;
//         out_choose.push_back('_');
//         out_choose.push_back(input.at(0));

//         input.erase(input.begin() + 0);

//         space_permutations(input, out_dont_choose);
//         space_permutations(input, out_choose);
//     }
//     return;
// }

//============================permutation of cases===========================
void case_permutations(string input,string output){
    if(input.size()==0){
        cout<<output<<" ";
        return;
    }

    string op1=output;
        string op2=output;
        op1.push_back((input[0]));
        op2.push_back(toupper(input[0]));
        input.erase(input.begin()+0);
        case_permutations(input,op1);
        case_permutations(input,op2);

        return;

    
    // string out_choose_caps=output;
    // out_choose_caps.push_back(toupper(input.at(0)));
    // string out_choose_nocaps=output;
    // out_choose_nocaps.push_back(input.at(0));

    // input.erase(input.begin()+0);

    // case_permutations(input,out_choose_nocaps);
    // case_permutations(input,out_choose_caps);

    // return;
}

//======================================permutation of letter cases
void letter_case_permutation(string input,string output){
    if(input.size()==0){
        cout<<output<<" ";
        return;
    }

    if(isalpha(input[0]))
    {
        string op1=output;
        string op2=output;
        op1.push_back(tolower(input[0]));
        op2.push_back(toupper(input[0]));
        input.erase(input.begin()+0);
        letter_case_permutation(input,op1);
        letter_case_permutation(input,op2);

        return;

    }

    else{
        string op=output;
        op+=input[0];
        input.erase(input.begin()+0);
        letter_case_permutation(input,op);
        return;


        // string op1=output;
        // string op2=output;
        // op1.push_back(input[0]);
        // op2.push_back(tolower(input[0]));
        // input.erase(input.begin()+0);
        // letter_case_permutation(input,op1);
        // letter_case_permutation(input,op2);
        // return;
    }


    



    // if(isalpha(input.at(0))){
    //     string out_upper=output;
    //     out_upper.push_back(toupper(input.at(0)));
    //     string out_lower=output;
    //     out_lower.push_back(tolower(input.at(0)));

    //     input.erase(input.begin());

    //     letter_case_permutation(input,out_lower);
    //     letter_case_permutation(input,out_upper);

    //     return;
    // }else{
    //     string out_no_change=output;
    //     out_no_change.push_back(input.at(0));//igrore and directly insert the non alphabetical chars directly into the output string

    //     input.erase(input.begin());

    //     letter_case_permutation(input,out_no_change);

    //     return;
    // }
}
int main(){
    string input;
    string output="";
    cin>>input;

    //permutation with spaces
    // solve(input,output);
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<"\n";
   // permutation with cases
    case_permutations(input,output);
    // cout<<"\n";
    //permutation of letter cases
   // letter_case_permutation(input,output);
    return 0;
}