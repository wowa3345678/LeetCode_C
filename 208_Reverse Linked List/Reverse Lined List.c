/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *p = head;
    struct ListNode *prev = NULL, *next = NULL;
    while(p){
        next = p->next;
        p->next = prev;
        prev = p;
        p = next;
    }
    
    return prev;
    
}