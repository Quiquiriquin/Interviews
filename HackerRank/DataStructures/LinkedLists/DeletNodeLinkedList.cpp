// Delete a node on a linked list 

Node* Delete(Node *head, int position)
{
    if (position == 0){ return head->next; }
    head->next = Delete(head->next, position-1);
    return head;    
}