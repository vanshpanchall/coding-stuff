#include <stdio.h>
#define MAX_SIZE 10 // maximum size of the stack
int stack[MAX_SIZE];
int top = -1; // initialize the top of the stack to -1 (empty)

// function to check if the stack is empty
int isEmpty()
{
    return (top == -1);
}

// function to check if ther stack is full
int isFull()
{
    return (top == MAX_SIZE - 1);
}

// function to push an element into the stack
void push(int value)
{
    if (isFull())
    {
        printf("Stack is Full. Cannot push %d\n", value);
    }
    else
    {
        top++;              // increment the top to point to the new element's position
        stack[top] = value; // assign the value to the top of the stack
    }
}

// function to pop an element from the stack
void pop()
{
    if (isEmpty())
    {
        printf("Stack is Empty. Cannot Pop.\n");
    }
    else
    {
        printf("Popped value: %d\n", stack[top]);
        top--; // decrement the top to remove the element form the stack
    }
}

// function to peek at the top element of the stack
void peek()
{
    if (isEmpty())
    {
        printf("Stack is empty. Cannot peek.\n");
    }
    else
    {
        printf("Top element: %d\n", stack[top]);
    }
}

// function to chenge the top element of the stack
void change(int value)
{
    if (isEmpty())
    {
        printf("Stack is empty, cannot change.\n");
    }
    else
    {
        stack[top] = value;
        printf("Top element changed to %d\n", value);
    }
}

// function to display the elements of the stack
void display()
{
    if (!isEmpty())
    {
        printf("Stack is empty. Nothing to display.\n");
    }
    else
    {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    push(5);
    push(10);
    push(15);
    push(20);

    display();

    peek();

    pop();
    pop();

    display();

    change(25);

    display();

    return 0;
}