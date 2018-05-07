//What will be the output of the following program?

#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int i = 1, j = 2;

    swap(i, j);
    printf("i = %d, j = %d\n", i, j);
    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
/*
Answer:
i = 1, j = 2

This is because arguments are passed to functions by value.  So swap is just
swapping its temporary variables using the values it recieved, and then the
temporary variables are gone after the function is over.
*/
