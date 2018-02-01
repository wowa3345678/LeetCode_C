/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    
    
    struct ListNode dummy;
    dummy.next = head;
    
    struct ListNode *p = head;
    struct ListNode *prev = &dummy;
    
    
    while(p != NULL){
        if(p->val == val){
            prev->next = p->next;
        } 
        else{
            prev = p;
        }
        p = p->next;
    }
    
    return dummy.next;
    
    
}