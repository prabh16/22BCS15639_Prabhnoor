class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> s;
        ListNode* temp =head;
        while(temp){
            s.push_back(temp->val);
            temp=temp->next;
        }
        sort(s.begin(),s.end());
        int i =0;
        temp = head;
        while(temp){
            temp->val=s[i];
            temp=temp->next;
            i++;
        }
        return head;
    }
};
