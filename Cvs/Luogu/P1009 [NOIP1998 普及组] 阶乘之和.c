#include<stdio.h>
int main()
    {
        long long int a = 0, t = 1;
        int b;
        scanf("%d", &b);
        for(int i = b; i > 0; --i){
            t = 1;
            for(int ii = 1; ii < i + 1; ++ii){
                t *= ii;
            }
            a += t;
        }
        printf("%lld", a);
        return 0;
    }