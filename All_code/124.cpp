#include <bits/stdc++.h>  
 
using namespace std;


 
#define ll long long ;
#define ld long double ;
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define F first
#define S second
#define mod 1000000007
#define inf 0x3f3f3f3f3f3f3f3fll
#define pll pair<ll,ll>
#define tc long long t; cin >> t; while(t--)
 
bool isBalanced(string expr) {
   stack<char> s;
   char ch;
   for (int i=0; i<expr.length(); i++) {    //for each character in the expression, check conditions
      if (expr[i]=='('||expr[i]=='['||expr[i]=='{') {    //when it is opening bracket, push into     stack
         s.push(expr[i]);
         continue;
      }
      if (s.empty())    //stack cannot be empty as it is not opening bracket, there must be closing     bracket
         return false;
         switch (expr[i]) {
            case ')':    //for closing parenthesis, pop it and check for braces and square brackets
               ch = s.top();
               s.pop();
               if (ch=='{' || ch=='[')
                  return false;
                  break;
            case '}': //for closing braces, pop it and check for parenthesis and square brackets
               ch = s.top();
               s.pop();
               if (ch=='(' || ch=='[')
                  return false;
                  break;
            case ']': //for closing square bracket, pop it and check for braces and parenthesis
               ch = s.top();
               s.pop();
               if (ch =='(' || ch == '{')
                  return false;
                  break;
         }
      }
      return (s.empty()); //when stack is empty, return true
}
main() {
   string expr;
   cin >> expr;
    expr.erase(remove(expr.begin(), expr.end(), '-'), expr.end()); 
    expr.erase(remove(expr.begin(), expr.end(), '+'), expr.end());
   if (isBalanced(expr))
      cout << "YES";
   else
      cout << "NO";
}