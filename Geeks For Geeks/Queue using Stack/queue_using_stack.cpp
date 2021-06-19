class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        input.push(x);
    }

    int dequeue() {
        int x,result;
        while(!input.empty()){
            x=input.top();
            output.push(x);
            input.pop();
        }
        result=output.top();
        output.pop();
        while(!output.empty()){
            x=output.top();
            input.push(x);
            output.pop();
        }
        return result;
    }
};
