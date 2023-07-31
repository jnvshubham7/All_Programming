/*
 * @lc app=leetcode id=1381 lang=cpp
 *
 * [1381] Design a Stack With Increment Operation
 */

// @lc code=start
class CustomStack {
public: 
   stack <int> st;
    stack <int> temp;

    int max;
   
    CustomStack(int maxSize) {


         max=maxSize;
        
        
    }
    
    void push(int x) {
        
        if(st.size()<max)
        st.push(x);
        
        
    }
    
    int pop() {

        if(st.empty())
            return -1;

        int x = st.top();
        st.pop();
        return x;
        
        
    }
    
    void increment(int k, int val) {

       int n=st.size();

         if(k<n)
         {
            for(int i=0;i<n-k;i++ )
            {
                temp.push(st.top());
                st.pop();
            }
         }

         while(!st.empty())
         {
            int x=st.top();
            st.pop();
            x+=val;
            temp.push(x);
         }

            while(!temp.empty())
            {
                st.push(temp.top());
                temp.pop();
            }


        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
// @lc code=end

