class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int i = 0;
        for (int x : pushed) {
            s.push(x);
            while (!s.empty() && s.top() == popped[i]) {
                s.pop();
                i++;
            }
        }
        return s.empty();
        

        //two vector
        //one for pushing and one for popping
        //push all the elements in the pushed vector
        //pop all the elements in the popped vector
        //if the popped vector is empty then return true
        //if the popped vector is not empty then return false



        // vector<int> push;
        // vector<int> pop;



        
    }
};