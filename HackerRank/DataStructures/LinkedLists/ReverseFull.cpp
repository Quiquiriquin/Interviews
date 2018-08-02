
Node* Reverse(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    if(head == NULL){
        
    } else {
        return ReversePrint(head->next);
    }
}


int CompareLists(Node* headA, Node* headB){
	if(headA == NULL && headB != NULL) return 0;
	if(headB == NULL && headA != NULL) return 0;
	if(headA == NULL && headB == NULL) return 1;
	if(headA == headB){
		return 1 && CompareLists(headA->next,headB->next);
	}
}







