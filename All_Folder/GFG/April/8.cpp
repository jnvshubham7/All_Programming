vector<int> print_next_greater_freq(int arr[],int n)
    {
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        vector<int> ans(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && m[arr[st.top()]]<=m[arr[i]]){
                st.pop();
            }
            if(st.empty()){
                ans[i] = -1;
            }
            else{
                ans[i] = arr[st.top()];
            }
            st.push(i);
        }
        return ans;
    }