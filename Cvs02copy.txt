/*
#include<stdio.h>
    int main()
    {
        printf("hello Cvs02");
        return 0;
    }
*/






#if 0
#include<stdio.h>
int main()
    {
        return 0;
    }
#endif








#if 0
#include<stdio.h> //P5719 ?????4.??3?????????
int main()
    {
        int n, k, a = 0, b = 0, c1 = 0, c2 = 0;
        scanf("%d %d", &n, &k);
        for(int i = 1; i <= n; ++i){
            if(i % k == 0){a += i; ++c1;}
            else {b += i; ++c2;}
        }
        if(0 == a || 0 == b){
            return 0;
        }
        float averagea, averageb;
        averagea = (a * 1.0) / (c1 * 1.0);
        averageb = (b * 1.0) / (c2 * 1.0);
        printf("%.1f %.1f", averagea, averageb);
        return 0;
    }
#endif

#if 0
#include<stdio.h> //P5720 ?????4.??4???????
int main()
    {
        float len = 0;
        scanf("%f", &len);
        int i = 1;
        for( ; ; ++i){
            len /= 2;
            if(len <= 1){
                break;
            }
        }
        printf("%d", i);
        return 0;
    }
#endif

#if 0
#include<stdio.h> //P5721 ?????4.??6???????????????
int main()
    {
        int n, r, c, m = 0;
        scanf("%d", &n);
        c = n;
        for(r = 0; r < n; ++r){
            for(int i = 0; i < c; ++i){
                ++m;
                printf("%02d", m);
            }
            --c;
            printf("\n");
        }
        return 0;
    }
#endif

#if 0
#include<stdio.h> //experiment 4 part 1-1
int main()
    {
        int arr[10];
        for(int i = 0; i < 10; ++i){
            scanf("%d", &arr[i]);
        }
        int n = 0, max = arr[0], sum = 0;
        for(int i = 0; i < 10; ++i){
            sum += arr[i];
                if(max < arr[i]){
                    max = arr[i];
                    n = i;
            }
        }
        printf("The number of the best is %d\n", n + 1);
        printf("And his/her grades is %d\n", max);
        printf("The average is %.1f", sum * (0.1) / 10);
        return 0;
    }
#endif

#if 0
#include<stdio.h>//experiment 4 part 1-2 
//invert the array
int main()
    {
        int arr[100];
        printf("Enter the number of the num you want to enter:\n");
        int n;
        scanf("%d", &n);
        printf("Enter your array\n");
        for(int i = 0; i < n; ++i){
            scanf("%d", &arr[i]);
        }
        int t;
        for(int i = 0; i < n / 2; i++){
            t = arr[i]; arr[i] = arr[n - i - 1]; arr[n - i - 1] = t;
        }
        for(int i = 0; i < n; ++i){
            printf("%d ", arr[i]);
        }
        return 0;
    }
#endif

#if 0
#include<stdio.h>//experiment 4 part 1-3
int main()
    {
        char a[10][10];
        for(int i = 0; i < 6; ++i){
            scanf("%s", a[i]);
        }
        for(int i = 0; i < 6 - 1; ++i){
            for(int ii = 0; ii < 6 - 1 - i; ++ii){
                if (strcmp(a[ii], a[ii + 1]) > 0) {
                char strtemp[10] = {0};
                strcpy(strtemp, a[ii]);
                strcpy(a[ii], a[ii + 1]);
                strcpy(a[ii + 1], strtemp);
            }
            }
        }
        for(int i = 0; i < 6; ++i){
            printf("%s ", a[i]);
        }
        return 0;
    }
#endif

#if 0
#include<stdio.h> //experiment 4 part 1-4
int main(void)
{
    int a[100]={0},b[100]={0},c[100]={0};
    int n=0,m=0;
    printf("??????????????????\n");
    do{
        scanf("%d",&a[n++]);
    } while (getchar()!='\n');

    do{
        scanf("%d",&b[m++]);
    } while (getchar()!='\n');

    int t=0;
    int i=0,j=0;
    while(i<n && j<m)
    {

        if(a[i]>=b[j])
            c[t++] = b[j++];
        else
            c[t++] = a[i++];
    }   

    if(i==n)
        while(t<n+m)
            c[t++] = b[j++];
    else
        while(t<n+m)
            c[t++] = a[i++];


    printf("??????????????:\n");
    for(int i=0; i<t; i++)
    {
        printf("%d",c[i]);
        if(i!=t-1)
            printf(",");
        else
            printf("\n");
    }
    return 0;
}
#endif

#if 0
#include<stdio.h>//experiment 4 part 2-1
#define N 10 
int main()
{
int a[N][N]={0};
int n,m=1;
int i,j,k,s,t;

scanf("%d",&n);
    for(i=0;;i++)               //?????ï¿½ï¿½????????????? 
    {
     for(j=i;j<n-i;j++){     //???????????????? 
    a[i][j]=m;
    m++;
    } 
  for(k=i+1;k<j;k++){   //????????????????????????????????????ï¿½ï¿½?? ???????????j-1 
                        //??k=j-1?? 
    a[k][j-1]=m;
    m++;
    }
  for(s=j-2;s>=i;s--){   //????????????????????????????????????????ï¿½ï¿½????? ???????????k-1?? 
                        //?????????i?? 
    a[k-1][s]=m;
    m++;
    }
  for(t=k-2;t>i;t--)   //????????????????????????????????????????????ï¿½ï¿½????? ??????????????i?? 
  {                    //??????? 
    a[t][i]=m;
    m++;
    }
    if(m>n*n)
    break;
    }

for(i=0;i<n;i++){
    for(j=0;j<n;j++)
        printf("%-6d ",a[i][j]);
        printf("\n");
}
return 0; 
}
#endif

#if 0
#include<stdio.h> //experiment 4 part 2-2
int main()
    {
        int n;
        scanf("%d", &n);
        int arr[10], b[10];
        for(int i = 1; i <= n; ++i){
            scanf("%d", &arr[i]);
        }
        //unmber
        for(int i = 1; i <= n; ++i){
            b[i] = i;
        }

        //sort
        for(int i = 1; i <= n; ++i){
            int t, tn;
            for(int ii = 1; ii <= n - i; ++ii){
                if(arr[ii] < arr[ii + 1]){
                    t = arr[ii]; arr[ii] = arr[ii + 1]; arr[ii + 1] = t;
                    tn = b[ii]; b[ii] = b[ii + 1]; b[ii + 1] = tn;
                }
            }
        }

        //print
        int rank = 1;
        for(int i = 1; i <= n; ++i){
            if(arr[i] != arr[i - 1]){
                rank = i;
                printf("%d: %d, %d\n", rank, b[i], arr[i]);
            }
            else{
                printf("%d: %d, %d\n", rank, b[i], arr[i]);
                }
        }
        return 0;
    }
#endif



#if 0
#include<stdio.h> //experiment 4 part 3-1

int main(void)
{
    char a[201]={'\0'};
    char b[201]={'\0'};
    char c[201]={'\0'};
    c[201] = '\0';
    char ch = 0;
    int num_a=0,num_b=0;
    printf("?????????????????????????ï¿½ï¿½????\n");
    //??????????
    ch = getchar();
    while(ch!= '\n')
    {
        a[num_a++] = ch;
        ch = getchar();
    }   
    ch = getchar();         
    while(ch!= '\n')
    {
        b[num_b++] = ch;
        ch = getchar();
    }
    //?????????????
    for(int i=0; i<num_a; i++)
        a[200-i] = a[num_a-i-1];
    for(int i=0; i<num_b; i++)
        b[200-i] = b[num_b-i-1];
    for(int i=100; i<=200-num_a; i++)
        a[i] = '0';
    for(int i=100; i<=200-num_b; i++)
        b[i] = '0';
    //???????
    int up =0;//?????ï¿½ï¿½
    int big = num_a > num_b ? num_a : num_b;
    for(int i=0; i<big+1; i++)
    {
        if((a[200-i]-'0' + b[200-i]-'0'+ up) == 10)//?ï¿½ï¿½????10????????
        {
            c[200-i] = '0';
            up = 1;
        }
        else
        {
            c[200-i] = (a[200-i]-'0' + b[200-i] -'0')%10 + up + '0';
            up = 0;
            up = (a[200-i]-'0' + b[200-i]-'0')/10;
        }
    }

    //???????????????
    if(c[200-big] == '0')
        printf("%s\n",&c[200-big+1]);
    else
        printf("%s\n",&c[200-big]);
}

#endif

#if 0
#include<stdio.h> //experiment 4 part 1-4 wrong
#include<string.h>
int main()
    {
        int a[10] = {1, 3, 5, 7, 9}, b[5] = {2, 4, 6, 8, 10};
        //write the array Bravo into the array Alfa
        for(int i = 0; i < n; ++i){
            a[N + i] = b[i];
        }
        //sort
        for(int i = 0; i < 9; ++i){
            for(int ii = 0; ii < 9 - i; ++ii){
                if(a[ii] > a[ii + 1]){
                    a[ii] ^= a[ii + 1] ^= a[ii] ^= a[ii + 1];
                }
            }
        }
        //result
        N = sizeof(a) / sizeof(a[0]);
        int c[N];
        for(int i = 0; i < N; ++i){
            c[i] = a[i];
        }
        for(int i = 0; i < N; ++i){
            printf("%d", c[i]);
        }
        return 0;
    }
#endif

#if 0
#include<stdio.h> //experiment 5 part 1-1
void wanshu();

int main()
{
    wanshu();
    return 0;
}
void wanshu()
    {
        for(int i = 2; i < 1001; ++i){
            int b = 1;
            for(int ii = 2; ii < i; ++ii){
                if(0 == i % ii){
                    b += ii;
                }
            }
            if(b == i){
                printf("%d\n", i);
            }
        }
    }
#endif

#if 0
#include<stdio.h> //experiment 5 part 1-2
void humanshu()
    {
        int t;
        for(int i = 2; i < 1001 && i != t; ++i){ //the range of the number
            int a = 1, b = 1;
            for(int ii = 2; ii < i; ++ii){ //find the Approximate Number and sum them
                if(!(i % ii)){
                    a += ii;
                }
            }
            //the conumber of it
            for(int ii = 2; ii < a; ++ii){ 
                if(!(a % ii)){
                    b += ii;
                }
            }
            //judge
            if(i == b){
                if(i != a)
                printf("%d %d\n", i, a);
                t = a;
            }
        }
    }

int main()
    {
        humanshu();
        return 0;
    }
#endif

#if 0
#include<stdio.h> //experiment 5 part 1-3
void mysushu(int a)
	{
		int n = 0;
		for(int i = 2; i <= a; ++i){
			int ii;
            // judge
			for(ii = 2; ii < i; ++ii){
				if(!(i % ii)) break;
			}
            // output the result
			if(i <= ii){
                printf("%2d ", i, ++n);
                if(!(n % 5)) printf("\n");
            }
		}  
	}

int main()
    {
		int x;
		scanf("%d", &x);
		mysushu(x);
        return 0;
    }

#endif

#if 0
#include<stdio.h> //experiment 5 part 1-4
void shuixianhuashu()
    {
        // range 100 ~ 999
        for(int i = 100; i < 1000; ++i){
            int a = i / 100;
            int b = (i % 100) / 10;
            int c = i % 10;
            int sum = 0;
            a = a * a * a; b = b * b * b; c = c * c * c;
            sum = a + b + c;
            if(sum == i) printf("%4d", i);
        }
    }
int main()
    {
        shuixianhuashu();
        return 0;
    }
#endif

#if 0
#include<stdio.h> //experiment 5 part 1-5
//gongyueshu
int hs1(int a, int b)
    {
        // a < b  
        if(a > b){
            a ^= b ^= a ^= b;
        }
        int hs1;
        for(int i = a; i > 0; --i){
            if((!(a % i))&&(!(b % i))){
                hs1 = i;
                break;
            }
        }
        return(hs1);
    }

//gongbeishu
int hs2(int, int);
int main()
    {
        int a, b, r1, r2;
        scanf("%d %d", &a, &b);
        r1 = hs1(a, b);
        r2 = hs2(a, b);
        printf("%d %d", r1, r2);
        return 0;
    }

int hs2(int a, int b)
    {
        //a < b
        if(a > b){
            int t = a; a = b; b = t;
        } 
        for(int i = b; ; ++i){
            if((! (i % a)) && (! (i % b))){
                return(i);
            }
        }
    }
#endif

#if 0
#include<stdio.h> //experiment 5 part 1-6
int input(int * a)
    {
        int len;
        printf("Enter the length of the array:");
        scanf("%d", &len);
        printf("Enter the array\n");
        for(int i = 0; i < len; ++i){
            scanf("%d", &a[i]);
        }
        return(len);
    }

int add(int *a, int *b, int *c, int len1, int len2)
    {
        int m = 0, n = 0, i;
        for(i = 0; i <= len1 + len2; ++i){
            if(a[m] < b[n]){
                c[i] = a[m++]; 
            }
            else if(a[m] > b[n]){
                c[i] = b[n++];
            }
            else{
                c[i] = a[m]; c[i + 1] = a[m]; 
                ++m; ++n; ++i;
            }                                                                                                                                                                                           
        }
        if(m == len1 && n == len2){
            if(a[m] >= b[n]){
                c[i] = a[m];
            }
            else c[i] = b[n];
        }
    }

int print(int *c, int len)
    {
        for(int i = 0; i < len; ++i){
            printf("%d ", c[i]);
        }
    }
int main()
    {
        int a[10], b[10], c[20];
        int len1 = input(&a); 
        int len2 = input(&b);
        add(&a, &b, &c, len1, len2);
        print(&c, len1 + len2);
        return 0;
    }
#endif

#if 0
#include<stdio.h> //experiment 5 part 1-7
#include<string.h>
void  input(char a[][50], int r)
    {
        printf("Enter please\n");
        for(int i = 0; i < r; ++i){
            scanf("%s", a[i]);
        }
    }


void sort(char a[][50], int r)
    {char t[50] = {0};
        for(int i = 0; i < r - 1; ++i){
            for(int ii = 0; ii < r - 1 - i; ++ii){
                if(strcmp(a[ii], a[ii + 1]) > 0){
                    
                    strcpy(t, a[ii]);
                    strcpy(a[ii], a[ii + 1]);
                    strcpy(a[ii + 1], t);
                }
            }
        }
    }
    

void print(char a[][50], int r)
    {
        printf("Result:\n");
        for(int i = 0; i < r; ++i){
            printf("%s\n", a[i]);
        }
    }
int main()
    {
        char a[6][50] = {0};
        input(a, 6);
        sort(a, 6);
        print(a, 6);
        return 0;
    }
#endif



#if 0
#include<stdio.h> //experiment 5 part 2-1
void shuixianhua()
    {
        //range 1000~9999
        for(int i = 1000; i < 10000; ++i){
            int a = i / 1000, b = i % 1000 / 100, c = i % 100 / 10, d = i % 10;
            for(int i = 0; i < 2; ++i){
                a *= a; b *= b; c *= c; d *= d;
            }
            int sum = a + b + c + d;
            if(sum == i ){
                printf("%d\n", i);
            }
        }
    }
int main()
    {
        shuixianhua();
        return 0;
    }
#endif

#if 0
#include<stdio.h>//experiment 5 part 2-2

int input(int a[])
    {
        printf("Enter the array of positive integer\n");
        int i = 0;
        do
        {
            scanf("%d", &a[i++]);
        } while (getchar() != '\n');
        
        return(i);
    }

void maxmin(int a[],int i)
    {
        int max = a[0], min = a[0], n = 0;
        while(n < i){
                if(a[n] > max){
                    max = a[n];
                }
                if(a[n] < min){
                    min = a[n];
                }
                n++;
        }
        printf("Max = %d\nMin = %d\n", max, min);
    }

int average(int a[], int i)
    {
        int n = 0, sum = 0;
        while(n < i){
            sum += a[n++];
        }
        printf("Average: %.1f", (sum * 1.0) / i);
    }
int main()
    {
        int arr[100];
        int len = input(arr[100]);
        maxmin(arr[100], len);
        average(arr[100], len);
        return 0;
    }
#endif




#if 0
#include<stdio.h>//experiment 5 part 2-3
int ssyz(int x)
    {
        for(int i = 2; i < x + 1; ){
            if((! (x % i)) || i == x){
                printf("%d ", i); x = x / i;
            }
            else ++i;
        }
    }
int main()
    {
        int x;
        scanf("%d", &x);
        ssyz(x);
        return 0;
    }
#endif


#if 0
#include<stdio.h>//experiment 5 part 3-1
int shuixianhua()
    {
        int a[21] = {0};
        //set the beginning
        a[0] = 1;
        for(int i = 1; i < 21 ; ++i){
            a[i] = 0;
        }
        //computering
        for(int i = 20; i > -1; --i){
            while(a[i] != 10){
                a[i]++;
                int s = 0;
                
                for(int ii = 0; ii < 21; ++ii){
                    int t = 1;
                    for(int j = 0; j < 21; ++j){
                        t *= a[ii];
                    }
                    s += t;
                }

                if(s == &a) printf("%s\n", a);

                if(a[i] == 9) break;
            }
        }
    }
int main()
    {
        shuixianhua();
        return 0;
    }
#endif



#if 0
#include<stdio.h>//experiment 5 part 3-2
void xulie()
    {
        int x, sum = 0;
        scanf("%d", &x);
        for(int i = 1; i <= (x + 1) / 2; ++i, sum = 0){
            int ii;
            for(ii = i; ii <= (x + 1) / 2; ++ii){
                sum += ii;
                if(sum ==x)  break;
            }
            if(sum ==x) printf("%d - %d\n", i ,ii);
        }
    }
int main()
    {
        xulie();
        return 0;
    } 
#endif


#if 0
#include<stdio.h> //experiment 5 part 3-3
int main()
{
int arr[8];
int i,m,n,temp,sum,flag;
for(i=0;i<8;++i)
scanf("%d",&arr[i]);
for(m=0;m<7;++m){
    for(n=0;n<7-m;++n){
if(arr[n]<=arr[n+1]){
    temp = arr[n];
    arr[n] = arr[n+1];
    arr[n+1] = temp;
        }
    }
} 
for(m=0;m<8;++m){
if(arr[m]<0){
    flag = arr[m];
    break;
    }
}
sum = arr[0]+arr[1]+flag;
printf("%d",sum);
}
#endif

#if 0
#include<stdio.h> //experiment 5 part 3-4
int sushu(int arr[])
    {
        int n = 0;
        // find the sushu
        for(int i = 2; i < 1994; ++i){
            int ii;
            for(ii = 2; ii < i; ++ii){
                if(! (i % ii)) break;
            }
            // output
            if(i == ii){
            arr[n++] = i; 
            }
        }
        //return the length of the array
        return(n);
    }

int hs2(int a[], int len, int b[])
    {
        int n = 0;
        for(int i = 0; i < len - 1; ++i){
            b[n++] = a[i + 1] - a[i];
        }
        return(n);
    }

int outputtext(int a[], int len)
    {
        for(int i = 0; i < len; ++i){
            printf("%d ", a[i]);
        }
        printf("\n");
    }

int re(int a[], int len)
    {
        int sum = 0, n = 0;
        for(int i = 0; i < len; ++i, sum = 0){
            for(int ii = 0; ii < len; ++ii){
                sum += a[ii];
                if(sum == 1898) break;
            }
            if(sum == 1898) n++;
        }
        if(n == 0) printf("Nojoy!");
    }
int main()
    {
        int arr[301] = {0};
        int a[301] = {0};
        int len = sushu(arr);
        //text
        //printf("%d\n", len);
        int i = hs2(arr, len, a);
        //text
        //printf("%d\n", i);
        outputtext(a, i);
        re(a, i);
        return 0;
    }
#endif



#if 0
#include<stdio.h>
int main()
    {
        return 0;
    }
#endif






#if 0
#include <stdio.h> //PTA 6-1 ¼òµ¥Êä³öÕûÊý

void PrintN ( int N );

int main ()
{
    int N;

    scanf("%d", &N);
    PrintN( N );

    return 0;
}

void PrintN(int N)
    {
        for(int i = 1; i < N + 1; ++i){
            printf("%d\n", i);
        }
    }
#endif

#if 0
#include<stdio.h> //luogu P5735 ¡¾Éî»ù7.Àý1¡¿¾àÀëº¯Êý
#include<math.h>
float input(float a[3][2])
    {
        for(int r = 0; r < 3; ++r){
            for(int c = 0; c < 2; ++c){
                scanf("%f", &a[r][c]);
            }
        }
    }

float cycle(float a[3][2])
    {
        float dis = 0;
            // row 
            for(int r = 0; r < 3 - 1; ++r){
                for(int rr = r + 1; rr < 3; ++rr){
                    // cline
                    float s = 0;
                    for(int c = 0; c < 2; ++c){
                        float t = (a[rr][c] - a[r][c]) * (a[rr][c] - a[r][c]);
                        s += t;
                    }
                    s = sqrt(s);
                    dis += s;
                }
            }
        printf("%.2f", dis);
    }
int main()
    {
        float a[3][2] = {0};
        input(a);
        cycle(a);
        return 0;
    }
#endif
