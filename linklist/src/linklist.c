#include "linklist.h"
#include <stdio.h>
#include <stdlib.h>

inode *create_linklist(int num)
{
    inode *head = (inode *)malloc(sizeof(inode));
    int i;
    inode *p = (inode *)malloc(sizeof(inode));
    if(p == NULL){
        perror("malloc");
        return NULL;
    }
    p->inode_num = 1;
    p->next = NULL;
    head->inode_num = -1;
    head->next = p;
    inode *q;
    for(i = 2;i <= num;i++){
        q = p;
        p = (inode *)malloc(sizeof(inode));
        if(p == NULL){
            perror("malloc");
            return NULL;
        }
        p->inode_num = i;
        p->next = NULL;
        q->next = p;
    }
    printf("create_linklist success\n");
    return head;
}

void print_linklist(inode *head)
{
    inode *p = head->next;
    while(p != NULL){
        printf("inode_num:%d\n", p->inode_num);
        p = p->next;
    }
}
