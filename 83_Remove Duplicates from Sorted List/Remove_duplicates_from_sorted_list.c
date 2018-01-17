struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL || head->next == NULL) return head;
    struct ListNode* temp = head;
    struct ListNode* Ne = temp -> next;
    

    
    while(Ne !=NULL){
        while(temp->val == Ne->val){
            temp->next = Ne->next;
        
            if(temp->next == NULL) return head;
            Ne = temp->next;
        }
        temp = temp->next;
        Ne = temp->next;
    }
    return head;
    
}