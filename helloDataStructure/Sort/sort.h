//
//  sort.h
//  helloDataStructure
//
//  Created by mac on 2017/7/19.
//  Copyright © 2017年 com.xz. All rights reserved.
//

#ifndef sort_h
#define sort_h

#include <stdio.h>
#include <stdlib.h>


#define MAXSIZE 20
//#define SortData {0,49,38,65,97,76,13,2,27,49,3}
//#define SortData {0,3,5,4,3,3,2,1}
#define SortData {0,2,5,9,8,7,1,2,3,4,5}


///数组长度
#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));}


typedef int KeyType;///定义关键字型为整数类型
typedef int InfoType;///定义定义域中的类型值为整数类型


typedef struct
{
    KeyType key;
    InfoType perKey;
}RedType;

typedef struct{
    RedType r[MAXSIZE+1];///r[0]闲置或用作哨兵单元
    int length;///顺序表长度
}SqList;///顺序表类型

void sortDisplay();

#endif /* sort_h */
