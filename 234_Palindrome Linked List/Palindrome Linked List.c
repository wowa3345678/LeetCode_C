/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    
    if(head == NULL) return true;
    
    struct ListNode *p = head;
    int len=0;
    
    while(p!=NULL){
        len++;
        p = p->next;
    }
    
    int half = len/2;
    
    p = head;
    while(half--){
        p = p->next;
    }
    
    if(len%2 == 1){
        p = p->next;
    }
    // reverse the right side
    struct ListNode *prev = NULL, *next = NULL;
    while(p){
        next = p->next;
        p->next = prev;
        prev = p;
        p = next;
    }
    
    struct ListNode *q = prev;
    p = head;
    half = len/2;
    
    while(half--){
        if(p->val != q->val)
            return false;
        p = p->next;
        q = q->next;
    }
    
    return true;
    
    
    
}