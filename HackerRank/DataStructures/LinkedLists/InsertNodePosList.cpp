// Insert a node in a specific position of a linked list


Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    Node *newNode = (Node*)malloc(sizeof(Node));
    Node *prevNode = (Node*)malloc(sizeof(Node));
    int i = 0;
    
    newNode->data = data;
    newNode->next = NULL;
    
    if(position == 0){
        newNode->next = head;
        return newNode;
    } else {
        prevNode = head;
        while(i < position - 1){
            prevNode = prevNode->next;
            i++;
            }
        newNode->next = prevNode->next;
        prevNode->next = newNode;  
    return head;
    } 
    
    if(head == NULL){
        newNode->next = head;
        return newNode;
    }
}