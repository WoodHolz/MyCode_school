//wrong completely
#include <stdio.h>
int ct = 9;
int main()
{
    
    int depth  = 0;
    int i = 1;
    while(i < ct){
        i = 2 * i;
        printf("sum = %d\n", i - 1);
        depth++;
    }
    printf("%d", depth);
    return 0;
}