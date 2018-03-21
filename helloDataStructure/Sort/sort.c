//
//  sort.c
//  helloDataStructure
//
//  Created by mac on 2017/7/19.
//  Copyright © 2017年 com.xz. All rights reserved.
//

#include "sort.h"
///只有一次调试机会
void display(KeyType key[],int length)
{
//    for (int i=1; i<length; i++) {
//        printf("第%d位的值是%d,",i,key[i]);
//    }
    for (int i=1; i<length; i++) {
        printf("%d,",key[i]);
    }
    printf("\n");
}

void Swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}


///-----最简单的排序-插入排序------
void insertSort(KeyType key[],int length)
{
    printf("未排序:");
    display(key, length);
    for (int i=2; i<length;i++) {
        ///0号位是哨兵位,取第一位的数字进行排序
        if (key[i]<key[i-1]) {
            key[0]=key[i];
            ///正向比较找到其位置
            for (int j=1; j<i; j++) {
                if (key[0]<=key[j]) {

                    KeyType noKey=key[j];
                    key[j]=key[0];
                    key[0]=noKey;
                }
            }
            key[i]=key[0];
        }
        printf("第%d次排序结果:",i-1);
        display(key, length);
    }
    display(key, length);
}


///冒泡排序
void BubbleSort(KeyType key[],int length)
{
    printf("未排序:");
    display(key, length);
    for (int i=1; i<length; i++) {
        key[0]=key[i];
        for (int j=1; j<length; j++) {
            if (key[j]>key[0]) {
//                进行交换
                KeyType nokey=key[0];
                key[0]=key[j];
                key[j]=nokey;

            }
        }
        printf("第%d次排序结果:",i-1);
        display(key, length);
    }
    ///0号位是哨兵位,取第一位的数字进行排序
    display(key, length);

}



///-------------------------

///初始化函数
void init()
{
    ///自动化准备数据
    KeyType key[]=SortData;
    int length=0;
    GET_ARRAY_LEN(key,length);
    BubbleSort(key, length);
//    insertSort(key,length);
}

///排序演示函数
void sortDisplay()
{
    ///调用初始化函数
    init();

}

