   
   
    vector<string> ans;
  
  vector<string> permutation(string S){

    solve(S, "");
    return ans;
   
    }

  void solve(string inp, string op){
    
    if(inp.length() == 0){
      ans.push_back(op);
      return;
    }

    if(op.size()==0)
    {
      

      
    }

    string op1=op;
    string op2=op;

    op1+=" ";
    op1+=inp[0];
    op2+=inp[0];

    inp.erase(0,1);
    solve(inp, op1);
    solve(inp, op2);
    
    return;
    
   
    
  }