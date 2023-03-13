#include<stdio.h>
    int main()
    {
        char str[50] = {0};
        scanf("%s", str);
        char *p = NULL;
        p = str;
        int sum = 0, n = 1;
        for(int i = 0; i < 11; ++i){
            if(*(p + i) != '-'){
                int a = (str[i] - 48) * n;
                n++;
                sum += a;
            }
        }
        int result = sum % 11;
        if(result == str[12] - 48
        || (str[12] == 'X' && result == 10)){
            printf("Right");
            }
        
        else{
            if(result == 10){
                str[12] = 'X';
                printf("%s", str);
            }
            else{
                for(int i = 0; i < 12; ++i){
                    printf("%c", str[i]);
                }
                printf("%d\n", result);
            }
            
        }
        p = NULL;
        return 0;
    }
