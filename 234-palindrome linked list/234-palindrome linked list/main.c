//
//  main.c
//  234-palindrome linked list
//
//  Created by 西河 on 2018/12/4.
//  Copyright © 2018 xihe. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


typedef int bool;
#define false -1
#define true 1

struct ListNode {
    int val;
    struct ListNode *next;
};

bool isPalindrome(struct ListNode* head) {
    
    if (head == NULL || head->next == NULL) {
        return true;
    }
    
    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while ((fast->next != NULL) &&(fast->next->next != NULL) ) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    struct ListNode *last = slow->next;
    struct ListNode *pre = head;
    while (last->next != NULL) {
        struct ListNode *temp = last->next;
        last->next = temp->next;
        temp->next = slow->next;
        slow->next = temp;
    }
    while (slow->next != NULL) {
        slow = slow->next;
        if (pre->val != slow->val)
            return false;
        pre = pre->next;
    }
    
    return true;

}

int main(int argc, const char * argv[]) {
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    head->val = 1;
//    head->next = NULL;
    struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
    p->val = 0;
    head->next = p;
//    head->next->next = NULL;

    struct ListNode *p1 = (struct ListNode *)malloc(sizeof(struct ListNode));
    p1->val = 0;
    head->next->next = p1;
//    head->next->next->next = NULL;

    struct ListNode *p2 = (struct ListNode *)malloc(sizeof(struct ListNode));
    p2->val = 1;
    head->next->next->next = p2;
    head->next->next->next->next = NULL;
    
    int a = isPalindrome(head);
    
    
    
    return 0;
}
