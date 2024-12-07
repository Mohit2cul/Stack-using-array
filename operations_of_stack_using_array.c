# include <stdio.h>
#include <stdlib.h>

    struct stack{
        int size;
        int top;
        int *arr;
    };

    int isFull(struct stack *sp){
        if(sp->top == sp->size - 1){
            return 1;
        }
        else{
            return 0;
        }
    }

    int isEmpty(struct stack *sp){
        if(sp->top == -1){
            return 1;
        }
        else{
            return 0;
        }
    }

    void push(struct stack *sp, int val){
        if(isFull(sp)){
            printf("Stack Overflow %d cannot be pushed\n", val);
        }
        else{
            sp->top++;
            sp->arr[sp->top] = val;
        }
    }

    int pop(struct stack *sp){
        if(isEmpty(sp)){
            printf("Stack Underflow\n");
            return -1;
        }
        else{
            int val = sp->arr[sp->top];
            sp->top--;
            return val;
        }
    }

int main() {
    struct stack * sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int*)malloc(sp->size * sizeof(int));
    printf("Before pushing , Full: %d\n",isFull(sp));
    printf("Before pushing , Empty: %d\n",isEmpty(sp));

    push(sp,1);
    push(sp,2);
    push(sp,3);
    push(sp,4);
    push(sp,5);
    // push(sp,6); //--> stack overflow condition bcoz max size is 5

    printf("After pushing , Full: %d\n",isFull(sp));
    printf("After pushing , Empty: %d\n",isEmpty(sp));

    printf("Popped %d from the stack\n",pop(sp)); // LIFO order
    printf("Popped %d from the stack\n",pop(sp)); // LIFO order
    return 0;
}