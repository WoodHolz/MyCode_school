/*
#include<stdio.h>
    int main()
    {
        printf("你好！ Cvs03");
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
#include<stdio.h> //P5737 【深基7.例3】闰年展示
void runnian()
    {
        int a, b, n = 0, re[1000] = {0};
        scanf("%d %d", &a, &b);
        for(int i = a; i < b + 1; ++i){
            if(((!(i % 4)) && (i % 100)) || (! (i % 400))){
                re[n++] = i;
            }
        }
        printf("%d\n", n);
        int c = 0;
        for(int i = 0; i < n; ++i){
            printf("%d", re[i]); c++;
            if(c < n){
                printf(" ");
            }
        }
    }
int main()
    {
        runnian();
        return 0;
    }
#endif



#if 0
#include<stdio.h> // P5739 【深基7.例7】计算阶乘
int jiecheng(int x)
    {
        if(x > 1){
            return x * jiecheng(x - 1);
        }
        else return 1;
    }
int main()
    {
        int a; 
        scanf("%d", &a);
        printf("%d", jiecheng(a));
        return 0;
    }
#endif


#if 0
#include<stdio.h> //experiment 6 part 1-1
#include<string.h>
struct yrname
{
    char name[20];
    int count;
};
hs(struct yrname leader[], int m)
{
    char name[20];
    for(int i = 0; i < m; ++i){
        printf("\n请输入要投票的候选人:");
        gets(name);
        for(int ii = 0; ii < 3; ++ii){
            if(! (strcmp(name, leader[ii].name))){
                leader[ii].count++;
                break;
            }
        }
    }
}
main()
    {
        struct yrname leader[3] = {"Li", 0, "Wu", 0, "Fu", 0};
        int m;
        printf("请输入投票人数:");
        scanf("%d", &m);
        getchar();
        hs(leader, m);
        for(int i = 0; i < 3 - 1; ++i){
            for(int ii = i + 1; ii < 3; ++ii){
                if(leader[i].count < leader[ii].count){
                    leader[i].count ^= leader[ii].count ^= leader[i].count ^= leader[ii].count;
                }
            }
        }
        for(int i = 0; i < 3; ++i){
            printf("%s %d\n", leader[i].name, leader[i].count);
        }
        return 0;
    }
#endif
#if 0
#include<stdio.h> //experiment 6 part 1-2
#include<string.h>
struct bull
{
    char color[20];
}bull[5] = {"red", "yellow", "white", "blue", "black"};

main()
    {
        int a = 0;
        for(int i = 0; i < 5; ++i){
            for(int ii = 0; ii < 5; ++ii){
                for(int iii = 0; iii < 5; ++iii){
                    if(i != ii && i != iii && ii != iii){
                        printf("%s %s %s\n", bull[i].color, bull[ii].color, bull[iii].color);
                        a++;
                    }
                }
            }
        }
        printf("综上，共有%d种取法。", a);
        return 0;
    }
#endif
#if 0
#include<stdio.h> //experiment 6 part 2
#include<windows.h>
#include<conio.h>
struct time
{
    int hr;
    int min;
    int sec;
};
void dis(struct time cl)
{
    printf("\r还有%02d时%02d分%02d秒", cl.hr, cl.min, cl.sec);
}
struct time run(struct time cl)
{
    cl.sec--;
    if(cl.sec == 0 && cl.min != 0){
        cl.sec = 59;
        cl.min--;
    }
    if(cl.min == 0 && cl.hr != 0){
        cl.min = 59;
        cl.hr--;
    }

    Sleep(1000);
    return cl;
};

main()
    {
        struct time cl;
        printf("\n请输入设置倒计时的小时数:");
        scanf("%d", &cl.hr);
        printf("\n请输入设置倒计时的分钟数:");
        scanf("%d", &cl.min);
        printf("\n请输入设置倒计时的秒数:");
        scanf("%d", &cl.sec);
        printf("\n***按's'键开始倒计时***");
        printf("\n***按'e'键停止倒计时***\n");
        char str = getch();
        while(1){
            if(str == 's' || str == 'S'){
                cl = run(cl);
                dis(cl);
                if(cl.hr == 0 && cl.min == 0 && cl.sec == 0) break;
                if(kbhit()){
                    str = getch();
                    if(str == 'e' || str == 'E') break;
                }
            }
            else if(str == 'e' || str == 'E') break;
            
            else str = getch();
        }
        
        return 0;
    }
#endif

#if 0
#include<stdio.h> //experiment 6 part 3
#include<string.h>
struct student
{
    int num;
    char name[20];
    int grade[3];
    float avr;
};

search(struct student stu[], int n)
{
    printf("\n是否需要查询学生信息？(回答'1'or'0')\n");
    int a;
    scanf("%d", &a);
    if(a == 0){return;}
    else if(a == 1){
        printf("输入学号查询:");
        int no;
        scanf("%d", &no);
        
        for(int i = 0; i < n; ++i){
            if(stu[i].num == no){
                printf("\n学号:%d", stu[i].num);
                printf("\n姓名:%s", stu[i].name);
                for(int ii = 0; ii < 3; ++ii){
                    printf("\n第%d门成绩:%d", ii + 1, stu[i].grade[ii]);
                }
                printf("\n平均分: %.1f", stu[i].avr);
            }
        }
    }
    
}

main()
    {
        struct student stu[50];
        //input
        printf("请输入学生数量:");
        int n;
        scanf("%d", &n);
        getchar();
        for(int i = 0; i < n; ++i){
            printf("\n请输入学号:");
            scanf("%d", &stu[i].num);
            //getchar();
            printf("\n请输入姓名:");
            scanf("%s", stu[i].name);
            //getchar();
            //flushall();
            
            int t = 0;
            for(int ii = 0; ii < 3; ++ii){
                printf("\n请输入第%d门成绩:", ii + 1);
                scanf("%d", &stu[i].grade[ii]);
                t += stu[i].grade[ii];
            }
            stu[i].avr = t / 3.0;
        }
        //sort
        struct student temp;
        for(int i = 0; i < n - 1; ++i){
            for(int ii = i + 1; ii < n; ++ii){
                if(stu[i].avr < stu[ii].avr){
                    temp = stu[i];
                    stu[i] = stu[ii];
                    stu[ii] = temp;
                }
            }
        }
        printf("\n排名:\n");
        for(int i = 0; i < n; ++i){
            printf("\n学号%d", stu[i].num);
            printf("\n姓名%s", stu[i].name);
            for(int ii = 0; ii < 3; ++ii){
                printf("\n第%d门成绩:%d", ii + 1, stu[i].grade[ii]);
            }
            printf("\n平均分:%.1f\n", stu[i].avr);
        }
        //search
        search(stu, n);
        return 0;
    }
#endif

#if 0
#include<stdio.h> //Luogu P1428 小鱼比可爱
void cute()
{
    int n;
    scanf("%d", &n);
    int a[100] = {0};
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
    }
    printf("0 ");// the first except
    for(int i = 1; i < n; ++i){
        int t = 0;
        for(int I = 0; I < i; ++I){
            if(a[I] < a[i]){
                t++;
            }
        }
        printf("%d ", t);
    }
}
int main()
    {
        cute();
        return 0;
    }
#endif

#if 0
//未完成 请继续完成递归
#include<stdio.h> //Luogu P5461 赦免战俘
#include<math.h>
int excuse()
{
    int n; 
    scanf("%d", &n);
    int r = pow(2, n), c = r;
    int a[100][100] = {0};
    
    while(1){
        if(n - 1){
            int r1 = pow(2, n - 1);
            int c1 = r1;
            //upleft
            for(int i = 0; i < r1; ++i){
                for(int j = 0; j < c1; ++j){
                    a[i][j] = 1;
                }
            }
            //upright 
            for(int );
        }
        else break;
    }
/*
    a[0][n + 1] = 1;
    for(int i = 1; i < r; ++i){
        for(int j = 1; j < c; ++j){
            a[i][j] = a[i - 1][j] ^ a[i - 1][j + 1];
        }
    }
*/
    for(int i = 0; i < r; ++i){
        int bl = 0;
        for(int j = 0; j < c; ++j){
            a[i][j] == 1 ? printf("0") : printf("1"); bl++;
            if(bl < c) printf(" ");
            if(j == c - 1) printf("\n");
        }
    }
}
int main()
    {
        //int n;
        //scanf("%d", &n);
        excuse();
        return 0;
    }
#endif

#if 0
#include<stdio.h> //Luogu P5743 【深基7.习8】猴子吃桃
void peech()
{
    int n;
    scanf("%d", &n);
    int sum = 1;
    for(int i = 1; i < n; ++i){
        sum = (sum + 1) * 2;
    }
    printf("%d", sum);
}
int main()
    {
        peech();
        return 0;
    }
#endif

#if 0
#include<stdio.h> //Luogu P5733 【深基6.例1】自动修正
int main()
    {
        char a[100];
        int n = 0;
        char in = getchar();
        while(in != '\n'){
            a[n++] = in;
            in = getchar();
        }
        for(int i = 0; i < n; ++i){
            if(a[i] >= 'a' && a[i] <= 'z'){
                a[i] -= 32;
            }
        }
        printf("%s", a);
        return 0;
    }
#endif

#if 0
#include<stdio.h> //PTA 7-1 锟缴硷拷锟斤拷锟斤拷
struct stu
{
    int num; //学锟斤拷
    float grade; //锟缴硷拷
};
void sort(struct stu *ps, int n)
{
    struct stu t;
    for(int i = 0; i < n - 1; ++i){ //冒锟斤拷  什么时锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟脚帮拷锟斤拷锟斤拷锟斤拷锟斤拷笑
        for(int ii = i; ii < n; ++ii){
            if(ps[i].grade < ps[ii].grade){
                t = ps[i]; ps[i] = ps[ii]; ps[ii] = t;
            }
        }
    }
    //output
    
    int rank = 0; //锟斤拷锟斤拷锟斤拷锟叫的凤拷锟斤拷一
    for(int i = 0; i < n; ++i){ 
        if(ps[i].grade != ps[i - 1].grade){
            rank = i;
            printf("%d %d %.2f\n", rank + 1, ps[i].num, ps[i].grade);
        }
        else printf("%d %d %.2f\n", rank + 1, ps[i].num, ps[i].grade);
    }
    
    /*
    for(int i = 0; i < n; ++i){ //锟斤拷锟斤拷锟斤拷锟叫的凤拷锟斤拷锟斤拷 wrong
        int t = 0;
        if(ps[i].grade == ps[i - 1].grade){
            t++;
        }
        printf("%d %d %.2f\n", i - t + 1, ps[i].num, ps[i].grade);
    }
    */
}

main()
    {
        struct stu ps[100];
        int n; //学锟斤拷锟斤拷锟斤拷
        scanf("%d", &n);
        for(int i = 0; i < n; ++i){
            scanf("%d", &ps[i].num);
            scanf("%f", &ps[i].grade);
        }
        sort(&ps, n);
        return 0;
    }
#endif

#if 0
#include<stdio.h> //PTA 7-3 锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷应锟斤拷
struct employee
{
    int num;
    char name[50];
    char sort;
    char part[50];
};
void input(struct employee school[], int n)
{
    for(int i = 0; i < n; ++i){
        scanf("%d %s %c", &school[i].num, school[i].name, &school[i].sort);
        gets(school[i].part);
        //gets(school[i].num);
        //getchar();
        //gets(school[i].name);
        //getchar();
        //scanf("%c", &school[i].sort);
        //gets(school[i].part);
        //getchar();
    }
}
void sort(struct employee school[], int n)
{
    int a = 0, b = 0;
    for(int i = 0; i < n; ++i){
        if(school[i].sort == 't'){
            a++;
        }
        else if(school[i].sort == 'w'){
            b++;
        }
    }
    printf("tcount = %d, wcount = %d", a, b);
}
main()
    {
        struct employee school[50];
        int n;
        scanf("%d", &n);
        input(school, n);
        //output
        for(int i = 0; i < n; ++i){
            printf("%d ", school[i].num);
            printf("%s ", school[i].name);
            printf("%c", school[i].sort);
            printf("%s\n", school[i].part);
        }
        sort(school, n);
        return 0;
    }
#endif

#if 0
#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node, *List;

void calculate(List L, int *max, int *min, double *average);
void destroy(List L);

int main()
{
    int t, max, min;
    double average;
    List A = (List)malloc(sizeof(Node));
    A->data = 0;
    A->next = NULL;
    Node *p = A;
    printf("请输入一批正整数：\n");
    do
    {
        scanf("%d", &t);
        Node *T = (Node *)malloc(sizeof(Node));
        T->data = t;
        T->next = NULL;
        p->next = T;
        p = p->next;
        A->data++;
    } while (getchar() != '\n');
    calculate(A, &max, &min, &average);
    printf("最大值为:%d,最小值为:%d,平均值为:%.3lf.\n", max, min, average);
    destroy(A);
    return 0;
}

void calculate(List L, int *max, int *min, double *average)
{
    *max = *min = L->next->data;
    *average = 0;
    double sum = 0;
    Node *T = L;
    for (int i = 0; i < L->data; i++)
    {
        T = T->next;
        sum += T->data;
        if (*max < T->data)
            *max = T->data;
        if (*min > T->data)
            *min = T->data;
    }
    *average = sum / L->data;
}
void destroy(List L)
{
    Node *T = L;
    Node *p;
    while (T)
    {
        p = T->next;
        free(T);
        T = p;
    }
}
#endif

#if 0
#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node, *List;

void turn(List L);
void destroy(List L);

int main()
{
    int t;
    List A = (List)malloc(sizeof(Node));
    A->data = 0;
    A->next = NULL;
    Node *p = A;
    printf("请输入一个由整数组成的链表：\n");
    do
    {
        scanf("%d", &t);
        Node *T = (Node *)malloc(sizeof(Node));
        T->data = t;
        T->next = NULL;
        p->next = T;
        p = p->next;
        A->data++;
    } while (getchar() != '\n');
    turn(A);
    Node *T = A;
    printf("逆置后的链表为：\n");
    for (int i = 0; i < A->data; i++)
    {
        T = T->next;
        printf("%d", T->data);
        if (i != A->data - 1)
            printf(" ");
        else
            printf("\n");
    }
    destroy(A);
    return 0;
}

void turn(List L)
{
    Node *address[L->data];
    Node *T = L;
    for (int i = 0; i < L->data; i++)
    {
        T = T->next;
        address[i] = T;
    }
    for (int i = 0; i < L->data; i++)
    {
        if (i == 0)
            address[i]->next = NULL;
        else
            address[i]->next = address[i - 1];
    }
    L->next = address[L->data-1];
}
void destroy(List L)
{
    Node *p = L;
    Node *T;
    while (p)
    {
        T = p->next;
        free(p);
        p = T;
    }
}
#endif

#if 0
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <malloc.h>

typedef struct Node
{
    char name[50];
    int id;
    int Chinese;
    int Math;
    int English;
    struct Node *next;
} Node, *List;

int MAX_NUM = 100;

//链表初始化函数
List List_init();

//节点插入函数
void Node_insert(List L);

//学生信息排序函数
void List_sort(List L);

//学生信息查询函数
void List_output(List L);

//计算平均值函数
void average(List L);

//单链表删除函数
void destroy(List L);
int main(void)
{
    int flag = -1;
    List A = List_init();
    printf("提示：目前系统中还没有学生信息.\n\n");
    while (1)
    {
        printf("请选择您想进行的操作:\n1.学生成绩录入    2.学生成绩排序\n"
                "3.学生成绩查询    4.计算平均值\n"
                "5.退出程序\n输入操作前的序号即可:");
        scanf("%d", &flag);
        printf("\n");
        if (flag == 1)
            Node_insert(A);
        else if (flag == 2)
            List_sort(A);
        else if (flag == 3)
            List_output(A);
        else if (flag == 4)
            average(A);
        else if (flag == 5)
        {
            printf("再见.\n");
            break;
        }
        else
        {
            printf("输入有误,请输入序号1、2、3、4、5\n");
            continue;
        }
    }
    destroy(A);
    return 0;
}

//链表初始化函数
List List_init()
{
    List L = (List)malloc(sizeof(Node));
    L->id = 0;
    L->next = NULL;
    return L;
}

//节点插入函数
void Node_insert(List L)
{
    printf("希望录入的学生信息数量为：\n");
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        Node *T = (Node *)malloc(sizeof(Node));

        Node *p = L;
        while (p->next)
            p = p->next;

        printf("请输入第%d学生的信息:\n", i + 1);
        printf("学号:");
        while (!scanf("%d", &T->id) || T->id > 100000000 || T->id < 1)
        {
            printf("学号范围是1-100000000,请重新输入.");
            printf("学号:");
            continue;
        }
        printf("姓名:");
        while (!scanf("%s", T->name))
            continue;
        printf("语文:");
        while (!scanf("%d", &T->Chinese) || T->Chinese > 100 || T->Chinese < 0)
        {
            printf("课程分数范围是0-100,请重新输入成绩.\n");
            printf("语文:");
            continue;
        }
        printf("数学:");
        while (!scanf("%d", &T->Math) || T->Math > 100 || T->Math < 0)
        {
            printf("课程分数范围是0-100,请重新输入成绩.\n");
            printf("数学:");
            continue;
        }
        printf("英语:");
        while (!scanf("%d", &T->English) || T->English > 100 || T->English < 0)
        {
            printf("课程分数范围是0-100,请重新输入成绩.\n");
            printf("英语:");
            continue;
        }
        printf("\n");
        p->next = T;
        T->next = NULL;
        p = T;
    }
    L->id += n;
}

//学生信息排序函数
void List_sort(List L)
{
    Node *a, *b, temp;
    if (L->next == NULL)
    {
        printf("当前没用学生信息,请先输入一些学生信息.\n\n");
        return;
    }
    if (L->next->next == NULL)
    {
        printf("当前只有一个学生信息,无需排序.\n\n");
        return;
    }
    a = L->next;
    while (a->next)
    {
        b = a->next;
        while (b)
        {
            if ((a->Chinese + a->Math + a->English) < (b->Chinese + b->Math + b->English))
            {
                temp = *a;
                *a = *b;
                *b = temp;
                temp.next = a->next;
                a->next = b->next;
                b->next = temp.next;
            }
            b = b->next;
        }
        a = a->next;
    }
    printf("已按照三门课程的平均成绩对学生进行排序\n\n");
}

//学生信息查询函数
void List_output(List L)
{
    printf("已录入的学生信息如下:\n\n");
    Node *p = L;
    int i = 1;
    while (p->next)
    {
        p = p->next;
        printf("第%i名学生:\n", i);
        printf("学号：%d\n", p->id);
        printf("姓名：%s\n", p->name);
        printf("语文：%d\n", p->Chinese);
        printf("数学：%d\n", p->Math);
        printf("英语：%d\n\n", p->English);
        i++;
    }
    printf("已录入的学生信息展示完毕\n\n");
}

//计算平均值函数
void average(List L)
{
    int sum[3] = {0, 0, 0};
    Node *p = L;
    while (p->next)
    {
        p = p->next;
        sum[0] += p->Chinese;
        sum[1] += p->Math;
        sum[2] += p->English;
    }
    printf("已录入学生的语文平均成绩为:%.3lf\n", (double)sum[0] / L->id);
    printf("已录入学生的数学平均成绩为:%.3lf\n", (double)sum[1] / L->id);
    printf("已录入学生的英语平均成绩为:%.3lf\n\n", (double)sum[2] / L->id);
    printf("(以上平均成绩均保留三位有效数字)\n\n");
}
void destroy(List L)
{
    Node *p = L;
    Node *T;
    while (p)
    {
        T = p->next;
        free(p);
        p = T;
    }
}
#endif

#if 0
#include<stdio.h>
#include <stdio.h>
#include <malloc.h>
typedef struct LinkNode
{
    int data;
    struct LinkNode *next;
} LinkNode, *LinkList;

int getLen(LinkList H);
LinkList creat_List();
void output(LinkList H);
LinkList combine_list(LinkList A, LinkList B);
void destroy(LinkList list);

int main()
{   int m,n;        
    LinkList A, B, C;
    A = creat_List();
    B = creat_List();
    m=getLen(A);
    n=getLen(B);
    if(n>=m){
        C = combine_list(A, B);
    }else{
        C = combine_list(B, A);
    }
    
    output(C);
    destroy(C);
    return 0;
}
int getLen(LinkList H)
{
    LinkList pr = H->next;
	int count = 0;
	
	while(pr != NULL)
	{
		pr = pr->next;
		count++; 
	}

	return count;
}
void output(LinkList H)
{
    if (H->next)
    {
        LinkList p;
        p = H->next;
        while (p)
        {
            printf("%d", p->data);
            if (p->next != NULL)
                printf(" ");
            p = p->next;
        }
        printf("\n");
    }
    else
        printf("NULL");
}
LinkList creat_List()
{
    //尾插法
    LinkList H, q;
    int x;
    H = (LinkNode *)malloc(sizeof(LinkNode));
    H->next = NULL;
    q = H;
    do
    {   
        scanf("%d", &x);
        LinkList p;
        p = (LinkNode *)malloc(sizeof(LinkNode));
        p->next = NULL;
        p->data = x;

        q->next = p;
        q = p;
    }while(getchar()!='\n');
    return H;
}

LinkList combine_list(LinkList A, LinkList B)
{   
    LinkList C;
    LinkList pa, pb, qa, qb;
    pa = A->next;  
    pb = B->next;
    C = A;        
    while(pa && pb)
    {
        qa = pa;
        qb = pb;
        pa = pa->next;
        pb = pb->next;
        qb->next = qa->next;
        qa->next = qb;
    }
    if(!pa)  // 如果 A 链表的长度小于 B 链表的长度
        qb->next = pb; // 将 B 的后续节点连接到新链表的尾端
    pb = B;  // 准备删除 B 链表
    free(pb);

    return C;
}

void destroy(LinkList list)
{
    LinkNode *cur ,*ret;
    ret = list;
    while (ret)
    {
        cur = ret->next;
        free(ret);
        ret = cur;
    }
}
#endif



#if 0
#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} Node, *List;

List creat_List();
void output(List H);
List combine_list(List A, List B);
void destroy(List list);

int main()
{
    List A, B, C;
    printf("请输入一个非递增有序数列：\n");
    A = creat_List();
    printf("请输入一个非递减有序数列：\n");
    B = creat_List();

    C = combine_list(A, B);
    printf("归并后的非递减有序数列为：\n");
    output(C);
    destroy(C);
    return 0;
}

void output(List L)
{
    Node *p;
    p = L;
    if (L->next != L)
    {
        while (p->next != L)
        {
            p = p->next;
            printf("%d", p->data);
            if (p->next != NULL)
                printf(" ");
        }
        printf("\n");
    }
    else
        printf("这是一个空链表\n");
}
List creat_List()
{
    //尾插法
    List L;
    Node *q;
    L = (Node *)malloc(sizeof(Node));
    L->prev = L;
    L->next = L;

    int x;
    q = L;
    do
    {
        scanf("%d", &x);
        Node *T;
        T = (Node *)malloc(sizeof(Node));
        T->prev = NULL;
        T->next = NULL;
        T->data = x;

        q->next = T;
        T->prev = q;
        T->next = L;
        L->prev = T;
        q = T;
        L->data++;
    } while (getchar() != '\n');
    return L;
}

List combine_list(List A, List B)
{
    List C = (List)malloc(sizeof(Node));
    C->data = 0;
    C->prev = C;
    C->next = C;

    Node *pa, *pb, *qa, *qb, *pc = C;
    pa = A->prev;
    pb = B->next;
    while (pa != A || pb != B)
    {
        if (pa != A && pa->data <= pb->data)
        {
            qa = pa;
            pa = pa->prev;
            pc->next = qa;
            C->prev = qa;
            qa->prev = pc;
            qa->next = C;
            pc = pc->next;
            C->data++;
        }
        else
        {
            qb = pb;
            pb = pb->next;
            pc->next = qb;
            C->prev = qb;
            qb->prev = pc;
            qb->next = C;
            pc = pc->next;
            C->data++;
        }
    }

    free(A);
    free(B);
    return C;
}

void destroy(List L)
{
    Node *p = L;
    Node *T;
    while (p != L)
    {
        T = p->next;
        free(p);
        p = NULL;
        p = T;
    }
}
#endif


#if 1
#include<stdio.h>
#include<stdlib.h>
//综合题

//如果不分配内存会怎样

#define LEN sizeof(struct friend)
struct friend{
    int num;
    struct friend *next;
};
//7
struct friend *head,*tail;

void create(int n)
{   
    int i;
    struct friend *p,*q;
    p=(struct friend*)malloc(LEN);
    p->num=1;
    p->next=NULL;
    head=p;
    q=p;
    


    for(i=2;i<=n;i++){
        p=(struct friend*)malloc(LEN);
        p->num=i;
        q->next=p;
        q=p;//q结点指向链表尾部结点
        p->next=NULL;
    }
    //这里用p可以吗
    tail=q;
    tail->next=head;
}

void delete(int m){
    int flag=0;
    struct friend *q,*p;
    q=tail;
    do{
        p=q->next;
        flag++;
        if(flag%m==0){
            printf("%d号小盆友退出了\n",q->next->num);
            q->next=p->next;
            free(p);
        }else{
            q=p;
        }
    }while(q!=q->next);
    head=q;
    
    printf("%d号小盆友退出了\n",head->num);
    free(head);
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    create(n);
    delete(m);
    return 0;
}
#endif