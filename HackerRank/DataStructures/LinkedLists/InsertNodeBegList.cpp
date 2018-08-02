/*******************Pseudo code ***********************
newNode = new Node

ptr = head;

if ptr = NULL
newNode.data = data
newNode.next = NULL

else
newNode.data = data
newNode.next = head

head = newNode

******************************************************/

Node* Insert(Node *head,int data)
{
  // Complete this method
    Node *newNode;                          //Here, we initialize a new Node, called newNode
    newNode = (Node*)malloc(sizeof(Node));  //Let it the size of the Node struct to have the same fields

    Node *ptr;                              //Create a pointer to the head. The operations will be make it whit this one
    ptr = head;                             //so we assign equal to head node
    
    if(ptr == NULL){                        //If ptr is NULL we only have to asign the values to he new node
        newNode->data = data;
        newNode->next = NULL;
    } else {                                //Else. Asign the field data to the data that was given
        newNode->data = data;               //and field next to the head. Beacuse we are inserting a node at the begining
        newNode->next = head;               //that means that the head will change to the values that was provided.
    }

    head = newNode;                         //Equal head to the new Node. Head will be the Node that we are going to return
    
    return head;
}