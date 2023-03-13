/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode * ptrlist;
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    ptrlist new = NULL, head;
    new = (ptrlist)malloc(sizeof(struct ListNode));
    /**
    */
    head = new;
    while(list1 && list2){
        if(list1 -> val <= list2 -> val){
            new -> next = list1;
            list1 = list1 -> next;
        }
        else{
            new -> next = list2;
            list2 = list2 -> next;  
        }
        new = new -> next;
    }
    if(list1 != NULL) new -> next = list1;
    else new -> next = list2;
    return head -> next;
}