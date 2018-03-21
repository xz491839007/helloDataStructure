//
//  example.c
//  helloDataStructure
//
//  Created by mac on 2017/7/18.
//  Copyright © 2017年 com.xz. All rights reserved.
//

#include "example.h"

///---------------温度转化-----------------------------------
float tempteratrChange(float Ftemp)
{
    ///切记如果32.0-32出现的值是不正确的
    return 5*(Ftemp-32.0)/9;
}

void tempsChage(float *temp,int size)
{
    for (int i=0; i<size; i++) {
        printf("%.fF的摄氏温度为%.2f\n",temp[i],tempteratrChange(temp[i]));
    }
}


///---------------2输入数字比大小------------------------------
///输入数字比大小
///---------------------------------------------------------
void numBig(){
    printf("请输入三个整数型数字\n");
    int num[3];
    for (int i=0; i<3; i++) {
        scanf("%d",&num[i]);
    }
    printf("\n");
    ///比大小
    for (int j=0; j<3; j++) {
        ///得到最小的值
        int small=num[j];
        int small_key=j;
        for (int k=j+1; k<3; k++) {
            if (small>num[k]) {
                small=num[k];
                small_key=k;
            }
        }
        ///交换
        num[small_key]=num[j];
        num[j]=small;
    }
    ///打印
    printf("比完之后是：");
    for (int f=0;f<3 ;f++ ) {
        printf("%d,",num[f]);
    }
    
}


void numBig2(){
    ///采用标准答案的方式来
    printf("请输入三个整数型数字\n");
    int a,b,c,t;
    scanf("%d,%d,%d",&a,&b,&c);
    ///
    if (a>=b&&a>=c) {
        if (b<=c) {
            ///交换b和c
            t=b;
            b=c;
            c=t;
        }
    }
    ///
    if (b>=a && b>=c) {
        ///b是最大的
        t=b;
        b=a;
        a=t;
        if (b<=c) {
            ///交换b和c
            t=b;
            b=c;
            c=t;
        }
    }
    ///
    if (c>=a && c>=b) {
        ///b是最大的
        t=c;
        c=a;
        a=t;
        if (b<=c) {
            ///交换b和c
            t=b;
            b=c;
            c=t;
        }
    }

    printf("交换后的值是:");
    printf("%d,%d,%d\n",c,b,a);
}
///---------------------------------
///分段函数
///-----------分段函数----------------
void signalFunction(){
    ///请输入当前货物价格
    printf("请输入当前货物价格");
    float price = 0;
    double f=0;
    scanf("%f",&price);

    if (price>10000) {
        f=price*0.05;
    }

    if (price<10000&&
        price>=5000) {
        if (f>0) {
            f=f+price*0.03;
        }
        else{
            f=price*0.03;
        }
    }

    if (price<5000&&
        price>=1000) {
        if (f>0) {
            f=f+price*0.02;
        }
        else{
            f=price*0.02;
        }
    }
    printf("税金为%.2f",f);
    
}
///-----------------------------------------------
///4.将20个数读入计算机，统计出其中正数、负数、以及零的个数
///-----------------------------------------------
void readNum(){
    printf("请输入20个数\n");
    int a=0,b=0,c=0,e;

    for (int i=0; i<20; i++) {
        scanf("%d",&e);
        if (e>0) {
            ++a;
        }
        else if(e==0){
            ++c;
        }
        else{
            ++b;
        }
    }
    printf("正数的个数为%d,负数的个数为%d,零的个数为%d\n",a,b,c);

}
///-----------------------------------------------------------------------------
///5.给出一个不多于5位的正整数，（1）求出它是几位数，（2）分别输出每一位数字，（3）求出该数字的逆序数
///这个算法已经错位了好几次了
///-----------------------------------------------------------------------------
void NiNum(){
    printf("给出一个不多于5位的正整数");
    int num;
    int a,b,c,d,e;
    scanf("%d",&num);
    ///判断是否多于5位数
    int f=num/100000;
    if (f==0) {

    }
    else{
        printf("整数超过5位\n");
    }


}
