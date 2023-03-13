#include<stdio.h>
int main()
    {
        int arr[100], i = 0;
        for(i = 0; i < 100; ++i){
            scanf("%d", &arr[i]);
            if(arr[i] == 0) break;
        }
        for(int n = i - 1; n > -1; n--){
            printf("%d", arr[n]);
            printf(" ");
        }
        return 0;
    }