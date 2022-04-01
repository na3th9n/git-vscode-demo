#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

// for stacks, it is a data structure that holds values in an array or a list where values can only be added on the top and the only
// values you can take out start at the top. Adding is known as push and taking out is known as pop. We have to create our own functions
// to create the push and pop functions

int mystack[STACK_LENGTH];
int top = EMPTY;


bool push(int value) {
    if (top >= STACK_LENGTH - 1) return false;

    top++;
    mystack[top] = value;
    return true;
}

int pop() {
    if (top == EMPTY) return STACK_EMPTY;

    int result = mystack[top];
    top--;
    return result;
}

int main () {
    push(56);
    push(78);
    push(13);

    int t;

    while((t = pop()) != STACK_EMPTY) {
        printf("t = %d\n", t);
    }
}