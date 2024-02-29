class MyQueue {
private:
stack<int>to;
stack<int>from;
public:
    MyQueue() {
        
    }
   void move(stack<int>&to,stack<int>&from){
       while(!from.empty()){
           to.push(from.top());
           from.pop();
       }

    }
    
    void push(int x) {
        if(!to.empty()){
        move(from,to);
        to.push(x);
        move(to,from);
        }
        else to.push(x);

    }
    
    int pop() {
        int tmp=to.top();
        to.pop();
        return tmp;
    }
    
    int peek() {
        return to.top();
        
    }
    
    bool empty() {
        return to.empty();
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