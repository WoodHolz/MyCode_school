#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

/**
 *  @brief
 *  Welcome to manageuwork!
 *  This is a work MS(manage system).
 *  U can add your works which u plan to finish. And change the queue 
 *  of your work plan or just delete one of them. If u feel tried of 
 *  your jobs that you have to do, take a break and let me, the work MS,
 *  to help u record the work plan.
 *  And the last thing! Good morning, and in case I don't see you, 
 *  good afternoon, good evening, and good night!
 *  你好！ 欢迎使用 `manageuwork` 工作管理系统。
 *  你可以添加并管理你的工作计划， 改变待完成工作的队列或直接删除某项工作计划。
 *  如果你对一大堆未竟之志感到厌烦，请休息一下吧！并让我帮助你记录你的工作计划。
 *  最后，早上好，以防我见不着你，所以下午好，晚上好，晚安!
 *  
 *  特殊声明:  
 *          <1> 因为字体编码的问题，该程序界面、注释多使用英文。
 *          <2> 测试运行环境为Win11 22h2 windows terminal gdb
 *              在Vscode terminal运行下因为字体编码的冲突中文字符显示有误
 *              Environment: Win11 22h2 windows terminal gdb
 *              If u run this program in Vscode terminal, it cannot 
 *              display the Chinese word.
 *  
 *      
 *  使用到的数据结构知识点：队列、链表指针
 *  预期的功能
 * [x] 基础创建
 * [x] 队列出列
 * [x] 修改功能
 * [x] 文件读写
 * [ ] 番茄钟
 * [ ] 时间
 * [ ] 多任务条? 可能
 * [ ] 图形化界面GUI 可能 素材没找
 */

// the first page menu of feature
void menu()
    {
        printf("********Welcome!***********\n"
                " <1> create your plan\n"
                " <2> change your queue\n"
                " <3> show all the works\n"
                " <4> start your work\n"
                " <8> clear the screen\n"
                " <9> exit\n"
                "enter the num to choose\n"
                "***************************\n");
    }

void page_1()
    {
        printf("*************************\n"
                " <1> add the work \n"
                " <2> show all the works\n"
                " <3> back\n"
                "enter the num to choose\n"
                "*************************\n");
    }

void page_2()
    {
        printf("\nEnter your work:");
    }

void page_3()
    {
        printf("*******************************\n"
                " <1> change the work's name\n"
                //" <2> delete the work(node)\n"
                " <3> back\n"
                "enter the num to choose\n"
                "*******************************\n");
    }

void page_3_1()
    {
        printf("Enter the work u want to change:");
    }

void page_3_1_1()
    {
        printf("\nFind it!Enter the work name u want:");
    }

void page_4()
    {
        printf(" <1> finish your work? press '1' to continue\n"
                "<2> press '2' back to the menu\n");
    }

typedef struct node
    {
        char plan_name[100];
        //int str_time;
        //int last_time;
        struct node *next;
    }msnode, *msptr;

typedef struct queue
    {
        msptr front;
        msptr rear;
    }Lqueue, *Lptr;

// Define a pointer to the queue
Lptr q;


Lptr Init_LQueue()
    {
        Lptr q = NULL;
        msptr p = NULL;
        // request the pointer which point to the front and the rear of the queue
        q = (Lptr)malloc(sizeof(Lqueue));
        // request the frist node of the queue
        p = (msptr)malloc(sizeof(msnode));
        p->next = NULL;
        q->front = p;
        q->rear = p;
        return q;
    }

void InLqueue(Lptr q, char name[100])
    {
        msptr p = NULL;
        // request the node and enter the data
        p = (msptr)malloc(sizeof(msnode));
        strcpy(p->plan_name, name);
        //printf("in:%s\n", name);
        //printf("queuegets:%s\n", p->plan_name);
        //p->str_time = str_time;
        //p->last_time = last_time;
        p->next = NULL;

        // link the queue by the tail
        q->rear->next = p;
        q->rear = p;

    }

int Empty_Lqueue(Lptr q)
    {
        /**
         *  If the queue is empty, then the position that front and rear pointed 
         *  should be the same. In this case, the program shall return the value
         *  '0' to ensure the false. Unless we'll continue the program. 
         *  
         */
        if(q->front == q->rear) return FALSE;
        else return TRUE;
    }

int Out_Lqueue(Lptr q, msptr x)
    {
        msptr p = NULL;
        if (Empty_Lqueue(q)){
            p = q->front->next;
            q->front->next = p->next;
            x = p;
            free(p);
            if(q->front->next == NULL){
                q->rear = q->front;
            }
            return TRUE;
        }
        else{
            printf("Oops, it's empty!\n");
            return FALSE;
        }
    }

/**
 * 
 * 
 * @param q 
 * @param node_name 
 * @return msptr 
 */
msptr find_node(Lptr q, char node_name[100])
    {
        //printf("find_node:%s\n", node_name);
        msptr ptr = NULL;
        ptr = q->front->next;
        while (ptr != NULL){
            if(strcmp(ptr->plan_name, node_name) == 0){
                printf("find_node:%s\n", ptr->plan_name);
                break;
            }
            else ptr = ptr->next;
        }
        return ptr;
    }

msptr get_prenode(Lptr q, msptr p)
    {
        msptr ptr = NULL;
        ptr = q->front->next;
        while (ptr != p){
            ptr = ptr->next;
        }
        if(ptr == NULL) printf("Oops not found\n");
        return ptr;
    }

void delete_node(Lptr q)
    {
        msptr p = NULL, pre = NULL;
        char name[100] = {0};
        printf("Enter the name of work:"); 
        getchar(); //to eat the enter
        gets(name);
        p = find_node(q, name);
        if(p->plan_name == NULL) printf("Oops no match\n");
        else pre = get_prenode(q, p);
            // u need to explain here
            pre->next = p->next;
            free(p);
    }

void show_Lqueue(Lptr q)
    {
        msptr ptr = NULL;
        ptr = q->front->next;
        int i = 1;
        while(ptr != NULL){
            printf("%d:%s\n",i++, ptr->plan_name);
            ptr = ptr->next;
        }
    }

Lptr read(Lptr q)
    {
        FILE *fp = NULL;
        fp = fopen(".\\ms.txt", "r");
        /*
        if (fp == NULL){
            return FALSE;
        }
        */
        
        while(1){
            if(EOF != fgetc(fp)){
                //msptr tar = NULL;
                //tar = (msptr)malloc(sizeof(msnode));
                char name[100];
                //fgets(name, 100, fp);
                fscanf(fp, "%s", name);
                InLqueue(q, name);
            }
            else break;
        }
        
    }

void save_Lqueue(Lptr q)
    {
        FILE * fp = NULL;
        fp = fopen(".\\ms.txt", "w");
        msptr tar = NULL;
        tar = q->front->next;
        while(tar != NULL){
            fprintf(fp, " %s", tar->plan_name);
            if(tar->next != NULL){
            fprintf(fp, "\n");
            }
            tar = tar->next;
        }
        fclose(fp);
    }

void clr()
    {
        system("CLS");
        menu();
    }

int main()
    {

        
        menu();
        q = Init_LQueue();
        read(q);
        int num;
        while(1){
            //printf("\nEnter the number to start:");
            scanf("%d", &num);
            if(num == 1){
                while(1){
                    page_1();
                    int choose;
                    scanf("%d", &choose);
                    if(choose == 1){
                        page_2();
                        char name[100];
                        getchar();
                        gets(name);
                        //getchar();
                        printf("gets:%s\n", name);
                        InLqueue(q, name);
                        show_Lqueue(q);
                        save_Lqueue(q);
                        printf("\ndone! continue? press '1'\n");
                        
                    }
                    else if(choose == 2){
                        show_Lqueue(q);
                    } 
                    else{
                        menu();
                        break;
                        
                    }
                }
            }
            else if(num == 2){
                while(1){
                    page_3();
                    int p_3;
                    scanf("%d", &p_3);
                    if(p_3 == 1){
                        page_3_1();
                        char name[100] = {0}, n[100] = {0};
                        getchar();
                        gets(name);
                        //printf("\n%s\n", name);
                        msptr ptr = NULL;
                        ptr = find_node(q, name);
                        printf("\n******\n%s\n*******\n", ptr->plan_name);
                        if(ptr->plan_name == NULL){
                            printf("Oops, not found.\n");
                            menu();
                            break;
                        }
                        else{
                            page_3_1_1();
                            //getchar();
                            gets(n);
                            printf("test:%s\n", n);
                            strcpy(ptr->plan_name, n);
                            //test
                            printf("\n******\n%s\n*******\n", ptr->plan_name);
                            save_Lqueue(q);
                        }
                    }
                    /*
                    else if(p_3 == 2){
                        delete_node(q);
                        //show_Lqueue(q);
                        save_Lqueue(q);
                    }
                    */
                    else{
                        menu();
                        break;
                    }
                }

            }
            else if(num == 3) show_Lqueue(q);
            else if(num ==4){
                while(1){
                    printf("**this is your plan**\n");
                    show_Lqueue(q);
                    page_4();
                    int p_4;
                    scanf("%d", &p_4);
                    if(1 == p_4){
                        Out_Lqueue(q, q->front->next);
                        save_Lqueue(q);
                    }
                    else{
                        menu();
                        break;
                    }
                }
            }
            else if(num == 8) clr();
            else{
                save_Lqueue(q);
                //printf("\n**ndone! Bye!**\n");
                break;
            }
        }


        return 0;

    }
