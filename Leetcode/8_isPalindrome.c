//Definition for singly-linked list.
struct ListNode {
    int val;
   struct ListNode *next;
};


/**
 * @brief 
 * to the tail of the singly-linked list
 * @param head 
 * @return struct ListNode* 
 */
struct ListNode* toend(struct ListNode* head){
    struct ListNode* p = NULL;
    p = head;
    while(p -> next != NULL){
        p = p -> next;
    }
    return p;
} 

/**
 * @brief 
 *  reverse a single linked list 
 * @param head 
 * @return struct ListNode* 
 */
struct ListNode* reverse(struct ListNode* head){
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode* p = NULL,\
                * q = NULL;
    p = head -> next;
    q = head;
    head -> next = NULL;
    while(p){
        //q = p;
        //head = p;
        //head -> next = q;
        q = p;
        p = p -> next;
        q -> next = head -> next;
        head -> next = q;
    }
    return head;
}

// judge the list is palindrome or not
bool isPalindrome(struct ListNode* head){
    struct ListNode* tail = reverse(head), * h = head;
    //while((head -> next != tail -> next) || (tail -> next != head)){
    while(h != tail){
        if(h -> val != tail -> val){ // judge the val of the head node and tail node 
            return false;
        }
        h = h -> next; // head forward
        tail = tail -> next; // tail backward
    }
    return true;
}