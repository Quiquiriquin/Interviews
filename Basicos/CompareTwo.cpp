int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    int ans = 0;
    if(headA == NULL && headB == NULL){
        return 1;
    } else if(headA != NULL && headB == NULL){
        return 0;
    } else if(headA == NULL && headB !=NULL){
        return 0;
    }
    if(headA->data == headB->data){
        ans = 1;
    }
    return (ans)&&(CompareLists(headA->next,headB->next));
}
