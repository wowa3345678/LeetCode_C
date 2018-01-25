/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if(head == NULL || head->next == NULL) return false;
    
    struct ListNode *p1;
    struct ListNode *p2;
    bool first = true;
    for(p1 = head, p2 = head; p2 != NULL && p2->next != NULL; p1 = p1->next, p2 = p2->next->next){
        if(p1 == p2 && !first){
            return true;
        }
        first = false;
    }
    
    return false;
}