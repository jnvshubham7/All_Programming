/*
 * @lc app=leetcode id=232 lang=cpp
 *
 * [232] Implement Queue using Stacks
 */

// @lc code=start



class MyQueue {
public:
    stack<int> inputStack, outputStack;

    MyQueue() {
        // Constructor
    }

    void transferElements() {
        // Transfer elements from inputStack to outputStack
        while (!inputStack.empty()) {
            outputStack.push(inputStack.top());
            inputStack.pop();
        }
    }

    void push(int x) {
        // Pushes element x to the back of the queue

        // Transfer elements to outputStack if it is empty
        if (outputStack.empty()) {
            transferElements();
        }

        // Push the new element to inputStack
        inputStack.push(x);
    }

    int pop() {
        // Removes the element from the front of the queue and returns it

        // Transfer elements to inputStack if it is empty
        if (outputStack.empty()) {
            transferElements();
        }

        int curr = outputStack.top();
        outputStack.pop();
        return curr;
    }

    int peek() {
        // Returns the element at the front of the queue

        // Transfer elements to inputStack if it is empty
        if (outputStack.empty()) {
            transferElements();
        }

        return outputStack.top();
    }

    bool empty() {
        // Returns true if the queue is empty, false otherwise

        return inputStack.empty() && outputStack.empty();
    }
};


// time complexity: O(n) for push, O(1) for pop, O(1) for peek, O(1) for empty
// space complexity: O(n) for push, O(1) for pop, O(1) for peek, O(1) for empty







// class MyQueue {
// public:
//     stack<int> inputStack, outputStack;

//     MyQueue() {
//         // Constructor
//     }

//     void transferElements() {
//         // Transfer elements from inputStack to outputStack
//         while (!inputStack.empty()) {
//             outputStack.push(inputStack.top());
//             inputStack.pop();
//         }
//     }

//     void push(int x) {
//         // Pushes element x to the back of the queue

//         // Transfer elements to outputStack if it is empty
//         if (outputStack.empty()) {
//             transferElements();
//         }

//         // Push the new element to inputStack
//         inputStack.push(x);
//     }

//     int pop() {
//         // Removes the element from the front of the queue and returns it

//         // Transfer elements to inputStack if it is empty
//         if (outputStack.empty()) {
//             transferElements();
//         }

//         int curr = outputStack.top();
//         outputStack.pop();
//         return curr;
//     }

//     int peek() {
//         // Returns the element at the front of the queue

//         // Transfer elements to inputStack if it is empty
//         if (outputStack.empty()) {
//             transferElements();
//         }

//         return outputStack.top();
//     }

//     bool empty() {
//         // Returns true if the queue is empty, false otherwise

//         return inputStack.empty() && outputStack.empty();
//     }
// };

// time complexity: O(n) for push and O(1) for pop, peek and empty
// space complexity: O(n) for push and O(1) for pop, peek and empty









// @lc code=end

