typedef char Elemtype;

typedef struct STACK_T{
    Elemtype value;
    struct STACK_T *next;
}STACK;

//typedef struct STACK NODE;

STACK *stack = NULL;

STACK *stack_int(void){
    STACK *stack = (STACK*)malloc(sizeof(STACK));
    if(!stack){
        return NULL;
    }
    
    memset(stack, 0, sizeof(STACK));
    stack->next = NULL;
    
    return stack;
}

bool stack_is_emply(STACK * stack){
    if(stack->next == NULL)
        return true;
    else
        return false;
}

void stack_pop(STACK * stack){
 //   Elemtype popElem;
    
    STACK *temp = NULL;
    
    if(!stack_is_emply(stack)){
        temp = stack->next;
        stack->next = stack->next->next;
     //   popElem = temp->value;
        free(temp);
    }
    else{
        return 0;
    }
    
   // return popElem;
    
}

int stack_push(STACK * stack, Elemtype ele){
    
    
    STACK *node = (STACK *)malloc(sizeof(STACK));
    
    node->value = ele;
    node->next = stack->next;
    stack->next = node;
    
    return 0;
}

Elemtype stack_top(STACK * stack){
    if(!stack_is_emply(stack)){
        return stack->next->value;
    }
    
    return (Elemtype)(-1);
}

bool isValid(char* s) {
    
    char *temp = s;
    
    if(!temp)
        return false;
    
    if(*(temp+1)=='\0')
        return false;
    
    stack = stack_int();
    
    while(*temp !='\0'){
        if((*temp=='(') || (*temp=='{')||*temp=='[')
            stack_push(stack,*temp);
        else if(*temp == ')')
        {
            if('(' != stack_top(stack)) return false;
            else
                 stack_pop(stack);
        }
        else if(*temp == '}')
        {
            if('{' != stack_top(stack)) return false;
            else
                stack_pop(stack);
        }
        else if(*temp == ']')
        {
            if('[' != stack_top(stack)) return false;
            else
                stack_pop(stack);
        }
        else
            return false;
        
        temp = temp+1;
            
        
    }
    if(stack_is_emply(stack)) return true;
    else return false;
    
}