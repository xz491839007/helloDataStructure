//
//  linkList.h
//  helloDataStructure
//
//  Created by mac on 2017/6/26.
//  Copyright © 2017年 com.xz. All rights reserved.
//

#ifndef linkList_h
#define linkList_h

typedef int elemType;
typedef int Status;

///加函数的声明
int add(int x,int y);

typedef struct LinkNode
{
    elemType data;

    struct LinkNode *next;
} Node,*node;

typedef struct
{
    node Head,tail;///头节点，以及尾节点
    int len;///线性表的长度
}LinkList;

///创建一个线性链表
Status InitList(LinkList *L);


///（实现了栈的功能）



#endif /* linkList_h */

