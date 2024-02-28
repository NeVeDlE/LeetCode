class MyCircularDeque {
private:
int sz{};
int rear{0};
int front{0};
int added{};
int *arr{};
public:

   


    MyCircularDeque(int k) {
        sz=k;
        arr=new int[sz];
    }
    int next(int n){
     if(n==sz)return 0;
     if(n<0)return sz-1;
     else return n;
    }
    
    
    bool insertFront(int value) {
        if(added==sz)return false;
        arr[front]=value;
        if(added==0){
        front=next(front-1);
        rear=next(rear+1);
        }
        else
            front=next(front-1);
        
        
        added++;
        return true;
    }
    
    bool insertLast(int value) {
        if(added==sz)return false;
        arr[rear]=value;
         if(added==0){
        front=next(front-1);
        rear=next(rear+1);
        }
        else
             rear=next(rear+1);
        
      
        added++;
        return true;
    }
    
    bool deleteFront() {
        if(!added)return false; 
        if(added==1){
              front=next(front+1);
              rear=front;
        }
        else
        front=next(front+1);
        added--;
        return true;
    }
    
    bool deleteLast() {
        if(!added)return false; 
         if(added==1){
             rear=next(rear-1);
              front=rear;
        }
        else
      rear=next(rear-1);
     
        added--;
        return true;
    }
    
    int getFront() {
        if(!added)return -1; 
        cout<<next(front+1)<<endl;
        return arr[next(front+1)];
    }
    
    int getRear() {
        if(!added)return -1; 
          return arr[next(rear-1)];
    }
    
    bool isEmpty() {
        return added==0;
    }
    
    bool isFull() {
          return added==sz;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */