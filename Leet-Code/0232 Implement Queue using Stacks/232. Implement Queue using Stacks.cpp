class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> stack;
    
    /** Push element x to the back of queue. */
    void push(int x) {
        pushAtBottom(x);
    }
    void pushAtBottom(int x){
        if(stack.empty()){
            stack.push(x);
            return;
        }
        int top=stack.top();
        stack.pop();
        pushAtBottom(x);
        stack.push(top); 
    }
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int top=stack.top();
        stack.pop();
        return top;
    }
    
    /** Get the front element. */
    int peek() {
        return stack.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return stack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
