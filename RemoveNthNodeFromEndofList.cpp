class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(n--){
            fast = fast->next;
        }
        
        if( fast == NULL) return head->next;
        
        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        
        ListNode* to_free = slow->next;
        slow->next = slow->next->next;
        delete to_free;
        
        return head;
    }
};