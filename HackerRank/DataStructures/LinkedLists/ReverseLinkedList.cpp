Node* Reverse(Node *head)
{
  // Complete this method
    Node* head2;
    if(head == NULL || head->next == NULL){
        return head;
    } else {
        Node *aux = Reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return aux;
    }
}