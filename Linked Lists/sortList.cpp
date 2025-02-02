class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> ss;
        ListNode* temp =head;
        while(temp){
            ss.push_back(temp->val);
            temp=temp->next;
        }
        sort(ss.begin(),ss.end());
        int i =0;
        temp = head;
        while(temp){
            temp->val=ss[i];
            temp=temp->next;
            i++;
        }
        return head;
    }
};
