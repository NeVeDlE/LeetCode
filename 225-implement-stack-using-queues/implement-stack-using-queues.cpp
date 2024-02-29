class MyStack {
private:
queue<int>q;
int added{0};
public:
    MyStack() {
       
    }
    
    void push(int x) {
        q.push(x);
        int sz=added;
        while(sz--){
            int tmp=q.front();
            q.pop();
            q.push(tmp);
        }
        added++;

    }
    
    int pop() {
        int tmp=q.front();
        q.pop();
        added--;
        return tmp;
    }
    
    int top() {
        return q.front();
        
    }
    
    bool empty() {
        return q.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */