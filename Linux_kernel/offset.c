#include <stdio.h>

/*
typedef struct listhead
{
    
    listhead * prev;
    listhead * next;
}listhead;
*/

typedef struct 
{
    long long num;
    char bun;
    int num_1;
    //listhead tasks;
}node;

int main()
    {
        printf("offset:%u\n", \
        &((node *) 0) -> num_1);
    }