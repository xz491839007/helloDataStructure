//
//  List.h
//  helloDataStructure
//
//  Created by mac on 2017/8/11.
//  Copyright © 2017年 com.xz. All rights reserved.
//

#ifndef List_h
#define List_h

#include <stdio.h>

#include "common.h"

typedef struct {
    ///数据域
    ElemType *data;
    ///实际长度
    int length;
}List;

Status CreatList(List *list);



#endif /* List_h */
