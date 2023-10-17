#include <stdio.h>
#include <stdlib.h>

typedef struct StackNode {
  int data;
  struct StackNode* next;
} StackNode;

typedef struct Stack {
  StackNode* top;
} Stack;

void push(Stack* stack, int data) {
  StackNode* newNode = (StackNode*) malloc(sizeof(StackNode));
  newNode->data = data;
  newNode->next = stack->top;
  stack->top = newNode;
}

int pop(Stack* stack) {
  if (stack->top == NULL) {
    // Stack is empty, do something here
    return -1;
  }
  StackNode* temp = stack->top;
  int data = temp->data;
  stack->top = temp->next;
  free(temp);
  return data;
}

int peek(Stack* stack) {
  if (stack->top == NULL) {
    // Stack is empty, do something here
    return -1;
  }
  return stack->top->data;
}

int isEmpty(Stack* stack) {
  return stack->top == NULL;
}

int main() {
  Stack stack;
  stack.top = NULL;

  // Test push operation
  push(&stack, 1);
  push(&stack, 2);
  push(&stack, 3);

  // Test peek operation
  printf("Top element: %d\n", peek(&stack));

  // Test pop operation
  printf("Popped element: %d\n", pop(&stack));

  // Test isEmpty operation
  if (isEmpty(&stack)) {
    printf("Stack is empty\n");
  } else {
    printf("Stack is not empty\n");
  }

  return 0;
}
