/*
#include<stdio.h>
int main()
{
    printf("Hello");
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int t1, t2;
    scanf("%d:%d", &t1, &t2);
    if(t1 > 12){
    printf("%02d:%02d PM", (t1 - 12), t2);
    }
    else if(t1 == 12 && t2 > 0) {
    printf("12:%02d PM", t2);
    }
    else {
    printf("%02d:%02d AM", t1, t2);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d,%d", &a, &b);
    if(a == 0||b == 0){
    return 0;
    }
    if(a % 2){
    if(b % 2){
        printf("%d-%d=%d", a, b, a - b);
    }
    else
        printf("%d*%d=%d", a, b, a * b);
    }
    else{
    if(b % 2){
        printf("%d/%d=%d", a, b, a / b);
    }
    else
    printf("%d+%d=%d", a, b, a + b);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a < 1){
    return 0;
    }
    else if(0 == a % 3){
    if(a % 5){
        printf("%d", a % 5);
        }
    }
    else if(0 == a % 5){
    if(a % 3){
        printf("%d", a % 3);
    }
    } 
    else{
    printf("%d", a % 15);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a;
    scanf("%o", &a);
    printf("%o(8)=", a);
    printf("%d(10)\n", a);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int min;
    scanf("%d", &min);
    if(min < 0){
    return 0;
    }
    else
    printf("%d(m)=%d(h):%02d(m)", min, min / 60, min % 60);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    float x1, y1, x2, y2, x;
    scanf("%f,%f", &x1, &y1);
    scanf("%f,%f", &x2, &y2);
    x = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    printf("D=%.2f", x);
    return 0;
}
*/
/*
#include<stdio.h>
void main()
{
int x,y,z;
scanf("%d%d%lf",&x,&y,&z);
}
*/
/*
#include<stdio.h>
void main()
{ 
float x;
x=213.82631; 
printf("%-4.2f\n",x); 
}
*/
/*
#include<stdio.h>
int main()
{
int a, b;
scanf("%d %d", &a, &b);
if((b < 0) || (a < 0))
return 0;
else 
printf("%d", a * b);
return 0;
}
*/
/*
#include<stdio.h>
int main()
{
float t; int n;
scanf("%f %d", &t, &n);
printf("%.3f\n", t / n);
printf("%d", n * 2);
return 0;
}
*/
/*
#include<stdio.h>
int main()
{
int a, b, c, d, x;
scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a > c) return 0;
    else 
        x = (c - a) * 60 + (d - b);
    printf("%d %d", x / 60, x % 60);
return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
int n;
scanf("%d", &n);
switch (n)
{
    case 1:
    printf("I love Luogu!");
    break;
    case 2:
    printf("6 4");
    break;
    case 3:
    printf("3\n");
    printf("12\n");
    printf("2\n");
    break;
    case 4:
    printf("166.667");
    break;
    case 5:
    printf("15");
    break;
    case 6:
    printf("10.8167");
    break;
    case 7:
    printf("110\n90\n0");
    break;
    case 8:
    printf("31.4159\n78.5398\n523.599\n");
    break;
    case 9:
    printf("22");
    break;
    case 10:
    printf("9");
    break;
    case 11:
    printf("33.3333");
    break;
    case 12:
    printf("13\n");
    printf("R\n");
    break;
    case 13:
    printf("16");
    break;
    case 14:
    printf("50");
    break;
    }
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
#include<stdio.h>
#include<math.h>
    int main()
    {
        float a, b, c, p;
        scanf("%f %f %f", &a, &b, &c);
        p = (a + b + c) / 2;
        printf("%.1f", sqrt(p * (p - a) * (p - b) * (p - c)));
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        int a = 0, b = 0;
        scanf("%d %d", &a, &b);
        printf("%d", ((10 * a + b) / 19));
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        int m, t, s, r;
        scanf("%d %d %d", &m, &t, &s);
        if(t != 0){
        r = m - s / t;
            if(s % t != 0)
            r = r - 1;
            if(0 > r)
            r = 0;
        }
        printf("%d", r);
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
#include<stdio.h>
int main()
    {
        unsigned long long n;
        scanf("%lld", &n);
        if(n < 0){
            return 0;
        }
        else{
        printf("%lld", n*(n-1)/2*(n-2)/3*(n-3)/4);
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h>
#include<math.h>
    int main()
{
    int s, v, time, hour, min;
    scanf("%d %d", &s, &v);
    if(s % v == 0){ 
        time = s / v + 10;
    }
    else{ 
    time = s / v + 11;
    }
    if(time < 1921){
        if(time < 481){
            hour = 7 - time / 60;
            min = 60 - time % 60;
        }
        else{
            hour = 23 - (time - 480) / 60;
            min = 60 - time % 60;
        }
    }
    printf("%02d:%02d", hour, min);
    return 0;
}
#endif
#if 0
#include<stdio.h>
int main()
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        printf("%d", a / 5 + b / 10 * 3 + c / 2);
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
#include<stdio.h>
int main()
    {
        int a, b = 0, c = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
        scanf("%d", &a);
        if(a % 2 == 0){
            b = 1;
            }
        if(4 < a && 13 > a){
            c = 1;
        }
        if(b == 1 && c == 1){
            t1 = 1;
            t2 = 1;
        }
        if(b == 1 | c == 1){
            t2 = 1;
        }
        if(b == 1){
            if(c == 0){
                t3 = 1;
            }
        }
        if(c == 1){
            if(b == 0){
                t3 = 1;
            }
        }
        if(b == 0 && c == 0){
            t4 = 1;
        }
        printf("%d %d %d %d", t1, t2, t3, t4);
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        int y, a = 0;
        scanf("%d", &y);
        if(y < 1582){
            return 0;
        }
        else{
            if((y % 4 == 0 && y %100 !=0) || (y % 400 == 0)){
                a = 1;
            }
        }
        printf("%d", a);
        return 0;
    }
#endif
#if 0
#include<stdio.h> //(1)
#include<math.h>
int main()
    {
        float x, y;
        scanf("%f", &x);
        if(10 > x && 0 <= x){
            y = sin(x);
        }
        else if(10 <= x && x < 20){
            y = cos(x);
        }
        else if(20 <= x && x < 30){
            y = exp(x) - 1;
        }
        else if (30 <= x && 40 > x){
            y = log(x + 1);
        }
        else{
            for(int i = 0; i < 4; ++i){
                x *= x;
                y = x;
            }
        }
        printf("%f", y);
        return 0;
    }
#endif
#if 0
#include<stdio.h> //(2)
int main()
    {
        float x, y;
        scanf("%f", &x);
        if(x <= 50){
            y = x * 0.15;
        }
        else{
            y = (x - 50) / 10 + 7.5;
        }
        printf("%f", y);
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        int x;
        scanf("%d", &x);
        switch (x)
        {
        case 0:
            printf("Today, I ate 0 apple.");
            break;
        case 1:
            printf("Today, I ate 1 apple.");
            break;
        default:
            printf("Today, I ate %d apples.", x);
            break;
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        int a, x, y;
        scanf("%d", &a);
        x = 5 * a;
        y = 3 * a + 11;
        if(x > y){
            printf("Luogu");
        }
        else{
            printf("Local");
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        float m, n;
        scanf("%f %f", &m, &n);
        float x = m / (n * n);
        if(x < 18.5){
            printf("Underweight");
        }
        else if(18.5 <= x && x < 24){
            printf("Normal");
        }
        else{
            printf("%.4f\n", x);
            printf("Overweight");
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h> //(3)
int main()
    {
        int a[3] = {}, t;
        for(int i = 0; i < 3; ++i){
            scanf("%d", &a[i]);
        }
        for(int m = 0; m < 3; ++m){
            for(int n = 0; n < 3 - m; ++n){
                if(a[n] > a[n + 1]){
                    t = a[n];
                    a[n] = a[n + 1];
                    a[n + 1] = t;
                }
            }
        }
        printf("%d %d %d", a[0], a[1], a[2]);
        return 0;
    }
#endif
#if 0
#include<stdio.h> //(4)
int main()
    {
        char a;
        scanf("%c", &a);
        if(a > ('A' - 1) && a < ('z' + 1)){
<<<<<<< HEAD:Cvs/Cvs.c
            printf("锟斤拷母 %c", a);
        }
        else if(a >= '0' && a <= '9'){
            printf("锟斤拷锟斤拷 %c", a);
        }
        else{
            printf("锟斤拷锟斤拷锟街凤拷 %c", a);
=======
            printf("��ĸ %c", a);
        }
        else if(a >= '0' && a <= '9'){
            printf("���� %c", a);
        }
        else{
            printf("�����ַ� %c", a);
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
        }
        return 0;
    }
#endif
#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h> //P5716 锟斤拷锟斤拷锟?3.锟斤拷9锟斤拷锟铰凤拷锟斤拷锟斤拷
=======
#include<stdio.h> //P5716 �����?3.��9���·�����
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
int main()
    {
        int yr, mon, day;
        scanf("%d %d", &yr, &mon);
        switch (mon)
        {
        case 1:
            day = 31;
            break;
        case 2:
            if((yr % 4 == 0 && yr % 100 != 0)||(yr % 400 == 0)){
                day = 29;
                }
            else{
                day = 28;
            }
            break;
        case 3:
            day = 31;
            break;
        case 4:
            day = 30;
            break;
        case 5:
            day = 31;
            break;
        case 6:
            day = 30;
            break;
        case 7:
            day = 31;
            break;
        case 8:
            day = 31;
            break;
        case 9:
            day = 30;
            break;
        case 10:
            day = 31;
            break;
        case 11:
            day = 30;
            break;
        case 12:
            day = 31;
            break;
        }
        printf("%d", day);
        return 0;
    }
#endif
#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h>//P1085 [NOIP2004 锟秸硷拷锟斤拷] 锟斤拷锟斤拷锟剿的斤拷锟?
=======
#include<stdio.h>//P1085 [NOIP2004 �ռ���] �����˵Ľ��?
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
int main()
    {
        int a, b, c[10];
        for(int i = 0; i < 7; ++i){
            scanf("%d %d", &a, &b);
            c[i] = a + b;
        }
        int max = c[0], n = 0;
        for(int m = 0; m < 7; ++m){
            if(max < c[m]){
                max = c[m];
                n = m;
            }
        }
        printf("%d", max > 8?n + 1 : 0);
        return 0;
    }
#endif
#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h>//P1909 [NOIP2016 锟秸硷拷锟斤拷] 锟斤拷铅锟斤拷
=======
#include<stdio.h>//P1909 [NOIP2016 �ռ���] ��Ǧ��
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
int main()
    {
        int x, a[100], b[100];
        scanf("%d", &x);
        for(int i = 0; i < 3; ++i){
            scanf("%d %d", &a[i], &b[i]);
            if(x % a[i] == 0){
                a[i] = (x / a[i]) * b[i];
            }
            else{
                a[i] = (x / a[i] + 1) * b[i];
            }
        }
        int min = a[0];
        int m = 0;
        while(m < 3){
            if(min > a[m]){
                min = a[m];
            }
            ++m;
        }
        printf("%d", min);
        return 0;
    }
#endif
#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h>//P1055 [NOIP2008 锟秸硷拷锟斤拷] ISBN 锟斤拷锟斤拷 wrong
=======
#include<stdio.h>//P1055 [NOIP2008 �ռ���] ISBN ���� wrong
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
#include<string.h>
int main()
    {
        char a[20], en = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'X'};
        scanf("%s", a);
        int n = 1, m = 0;
        for(int i = 0; i < strlen(a); ++i){
            if(i != 1 && i != 5 && i != 11 && i != 12){
                m += (a[i] * n);
                ++n;
            }
        }
        int q = m % 11;
        if(a[12] == en[q]){
            printf("Right");
        }
        else{
            a[12] = en[q];
            printf("%s", a);
            }
        return 0;
    }
#endif





#if 0
#include<stdio.h>
#include<stdlib.h>
int main()
    {
        return 0;
    }
#endif



#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h>//锟斤拷锟斤拷(1)
=======
#include<stdio.h>//����(1)
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
#include<math.h>
int main()
    {
        float square; 
        unsigned long x, y;
        scanf("(%u,%u)", &x, &y);
        if(((x - 2) * (x - 2) + (y - 2) * (y - 2)) <= 1){
            printf("10(m)");
        }
        else if(((x + 2) * (x + 2) + (y - 2) * (y - 2)) <= 1){
            printf("10(m)");
        }
        else if(((x + 2) * (x + 2) + (y + 2) * (y + 2)) <= 1){
            printf("10(m)");
        }
        else if(((x - 2) * (x - 2) + (y + 2) * (y + 2)) <= 1){
            printf("10(m)");
        }
        else{
            printf("0(m)");
        }
        return 0;
    }
#endif
#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h> //锟桔猴拷(1)
=======
#include<stdio.h> //�ۺ�(1)
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
int main()
    {
        float a, b, r;
        char c;
        scanf("%f %c %f", &a, &c, &b);
        switch (c)
        {
        case '+':
            r =  a + b;
            break;
        case '-':
            r = a - b;
            break;
        case '*':
            r = a * b;
            break;
        case '/':
            if(0 == b){
                return 0;
            }
            else{
                r = a / b;
            }
            break;
        case '%':
            if(0 == b){
                return 0;
            }
            else{
                r = (int)a % (int)b;
            }
            break;
        }
        printf("%f", r);
        return 0;
    }
#endif
#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h>//锟桔猴拷(2)
=======
#include<stdio.h>//�ۺ�(2)
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
#include<string.h>
#include<math.h>
int main()
    {
        float a, b, r;
        char c[5];
<<<<<<< HEAD:Cvs/Cvs.c
        printf("锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟絓n");
        scanf("%s", &c);
        if('+' == c[0] || '-' == c[0] || '*' == c[0] || '/' == c[0] || '%' == c){
            printf("锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷\n");
=======
        printf("�����������\n");
        scanf("%s", &c);
        if('+' == c[0] || '-' == c[0] || '*' == c[0] || '/' == c[0] || '%' == c){
            printf("������������\n");
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
            scanf("%f %f", &a, &b);
            switch (c[0]){
            case '+': r = a + b; break;
            case '-': r = a - b; break;
            case '*': r = a * b; break;
            case '/':if(0 == b){
<<<<<<< HEAD:Cvs/Cvs.c
                    printf("锟斤拷锟斤拷为锟斤拷");
=======
                    printf("����Ϊ��");
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
                    return 0;
                }
                else{
                    r = a / b;
                }
                break;
            case '%':
                if(0 == b){
<<<<<<< HEAD:Cvs/Cvs.c
                    printf("锟斤拷锟斤拷为锟斤拷");
=======
                    printf("����Ϊ��");
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
                    return 0;
                }
                else{
                    r = (int)a % (int)b;
                }
            break;
            }
        }
        else{
<<<<<<< HEAD:Cvs/Cvs.c
            printf("锟斤拷锟斤拷锟斤拷一锟斤拷锟斤拷\n");
=======
            printf("������һ����\n");
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
            scanf("%f", &a);
            switch (c[0])
            {
            case 's':
                if('i' == c[1] && 'n' == c[2]){
                    r = sin(a);
                }
                else if('q' == c[1] && 'r' == c[2] && 't' == c[3]){
                    r = sqrt(a);
                }
                break;
            case 'c':
                if('o' == c[1] && 's' == c[2]){
                    r = cos(a);
                }
                else{
<<<<<<< HEAD:Cvs/Cvs.c
                    printf("锟睫达拷锟斤拷锟斤拷:(");
=======
                    printf("�޴�����:(");
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
                    return 0;
                }
                break;
            case 't':
                if('a' == c[1] && 'n' == c[2]){
                    r = tan(a);
                }
                else{
<<<<<<< HEAD:Cvs/Cvs.c
                    printf("锟睫达拷锟斤拷锟斤拷:(");
=======
                    printf("�޴�����:(");
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
                    return 0;
                }
                break;
            case 'e':
                if('x' == c[1] && 'p' == c[2]){
                    r = exp(a);
                }
                else{
<<<<<<< HEAD:Cvs/Cvs.c
                    printf("锟睫达拷锟斤拷锟斤拷:(");
=======
                    printf("�޴�����:(");
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
                    return 0;
                }
                break;
            default:
<<<<<<< HEAD:Cvs/Cvs.c
                printf("锟睫达拷锟斤拷锟斤拷:(");
                return 0;
            }
        }
        printf("锟斤拷锟轿拷锟絓n%f", r);
=======
                printf("�޴�����:(");
                return 0;
            }
        }
        printf("���Ϊ��\n%f", r);
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        for(int i = 0; i < 4; i++){
            for(int m = 0;m < i + 1; ++m){
                printf(" ");
            }
            for(int n = 0; n < 7 - 2 * i; n++){
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
#endif
#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h>//mooc 锟斤拷锟斤拷锟斤拷锟斤拷
=======
#include<stdio.h>//mooc ��������
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
int main()
    {
        int d;
        d = 2020 % 7;
        switch (d)
        {
        case 0:
<<<<<<< HEAD:Cvs/Cvs.c
            printf("锟斤拷锟斤拷锟斤拷");
            break;
        case 1:
            printf("锟斤拷锟斤拷一");
            break;
        case 2:
            printf("锟斤拷锟节讹拷");
            break;
        case 3:
            printf("锟斤拷锟斤拷锟斤拷");
            break;
        case 4:
            printf("锟斤拷锟斤拷锟斤拷");
            break;
        case 5:
            printf("锟斤拷锟斤拷锟斤拷");
            break;
        case 6:
            printf("锟斤拷锟斤拷锟斤拷");
=======
            printf("������");
            break;
        case 1:
            printf("����һ");
            break;
        case 2:
            printf("���ڶ�");
            break;
        case 3:
            printf("������");
            break;
        case 4:
            printf("������");
            break;
        case 5:
            printf("������");
            break;
        case 6:
            printf("������");
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
            break;
        }
        return 0;
    }
#endif
#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h>//mooc 锟斤拷锟斤拷锟斤拷锟叫讹拷
=======
#include<stdio.h>//mooc �������ж�
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
int main()
    {
        int a;
        scanf("%d", &a);
        if(a < 1){
            printf("Data error!");
            return 0;
        }
        if(!(a % 5) && !(a % 7)){
            printf("Yes!");
        }
        else{
            printf("No!");
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h>
int main()
    {
        int x;
        scanf("%d", &x);
        switch (x)
        {
        case 0:
<<<<<<< HEAD:Cvs/Cvs.c
            printf("停");
            break;
        case 1:
            printf("锟斤拷");
            break;
        default:
            printf("锟饺达拷");
=======
            printf("ͣ");
            break;
        case 1:
            printf("��");
            break;
        default:
            printf("�ȴ�");
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
        }
        return 0;
    }
#endif
#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h>//P1422 小锟斤拷业牡锟斤拷
=======
#include<stdio.h>//P1422 С��ҵĵ��
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
int main()
    {
        float a;
        scanf("%f", &a);
        if(a <= 150){
            a *= 0.4463;
        }
        else if(a <= 400){
            a = (a - 150) * 0.4663 + 150 * 0.4463;
        }
        else{
            a = (a - 400) * 0.5663 + 150 * 0.4463 + 250 * 0.4663;
        }
        printf("%.1f", a);
        return 0;
    }
#endif
#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h>//P1424 小锟斤拷暮锟斤拷锟?(锟侥斤拷锟斤拷)
=======
#include<stdio.h>//P1424 С��ĺ���?(�Ľ���)
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
int main()
    {
        int a, b, n;
        scanf("%d %d", &a, &b);
        int i = 0;
        while(i < b){
            if(a != 6 && a != 7){
                n += 250;
            }
            if(a == 7){
                a = 1;
            }
            else{
                ++a;
            }
            ++i;
        }
        printf("%d", n);
        return 0;
    }
#endif
#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h> //P1888 锟斤拷锟角猴拷锟斤拷
=======
#include<stdio.h> //P1888 ���Ǻ���
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
#include<math.h>
int main()
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int t = 0;
        if(b < c){
            t = b; b = c; c = t;
            if(a < b){
                t = a; a = b; b = t;
            }
                if(b < c){
                    t = b; b = c; c = t;
                }
        }
        for(int i = 1; i < c + 1; ++i){
            if(a % i == 0 && c %i == 0){
                a = a / i;
                c = c / i;
            }
        }
        printf("%d/%d", c, a);
        return 0;
    }
#endif
#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h>//P1046 [NOIP2005 锟秸硷拷锟斤拷] 锟斤拷锟斤拷摘苹锟斤拷
=======
#include<stdio.h>//P1046 [NOIP2005 �ռ���] ����ժƻ��
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
int main()
    {
        int arr[10], h, n = 0;
        for(int i = 0; i < 10; ++i){
            scanf("%d", &arr[i]);
        }
        scanf("%d", &h);
        h += 30;
        for(int ii = 0; ii < 10; ++ii){
            if(h >= arr[ii]){
                ++n;
            }
        }
        printf("%d", n);
        return 0;
    }
#endif
#if 0
#include<stdio.h> //P4414 [COCI2006-2007#2] ABC
int main()
    {
        int a, b, c, t;
        scanf("%d %d %d", &a, &b, &c);
        if(a > b){
            t = a; a = b; b = t;
        }
        if(b > c){
            t = b; b = c; c = t;
        }
        if(a > b){
                t = b; b = a; a = t;
        }
        char arr[101];
        scanf("%s", arr);
        for(int m = 0; m < 3; ++m){
            switch (arr[m])
            {
            case 'A': printf("%d", a); printf(" "); break;
            case 'B': printf("%d", b); printf(" "); break;
            case 'C': printf("%d", c); printf(" "); break;
            }
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h>//the 3rd experiment part1 1
    int main()
    {
        float s;
        float i = 1;
        for(i = 1; ; 1 + i){
            s += 1 / i;
            ++i;
            if(s > 15){
                break;
            }
        }
        printf("%.0f %f", i, s);
        return 0;
    }
#endif
#if 0
#include<stdio.h> //the 3rd experiment part1 2 code copy
#include<math.h>
    int main()
    {
        double s = 0;
        int a;
        for(int i = 1;  ; ++i){
            switch (i % 2)
            {
            case 0: a = -1; break;
            default: a = 1; break;
            }
            double m = 1;
            for(int ii = 1; ii <= i; ++ii){
                m *= ii;
            }
            if(1 / m <= 1e-6) break;
            s = s + a / m;
        }
    printf("%lf", s);
    return 0;
    }
#endif
#if 0
#include<stdio.h>//the 3rd experiment part1 3 
    int pn(int a){
        for(int i = 2; i <= a / 2.0; ++i){
            if(0 == a % i){
				return 0;
			}
        }
        return 1;
    }
    int main()
    {
        int n = 0;
        for(int ii = 100; ii <= 200; ++ii){
            if(pn(ii) && pn(ii + 2)){
                printf("%d %d\n", ii, ii + 2);
            }
        }
    return 0;
    }
#endif
#if 0
#include<stdio.h>//the 3rd experiment part1 5
    int main()
    {
        float i = 0.0002;
        for(int n = 1 ; ; ++n){
            i *= 2;
            if(i > 8848){
                printf("%d", n);
                break;
            }
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h>//rhe 3rd experiment part1 7 wrong
int main()
    {
        int r;
        scanf("%d", &r);
        for(int i = 0; i < (r + 1) / 2; ++i){
            for(int ii = 0; ii < (r + 1) / 2 - i; ++ii){
                printf(" ");
            }
        if(0 == i){
            printf("*\n");
        }
        else{
            printf("*");
            for(int iii = 0; iii < (i - 1) * 2 - 1; ++iii){
                printf("+");
            }
            printf("*");
            printf("\n");
        }
        for(int I = 0; I < r / 2; ++I){
            for(int II = 0; II < I; ++II){
                printf(" ");
            }
            if(I == r / 2 - 1){
                printf("*\n");
            }
            else{
                printf("*");
                for(int III = 0; III < (r / 2 - I) * 2 - 1; ++III){
                    printf("+");
                }
                printf("*");
                printf("\n");
            }
        }
        }
        return 0;
    }
#endif
#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h>//the 3rd experiment part3 1 原题P5711 【深基3.例3】闰年判断
=======
#include<stdio.h>//the 3rd experiment part3 1 ԭ��P5711 �����3.��3�������ж�
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
int main()
    {
        int y, a = 0;
        scanf("%d", &y);
        if(y < 1582){
            return 0;
        }
        else{
            if((y % 4 == 0 && y %100 !=0) || (y % 400 == 0)){
                a = 1;
            }
        }
        printf("%d", a);
        return 0;
    }
#endif
#if 0
#include<stdio.h> //the 3rd experiment part3 2
int main()
    {
        int yr, mon, day, d;
        scanf("%d %d %d", &yr, &mon, &d);
        switch (mon)
        {
        case 1: day = 31; break;
        case 2:
            if((yr % 4 == 0 && yr % 100 != 0)||(yr % 400 == 0)){
                day = 29;
                }
            else{
                day = 28;
            }
            break;
        case 3: day = 31; break;
        case 4: day = 30; break;
        case 5: day = 31; break;
        case 6: day = 30; break;
        case 7: day = 31; break;
        case 8: day = 31; break;
        case 9: day = 30; break;
        case 10: day = 31; break;
        case 11: day = 30; break;
        case 12: day = 31; break;
        }
        if(d <= day && d > 0 && mon > 0 && mon < 13){
            printf("correct date");
        }
        else printf("wrong date");
        return 0;
    }
#endif
#if 0
#include<stdio.h>//the 3rd experiment part2 2
int main()
    {
        char a[] = {'A', 'B', 'C'};
        char b[] = {'X', 'Y', 'Z'};
        int i = 0;
        while (i < 3){
            for(int ii = 0; ii < 3; ++ii){
                if(! (a[i] == 'A' && b[ii] == 'X' || a[i] == 'C' && ('X' == b[ii] || 'Z' == b[ii]))){
                    printf("%c %c\n", a[i], b[ii]);
                }
            }
            ++i;
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h>//the 3rd experiment part2 2
int main()
    {
        int a, arr[7];
        for(a = 1; a < 16; ++a){
            int s = 0, t = a;
            arr[0] = a; 
            for(int b = 1; b < 7; ++b){
                t += b;
                s += t;
                arr[b] = t;
            }
            if(s == 105){
                for(int ii = 0; ii < 7; ++ii){
                    printf("%d ", arr[ii]);
                }
                break;
            }
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h> //move left
#include <stdlib.h>
int main()
    {
        int n, m, arr[1000], *p = NULL;
        scanf("%d %d", &n, &m);
        for(int i = 0; i < n; ++i){
            scanf("%d", &arr[i]);
        }
        for(int k = 0; k < m; ++k){
            p = &arr[0];
            int t = arr[0];
            for(int I = 0; I < n - 1; ++I){
                *(p + I) = *(p + I + 1);
                }
            arr[n - 1] = t;
        }
        int count = 0;
        for(int II = 0; II < n; ++II){
            printf("%d", arr[II]);
            ++count;
            if(count < n) printf(" ");
        }
        return 0;
        free(p);
        p = NULL;
    }
#endif
#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h> // 二维数组每列排序
=======
#include<stdio.h> // ��ά����ÿ������
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
#include <stdlib.h>
int main()
    {
        int arr[10][10];
        for(int r = 0; r < 4; ++r){ //enter data
            for(int c = 0; c < 5; ++c){
                scanf("%d", &arr[r][c]);
            }
        }
        /*
        for(int r = 0; r < 4; ++r){ // check entered data
            int count = 0;
            for(int c = 0; c < 5; ++c){
                printf("%d", arr[r][c]);
                ++count;
                if(count < 5) printf(" ");
            }
            printf("\n");
        }
        */
        
        for(int c = 0; c < 5; ++c){
            for(int r = 0; r < 4 - 1; ++r){
                for(int t = 0; t < 4 - 1 - r ; ++t){
                    int temp = 0;
                    if(arr[t][c] > arr[t + 1][c]){
                    temp = arr[t + 1][c]; 
                    arr[t + 1][c] = arr[t][c];
                    arr[t][c] = temp;
                    }
                }
            }
        }
        int count = 0;
        for(int r = 0; r < 4; ++r){
            
            for(int c = 0; c < 5; ++c){
                printf("%4d", arr[r][c]);
            }
            ++count;
            if(count < 4) printf("\n");
        }
        return 0;
    }
#endif
#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h> //字符串的连接
=======
#include<stdio.h> //�ַ���������
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
#include<stdlib.h>
#include<string.h>
int main()
    {
        char a[41];
        char b[41];
        gets(a); gets(b);
        printf("%s%s", a, b);
        return 0;
    }
#endif
#if 0
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=5,b=8,t;
    int *pa,*pb;
    pa=&a; pb=&b;
    printf("%ld,%ld\n",&a,&b);
    printf("%ld,%ld\n",pa,pb);
    t=*pa;  *pa=*pb;  *pb=t;
    printf("%d,%d\n",a,b);
    return 0;
    free(pa); free(pb);
    pa = NULL; pb = NULL;    
}
#endif
#if 0
<<<<<<< HEAD:Cvs/Cvs.c
#include<stdio.h>//指针与地址
=======
#include<stdio.h>//ָ�����ַ
>>>>>>> 61b79e9d3ccbb87b8517ca62223af464e34a3afa:Cvs/Cvs01.c
#include<stdlib.h>
int main()
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("a=%d,b=%d\n", a, b);
        int *p1 = NULL, *p2 = NULL;
        p1 = &a; p2 = &b;
        *p1 ^= *p2 ^= *p1 ^= *p2;
        printf("a=%d,b=%d", *p1, *p2);
        return 0;
        free(p1);free(p2);
        p1 = NULL; p2 = NULL;
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
#include<stdio.h> //Find the min number
int main()
    {
        int arr[100] = {}, n;
        scanf("%d", &n);
        for(int i = 0; i < n; ++i){
            scanf("%d", &arr[i]);
        }
        for(int i = 0; i < n - 1; ++i){
            for(int ii = 0; ii < n - 1 - i; ++ii){
                if(arr[ii] > arr[ii + 1]){
                    arr[ii] ^= arr[ii + 1] ^= arr[ii] ^= arr[ii + 1];
                }
            }
        }
        printf("%d", arr[0]);
        return 0;
    }
#endif
