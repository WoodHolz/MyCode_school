/**
 * @brief 
 * 删除倒数第几个节点
 * 
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode * ptr;
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int len = 0;
    ptr temp = head, last = NULL, node = NULL, pre = NULL;
    while(temp){
        ++len;
        if(len == n){
            node = head;
        }
        if(len > n){
            pre = node;
            node = node -> next;
        }
        last = temp;
        temp = temp -> next;
    }
    if(head == node){
        return head -> next;
    }
    pre -> next = node -> next;
    return head;
}