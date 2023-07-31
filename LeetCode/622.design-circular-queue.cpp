/*
 * @lc app=leetcode id=622 lang=cpp
 *
 * [622] Design Circular Queue
 */

// @lc code=start
class MyCircularQueue {
public:
    
    queue<int> q;
    int k;

    MyCircularQueue(int size) {
        
        k = size;

        
    }
    
    bool enQueue(int value) {

        if (q.size() == k) return false;
        q.push(value);
        return true;
        
    }
    
    bool deQueue() {

        if (q.empty()) return false;
        q.pop();
        return true;
        


        
    }
    
    int Front() {

        if(q.empty()) return -1;
        return q.front();

        
    }
    
    int Rear() {

        if(q.empty()) return -1;
        return q.back();

        
        
    }
    
    bool isEmpty() {

        return q.empty();

        
        
    }
    
    bool isFull() {

        return q.size() == k;

        
        
        
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
// @lc code=end

