#ifndef _LINKLIST_
#define _LINKLIST_
#include <stdlib.h>

typedef struct linklist{
    int inode_num;
    struct linklist *next;
}inode;

inode *create_linklist(int num);
void print_linklist(inode *head);

#endif
