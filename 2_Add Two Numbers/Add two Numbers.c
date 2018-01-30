    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;
    
    struct ListNode *p1 = l1, *p2 = l2;
    struct ListNode *ans = (struct ListNode* )calloc(1, sizeof(struct ListNode));
    struct ListNode *p = ans, *temp = NULL, *last = NULL;
    
    int sum = 0;
    while(1){
        if(p1 && p2){
            sum += p1->val + p2->val;
            p1 = p1->next;
            p2 = p2->next;
        }
        else if(p1 && p2 == NULL){
            sum += p1->val;
            p1 = p1->next;
        }
        else if(p1==NULL && p2){
            sum += p2->val;
            p2 = p2->next;
        }
        else
            break;
        
        p->val = sum%10;
        sum /=10;
        
        p->next = temp = (struct ListNode*)calloc(1, sizeof(struct ListNode));
        last = p;
        p = p->next;
    
    }
    
    if(sum!=0){
        temp->val = sum;
    }
    else{
        free(temp);
        last->next = NULL;
    }

    return ans;