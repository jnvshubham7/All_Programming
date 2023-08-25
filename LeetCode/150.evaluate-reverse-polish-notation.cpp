class Solution {
public:
    int evalRPN(vector<string>& s) {


        stack<int> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=="+" || s[i]=="-" || s[i]=="*" || s[i]=="/")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if(s[i]=="+")
                    st.push(a+b);
                else if(s[i]=="-")
                    st.push(b-a);
                else if(s[i]=="*")
                    st.push(a*b);
                else
                    st.push(b/a);
            }
            else
            {
                st.push(stoi(s[i]));
            }
        }
        return st.top();

      
        
    }
};