#include<stdio.h>
int main()
    {
        int d, i = 1, sum = 0, count = 1;
        scanf("%d", &d);
        while(d--){
            sum += i; count--;
            if(count == 0){
                i++; count = i;
            }
            
        }
        printf("%d", sum);
    }