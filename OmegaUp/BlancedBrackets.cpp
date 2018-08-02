#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <class T> struct Stack {

  struct Node {
    Node * next;
    T data;
    Node(T val) {
      next = NULL;
      data = val;
    }
  };

  Node * head;
  int size;

  Stack() {
    head = NULL;
    size = 0;
  }

  void push(T val) {
    Node * node = new Node(val);
    node->next = head;
    head = node;
    size++;
  }

  void pop() {
    if (size == 0)
      throw runtime_error("Cannot pop from the empty stack");
    head = head->next;
    size--;
  }

  T top () {
    if (size == 0)
      throw runtime_error("Cannot pop from the empty stack");
    return head->data;
  }

  bool isEmpty() {
    return size == 0;
  }
};


int main() {
  int it;
  string entrada;
  cin >> it;
  vector <int> ans(it);
  for(int i = 0; i < it; i++){
    Stack<char> * stack = new Stack<char>();
    cin >> entrada;
    for(int j = 0; j < entrada.size(); j++){
        if(entrada[j] == '(' || entrada[j] == '[' || entrada[j] == '{'){
            stack->push(entrada[j]);
        } else {
          if((entrada[j] == ')' && stack->top() == '(') || (entrada[j] == ']' && stack->top() == '[') || (entrada[j] == '}' && stack->top() == '{')){
            if(!stack->isEmpty()){
              stack->pop();
            }
        } else {
          }
        }
    }
    if(stack->isEmpty()){
      ans[i] = 1;
    } else {
      ans[i] = 0;
    }
  } 

  for(int i = 0; i < it; i++){
    if(ans[i] == 1){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}

