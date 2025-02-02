class Solution {
  public:
    void printList(Node *head) {
         if(!head) return;
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
