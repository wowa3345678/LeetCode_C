typedef struct {
    int num;
    int min_idx;
    int stack[];
    
} MinStack;

/** initialize your data structure here. */
MinStack* minStackCreate(int maxSize) {
    MinStack *obj = malloc(sizeof(MinStack)+sizeof(int)*maxSize);
    
    obj->num = 0;
    obj->min_idx = 0;
    
    return obj;
}

void minStackPush(MinStack* obj, int x) {
    
    if(obj->num > 0 && x < obj->stack[obj->min_idx]){
        obj->min_idx = obj->num;
    }
    
    obj->stack[obj->num++] = x;
    
    
}

void minStackPop(MinStack* obj) {
    
    int i;
    
    if(--obj->num == obj->min_idx){
        int min_idx =0;
        for(i = 1; i<obj->num;i++){
            if(obj->stack[i] < obj->stack[min_idx]){
                min_idx = i;
            }
                
        }
        obj->min_idx = min_idx;
    }
    
}

int minStackTop(MinStack* obj) {
    return obj->stack[obj->num-1];
}

int minStackGetMin(MinStack* obj) {
    return obj->stack[obj->min_idx];
}

void minStackFree(MinStack* obj) {
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * struct MinStack* obj = minStackCreate(maxSize);
 * minStackPush(obj, x);
 * minStackPop(obj);
 * int param_3 = minStackTop(obj);
 * int param_4 = minStackGetMin(obj);
 * minStackFree(obj);
 */