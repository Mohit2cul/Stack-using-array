#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // here we use a pointer so we use -> operator
    struct stack *s;
    s->size = 69;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    //pushing an element manually
    s -> arr[0] = 89;
    s -> top ++;

    //chk if stack is empty 
    if(isEmpty(s)){
        printf("Stack is empty.");
    }
    else{
        printf("Stack is not empty.");
    }
    return 0;
}