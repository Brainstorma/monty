# monty

# 0x19 C - Stacks, Queues - LIFO, FIFO

## Introduction
One of the key concepts in software development is the concept of data structures. Data structures allow us to organize and store data in the most efficient way possible. Stacks and queues are two of the most common data structures used in programming. This readme will provide an extensive look at the use of stacks and queues in C programming and how to properly implement them using the language. 

## What are Stacks and Queues? 
A stack and a queue are both linear data structures, but with different behaviors. A stack is a Last-In-First-Out (LIFO) data structure, meaning that the last element that was added to the stack will be the first one that comes out. This type of structure is most often used to store and manage temporary data or to keep track of the state of a program when it is running. 

A queue is a First-In-First-Out (FIFO) data structure, meaning that the first element that was added to the queue will be the first one that comes out. This type of structure is most often used to handle tasks or jobs that need to be done in a certain order. 

## How to Implement in C
Stacks and queues can be implemented in C using an array or linked list. The following sections will provide an overview of both methods of implementation. 

### Using Arrays
Using an array for implementation offers a number of advantages. Arrays have a set size, meaning the programmer can accurately predict the amount of memory that will be used by the stack or queue. Additionally, arrays offer quick and easy access to stored elements. 

When using an array to implement a stack, the programmer should define a pointer at the beginning of the array to keep track of the top element. When making a push operation, the pointer should be incremented and then the new element should be inserted into the array. When making a pop operation, the value of the pointer should be returned and then the pointer should be decremented. 

When using an array to implement a queue, the programmer should define two pointers at the beginning of the array: one to keep track of the front element, and one to keep track of the rear element. When making an enqueue operation, the rear pointer should be incremented and then the new element should be inserted into the array. When making a dequeue operation, the value of the front pointer should be returned and then the pointer should be incremented. 

### Using Linked Lists
Linked lists offer a number of advantages when implementing stacks and queues. Linked lists have no fixed size, meaning they can dynamically increase or decrease in size to accommodate changing needs. They also offer extremely fast access times as they are able to quickly traverse elements with the help of pointers. 

When using a linked list to implement a stack, the programmer should define a pointer at the top of the list to keep track of the top element. When making a push operation, the new element should be added to the head of the list and then the pointer should be updated to point to the new top element. When making a pop operation, the value of the pointer should be returned and then the pointer should be updated to point to the second element in the list. 

When using a linked list to implement a queue, the programmer should define two pointers at the beginning of the list: one to keep track of the front element, and one to keep track of the rear element. When making an enqueue operation, the new element should be added to the tail of the list and then the rear pointer should be updated to point to the new rear element. When making a dequeue operation, the value of the front pointer should be returned and then the pointer should be updated to point to the second element in the list. 

## Common Operations
Common operations on both stacks and queues include `push`, `pop`, `enqueue`, and `dequeue`. These operations allow the programmer to add or remove elements from the structure. 

### Push
The `push` operation is used to add an element to a stack. This operation requires two parameters: the value of the element to be added, and a pointer to the top of the stack. 

Example:
```
void push(int value, int *top) { 
  if (top == NULL) {
    printf("Error: stack is empty");
  } else {
    *top = value;
    top++;
  }
}
```

### Pop
The `pop` operation is used to remove an element from a stack. This operation requires a pointer to the top of the stack. 

Example:
```
int pop(int *top) { 
  if (top == NULL) {
    printf("Error: stack is empty");
  } else {
    int value = *top;
    top--;
    return value;
  }
}
```

### Enqueue
The `enqueue` operation is used to add an element to a queue. This operation requires two parameters: the value of the element to be added, and a pointer to the rear of the queue. 

Example:
```
void enqueue(int value, int *rear) { 
  if (rear == NULL) {
    printf("Error: queue is empty");
  } else {
    *rear = value;
    rear++;
  }
}
```

### Dequeue
The `dequeue` operation is used to remove an element from a queue. This operation requires a pointer to the front of the queue. 

Example:
```
int dequeue(int *front) { 
  if (front == NULL) {
    printf("Error: queue is empty");
  } else {
    int value = *front;
    front++;
    return value;
  }
}
```

##Conclusion
In conclusion, stacks and queues are two of the most common data structures used in programming. They can be implemented in C using either an array or a linked list. To successfully use a stack or queue, the programmer must understand the operations of `push`, `pop`, `enqueue`, and `dequeue`. This readme has provided an extensively detailed look at the use of stacks and queues in C programming, and how to correctly implement them in the language.

# Available operation codes:

| Opcode | Description |
|------------------- | --------------|
| push   | Pushes an element to the top of the stack. e.g. (push 1 # pushes 1 into the stack)|
| pall   | Prints all the values on the stack, starting from the top of the stack and moving downwards.|
| pint   | Prints the value at the top of the stack without removing it.|
| pop    | Removes the top element of the stack.|
| swap   | Swaps the top two elements of the stack.|
| add    | Adds the top two elements of the stack and stores the result in the second element. The first element is removed from the stack.|
| nop    | This opcode does not perform any action.|
| sub    | Subtracts the top element of the stack from the second top element. The result is then stored in the second element, and the first element is removed.|
| div    | Divides the second top element of the stack by the top element. The result is then stored in the second element, and the first element is removed.|
| mul    | Multiplies the top two elements of the stack. The result is then stored in the second element, and the first element is removed.|
| mod    | Computes the remainder of the second top element of the stack divided by the top element. The result is then stored in the second element, and the first element is removed.|
| #      | When the first non-space character of a line is a #, the line will be treated as a comment and ignored.|
| pchar  | Prints the integer stored in the top of the stack as its ASCII value representation.|
| pstr   | Prints the integers stored in the stack as their ASCII value representation. It stops printing when the value is 0, when the stack is empty, or when the value of the element is not a valid ASCII value.|
| rotl   | Rotates the top element of the stack.|
|stack  | This is the default behavior. Sets the format of the data into a stack (LIFO).|
|queue  | Sets the format of the data into a queue (FIFO).|
