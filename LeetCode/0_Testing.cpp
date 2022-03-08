char* reverse(char *S, int len)
{
    //code here
    stack<int> p;
    for(int i=0;i<len;i++){
        p.push(S[i]);
    }
    char * res = new char[len];
    int j=0;
    while(!p.empty()){
        res[j] = p.top();
        j++;
        //p.pop();
    }
    return res;
}














// char* reverse(char *S, int len)
// {


//     //You are given a string S, the task is to reverse the string using stack.


//     stack <char> st;
//     char* res = new char[len];
//     int i = 0;
//     while(S[i] != '\0')
//     {
//         st.push(S[i]);
//         i++;
//     }
//     i = 0;
//     while(!st.empty())
//     {
//         res[i] = st.top();
//         st.pop();
//         i++;
//     }
//     res[i] = '\0';
//     return res;



 
//     //code here
// }