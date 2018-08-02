#include <iostream>

using namespace std;



  struct Node
  {
     int data;
     struct Node *next;
  }

void Print(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    if(head != NULL){
        printf("%i\n", head->data);
        Print(head->next);
    }
}

int main (){
  
  int iter;
  cin >> iter;
  int
  for(int i = 0; i < iter; i++){

  }

  return 0;
}