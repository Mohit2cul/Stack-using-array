#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int main()
{

    // this will declare in . operator
    struct stack s;
    s.size = 69;
    s.top = -1;
    s.arr = (int *)malloc(s.size * sizeof(int));

                    //OR

    // here we use a pointer so we use -> operator
    struct stack *S;
    S -> size = 69;
    S -> top = -1;
    S -> arr = (int *)malloc(S->size * sizeof(int));

    return 0;
}