struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode answer, *temp = &answer;
    answer.next = NULL;

    while (l1 != NULL || l2 != NULL) {
        struct ListNode *node = malloc(sizeof(*node));
        node->next = NULL;
        temp->next = node;
        temp = node;
        if (l1 != NULL) {
            if (l2 != NULL) {
                if (l1->val < l2->val) {
                    node->val = l1->val;
                    l1 = l1->next;
                } 
                else {
                    node->val = l2->val;
                    l2 = l2->next;
                }
            } 
            else {
                node->val = l1->val; //l1 != NULL need to add the l1.val; 
                l1 = l1->next;
            }
        } 
        else {
            node->val = l2->val;
            l2 = l2->next;
        }
    }

    return answer.next;
    

    
}