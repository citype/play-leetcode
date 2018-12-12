//
//  main.c
//  arithmetic
//
//  Created by 西河 on 2018/12/12.
//  Copyright © 2018 xihe. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int cef; //系数
    int exp; //指数
}Elem;

typedef struct Node{
    Elem e;
    struct Node *next;
}Node, *LinkList;

//初始化链表
void initList(LinkList *L) {
    *L = (LinkList)malloc(sizeof(Node));
    (*L)->next = NULL;
    (*L)->e.exp = 0;
    (*L)->e.cef = 0;

}

//插入链表
void insertList(LinkList *L, int cef, int exp) {
    LinkList head = *L;
    Node *s;
    s = (Node *)malloc(sizeof(Node));
    s->e.cef = cef;
    s->e.exp = exp;
    s->next = NULL;
    
    while (head->next) {
        head = head->next;
    }
    head->next = s;
}

int listLength (LinkList *L) {
    LinkList head = *L;
    int length = 0;
    while (head) {
        head = head->next;
        length++;
    }
    return length;
}

//比较两个链表中的指数
void compare(LinkList *A, LinkList *B, int lengthA) {
    LinkList headA = *A;
    while (lengthA>0) {
        //找到 指数相同的元素 进行系数相加
        LinkList headB = *B;
        while (headB) {
            
            if (headB->e.exp ==  headA->e.exp) {
                headA->e.cef = headB->e.cef + headA->e.cef;
                break;
           
            } else { //判断是否在 A 中出现 如果没有出现的话 A 则增加该节点
                LinkList p = *A;
                int flag = -1;
                while (p) {
                    if (headB->e.exp == p->e.exp) {
                        flag = 1;
                        break;
                    }
                    p = p->next;
                }
                if (flag != 1) {
                    //添加该节点
                    insertList(A, headB->e.cef,headB->e.exp);
                }
            }
        
            headB = headB->next;
        }
        headA = headA->next;
        lengthA --;
    }
}

void result(LinkList *A) {
    LinkList head = (*A)->next;
    printf("运算结果为：\n");
    while (head) {
        if (head->next)
            printf("%d^%d + ",head->e.cef,head->e.exp);
        else
             printf("%d^%d\n",head->e.cef,head->e.exp);
        
        head = head->next;
    }
}

int main(int argc, const char * argv[]) {
    LinkList A;
    
    initList(&A);
    insertList(&A, 5, 1);
    insertList(&A, 6, 2);
    insertList(&A, 7, 3);
    insertList(&A, 8, 4);
    insertList(&A, 12, 5);
    int lengthA = listLength(&A);
    
    LinkList B;
    initList(&B);
    insertList(&B, 8, 2);
    insertList(&B, 7, 3);
    insertList(&B, 111, 4);
    insertList(&B, 22, 5);
    insertList(&B, 33, 9);
    insertList(&B, 89, 10);
    insertList(&B, 11, 11);
    insertList(&B, 83, 12);
    
    compare(&A, &B, lengthA);
    
    result(&A);
    
    return 0;
}
