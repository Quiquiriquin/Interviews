Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
	Node *newNode = head->next;
	if(head->data == newNode->data)
		return head->next;
	return head->next = RemoveDuplicates(head-next);
}