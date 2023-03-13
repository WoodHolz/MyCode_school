#include<stdio.h>
int main()
    {
        float x, t = 2;
        scanf("%f", &x);
        int time = 0;
        while(1){
            x -= t;
            time++; 
            t *= 0.98;
            if(x < 0) break;
        }
        printf("%d", time);
    }