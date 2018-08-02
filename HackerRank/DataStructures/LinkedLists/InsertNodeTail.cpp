//Operations on a linked list

 /*+++++++++++++++++++ Pseudo code++++++++++++++++++++++++++
	new_node=new Node
	(*new_node).val=new_value
	(*new_node).next=NULL

	ptr=head

	if ptr is NULL  //Empty List
	    head=new_node
	else
	    ptr=head

	    //Traverse till the last node

	    while((*ptr).next!=NULL)
	    ptr=(*ptr).next

	    //Now ptr points to the last node of the list
	    (*ptr).next=new_node
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

Node* Insert(Node *head,int data){
	Node *newNode;							//New node creation
	newNode = (Node*)malloc(sizeof(Node));	//Size of the new node

	newNode->data = data;					//We give values to the new node.
	newNode->next = NULL;					//The new node, will be the one that we have to insert
											// at the end of the list. That's the reason for the NULL and data asignation
	Node *ptr;								// Create a new node, just a pointer to make the comparation. This way we avoid 
	ptr = head;								//changes to the head node.

	if(ptr == NULL){						//If head is NULL, head will be the newNode that we create before.
		head = newNode;
	} else {								//If head isn't NULL, we need to make some movements.
		ptr = head;							//First of all, we need to traverse the linked list and we have to reach
		while(ptr->next != NULL){			//the data that is located before of NULL thats the condition.  
			ptr = ptr->next
		}
		ptr->next = newNode;				//Once that we reach the previous data befor NULL. There will be the place
	}										//where we have to insert the newNode. We have to asign the ->next pointer
											//to the newNode
	return head;							//We return the head. 'Cuz we need the begining.
}







