/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack {
    #define ll long long
    #define vi vector<int>
    #define pii pair<int,int>
    #define fr(i,n) for(int i=0;i<n;i++)
    #define all(v) v.begin(),v.end()
    #define mem(a,b) memset(a,b,sizeof(a))
    #define MOD 1000000007
    #define pb push_back
    #define mp make_pair
    #define pii pair<int,int>
    #define vll vector<ll>
    #define vc vector<char>
    #define vs vector<string>
    
//     stack<int> s1;
//     stack<int> s2;
// public:
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         s1.push(val);
//         if(s2.empty() || s2.top()>=val)
//             s2.push(val);
        
//     }
    
//     void pop() {
//         if(s1.top()==s2.top())
//             s2.pop();
//         s1.pop();
        
//     }
    
//     int top() {
//         return s1.top();
        
//     }
    
//     int getMin() {
//         return s2.top();
        
        
//     }




 stack<ll> s;
 ll min_val;

public:
    MinStack() {
        
    }
    
    void push(int val) {

        if(s.size()==0)
        {
            s.push(val);
            min_val=val;
           
        }
        else
        {
            if(val>=min_val)
            {
                s.push(val);
            }
            else if(val<min_val)
            {
                s.push((long long)2*(long long)val-min_val);
                min_val=val;
            }
        }
      
        
    }
    
    void pop() {
        
       if(s.size()==0)
       {
        return;
       }

       else {
        if(s.top() >= min_val)
        {
            s.pop();
        }
        else if(s.top() < min_val)
        {

            min_val=2*min_val-s.top();
             s.pop();
        }
       }
    
    }
    
    int top() {
        if(s.size()==0)
        {
            return -1;
        }
        else
        {
            if(s.top()>=min_val)
            {
                return s.top();
            }
            else if(s.top()<min_val)
            {
                return min_val;
            }
        }

      return -1;
        
      
        
    }
    
    int getMin() {

        if(s.size()==0)
        {
            return -1;
        }
        else

        {
             return min_val;
        }
        
           
        }
        
        
      
    




};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

