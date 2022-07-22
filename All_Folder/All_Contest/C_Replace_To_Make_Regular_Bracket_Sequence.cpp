#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t=1;
	//cin >> t;
	while(t--)
	{
	
		string s;
		cin >> s;


		stack<char>st;
		bool flag=1;
		int cnt=0;
        int n=s.size();
		for(int i=0;i<s.size();i++)
		{
			if(s[i] == '(' || s[i] == '{' || s[i] == '<' || s[i] == '[') 
            st.push(s[i]);
			else{
				if(st.empty()) {
					flag=0;
                   // cout<<s[i]<<" ";
					break;
				}
				else if(s[i] == ')' && st.top() == '(') st.pop();
				else if(s[i] == ']' && st.top() == '[') st.pop();
				else if(s[i] == '}' && st.top() == '{') st.pop();
				else if(s[i] == '>' && st.top() == '<') st.pop();
                
				else 
                {

                    //cout<<s[i]<<" "<<st.top()<<endl;
                     cnt++;
                     st.pop();

                }
               
			}
		
		}
		if(!st.empty()) flag = 0;
		if(flag) cout << cnt << endl;
		else cout << "Impossible" << endl;




    }




	}
