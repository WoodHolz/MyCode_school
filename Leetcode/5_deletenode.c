/**
 * @brief 
 * 题目要求删除节点不能是尾节点
 * 因此该函数不能用于删除包括尾节点的情况
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/**
 * @brief 
 * 目标：杀掉A
 * 正常杀手需要找到A的把柄才可以杀掉A，
 * 可现在找到A本人后竟然没有可以获取A把柄的途径
 * A得知我们要杀他，心生一计，可助你完成任务
 * A说我有B的把柄，你杀了B，我改头换面，以B的身份活着
 * GC也会自动清理掉B的尸体，没人会知道的
 * @param node 
 */
void deleteNode(struct ListNode* node) {
    node -> val = node -> next -> val;
    node -> next = node -> next -> next;
    
}