struct StackNode{
    int val;
    struct StackNode *next;
};

struct Stack{
    struct StackNode *top;
};

typedef struct {
    struct Stack in;
    struct Stack out;
} MyQueue;

void push(struct Stack *stack, int new_val){
    if(stack ==NULL) return;
    
    struct StackNode *new_node = (struct StackNode*)malloc(sizeof(struct StackNode));
    
    new_node->val = new_val;
    new_node->next = stack->top;
    
    stack->top = new_node;
    
}
// --- pop --- get value from top
int pop(struct Stack *stack){
    if(stack == NULL || stack->top == NULL) return 0;
    
    struct StackNode *t = stack->top;
    
    int ans = t->val;
    
    stack->top = stack->top->next;
    
    free(t);
    
    return ans;
}

bool isempty(struct Stack *stack){
    if(stack == NULL) return false;
    
    return(stack->top == NULL)?true:false;
    
}


/** Initialize your data structure here. */
MyQueue* myQueueCreate(int maxSize) {
    MyQueue *queue = ( MyQueue *)malloc(sizeof(MyQueue));
    
    queue->in.top = queue->out.top = NULL;
    
    return queue;
    
}

/** Push element x to the back of queue. */
void myQueuePush(MyQueue* obj, int x) {
    if(obj == NULL) return;
    
    while(!isempty(&obj->out)){
        int top = pop(&obj->out);
        push(&obj->in,top);
    }
    
    push(&obj->in,x);
    
}

/** Removes the element from in front of queue and returns that element. */
int myQueuePop(MyQueue* obj) {
    if(obj == NULL) return 0;
    int ans=0;
    if(isempty(&obj->out)){
        while(!isempty(&obj->in)){
            int top = pop(&obj->in);
            push(&obj->out,top);
            
        }
    }
    
    ans = pop(&obj->out);
    
    return ans;
}

/** Get the front element. */
int myQueuePeek(MyQueue* obj) {
    if (isempty(&obj->out)) {
        while (!isempty(&obj->in)) {
            int top = pop(&obj->in);
            push(&obj->out, top);
        }
    }

    if (!isempty(&obj->out) && obj->out.top) {
        return obj->out.top->val;
    }
    else {
        return 0;
    }   
}

/** Returns whether the queue is empty. */
bool myQueueEmpty(MyQueue* obj) {
    if (isempty(&obj->in) && isempty(&obj->out)) {
        return true;
    }
    else {
        return false;
    }    
}

void myQueueFree(MyQueue* obj) {
    while (!isempty(&obj->in)) {
        pop(&obj->in);
    }

    while (!isempty(&obj->out)) {
        pop(&obj->out);
    }    
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * struct MyQueue* obj = myQueueCreate(maxSize);
 * myQueuePush(obj, x);
 * int param_2 = myQueuePop(obj);
 * int param_3 = myQueuePeek(obj);
 * bool param_4 = myQueueEmpty(obj);
 * myQueueFree(obj);
 */