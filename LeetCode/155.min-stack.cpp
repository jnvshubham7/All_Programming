/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack {
public:

   stack <int> s;
   stack <int> min;


    MinStack() {
        
    }
    
    void push(int val) {

        s.push(val);

        if (min.empty() || val <= min.top())
            min.push(val);
        
    }
    
    void pop() {

        if (s.top() == min.top())
            min.pop();
        
        s.pop();
        
    }
    
    int top() {

        return s.top();
        
    }
    
    int getMin() {

        return min.top();
       
        
    }
};

// time complexity: O(1) 
// space complexity: O(n) // n is the number of elements in the stack
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

