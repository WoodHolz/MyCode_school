#if 1
#include<stdio.h>
#include<string.h>
void hs()
{
    FILE *fp = NULL;
    fp = fopen("./string1.txt", "r");
    char a[50] = {0};
    fgets(a, 50, (FILE *)fp);
    //printf("%s", a);
    fp = fopen("./string2.txt", "r");
    char b[50] = {0};
    fgets(b, 50, (FILE *)fp);
    fclose(fp);
    fp = NULL;

    int lena = strlen(a);
    int lenb = strlen(b);
    //printf("%d %d", lena, lenb);
    char c[lena + lenb];
    int n = 0;
    for(int i = 0; i < lena; ++i){
        c[n++] = a[i];
    }
    for(int i = 0; i < lenb; ++i){
        c[n++] = b[i];
    }

    //sort
    for(int i = 0; i < )
}
main()
{
    hs();

    return 0;
}
#endif