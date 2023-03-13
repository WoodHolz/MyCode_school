#include<stdio.h>
int main()
    {
        int n, x, re;
        scanf("%d %d", &n, &x);
        for(int i = 1; i < n + 1; ++i){
            int t = i;
            while(t){
                if(! (t % 10 - x)) re++;
                t /= 10;
                }
        }
        printf("%d", re);
        return 0;
    }