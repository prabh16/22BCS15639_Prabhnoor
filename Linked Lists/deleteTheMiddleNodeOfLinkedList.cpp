class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* start=head;
        ListNode* end=head;
        ListNode* temp;
        while(end!=NULL && end->next!=NULL){
            temp=start;
            start=start->next;
            end=end->next->next;
        }

    ListNode* delNode=start;
    temp->next=temp->next->next;
    delete delNode;
    return head;
    }
};
