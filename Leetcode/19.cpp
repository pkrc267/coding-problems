class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //using concept of fast and slow pointers
        
        ListNode beforeHead(-1);
        beforeHead.next = head;
        
        
        ListNode *slow = &beforeHead;
        ListNode *fast = &beforeHead;
        
        for(int i = 0; i < n; i++){
            fast = fast->next;
        }
        
        while(fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        
        ListNode *temp = slow->next;
        slow->next = slow->next->next;
        delete temp;
        
        return beforeHead.next;
    }
};
