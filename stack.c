#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Define the maximum size of the stack

int stack_arr[MAX]; // Array to store stack elements
int top = -1;       // Index of the top element, -1 indicates an empty stack

// Function to check if the stack is full
int isFull() {
    // Stack is full when top index reaches the maximum limit - 1
    if (top == MAX - 1) {
        return 1;
    } else {
        return 0;
    }
}

// Function to check if the stack is empty
int isEmpty() {
    // Stack is empty when the top index is -1
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}

// Function to add an element to the stack (push operation)
void push(int data) {
    if (isFull()) {
        printf("Stack Overflow! Cannot add more elements.\n");
    } else {
        top++;                // Increment top
        stack_arr[top] = data; // Add the element at the new top position
        printf("%d pushed to stack.\n", data);
    }
}

// Function to remove an element from the stack (pop operation)
int pop() {
    int data;
    if (isEmpty()) {
        printf("Stack Underflow! Cannot remove elements.\n");
        return -1; // Return -1 or some error code for invalid operation
    } else {
        data = stack_arr[top]; // Get the top element
        top--;                 // Decrement top
        return data;           // Return the removed element
    }
}

 Function to display the elements in the stack
 void display() {
     int i;
     if (isEmpty()) {
         printf("Stack is empty.\n");
         return;
     }
     printf("Stack elements:\n");
     for (i = top; i >= 0; i--) {
         printf("%d\n", stack_arr[i]);
    }
 }

int main() {
    // Demonstrate stack operations
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60); // This should trigger the "Stack Overflow" message

    display();

    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());

    display();

    return 0;
}
