class MyQueue {
public:

    //enqueue O(n)
    //dequeue O(n)
    //Using two stack
    /* 
    enqueue approach while ip is not empty move all ele to op
    put x into ip
    move everything back into from op to ip
    insure that frontend of the queue is always on the top of the ip stack
     */
    stack<int>ip,op;

    MyQueue() {
        
    }
    
    void push(int x) {
        while(!ip.empty()){
            op.push(ip.top());
            ip.pop();
        }
        ip.push(x);
        while(!op.empty()){
            ip.push(op.top());
            op.pop();
        }

    }
    
    int pop() {
        if(ip.empty()){
            return -1;
        }
        int ele=ip.top();
        ip.pop();
        return ele;
    }
    
    int peek() {
        return ip.top();
    }
    
    bool empty() {
        return ip.empty()&&ip.empty();
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