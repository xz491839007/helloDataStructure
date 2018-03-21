//
//  main.c
//  helloDataStructure
//
//  Created by mac on 2017/6/26.
//  Copyright © 2017年 com.xz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
//#include "sort.h"
#include "example.h"

///结构体的嵌套和结构体指针区别
typedef struct Student{
    int ages;
    char *name;
    char *site;
    ///这是典型的结构体的嵌套
    struct Student *next;
}Student;

typedef struct {
    ///真正储存的存储区，否则ch就为null
    char *str;
    ///串长度
    int length;
}String;

int copy (String *str,char *cn){
//
//    if (str->str) {
//        free(str->str);
//    }
//    else{
//        return 0;
//    }
    int i=0;
    char* c=cn;
    for (;*c;c++,i++) {
//        printf("---%c\n",*c);
    }
    if (!i) {
        str->str=NULL;
        str->length=0;
        return 0;
    }
    else{
        str->str=(char *)malloc((i+1)*sizeof(char));
        if (!str->str) {
            return 0;
        }
        else{
            str->length=i;
            c=cn;
            for (int j=0; j<=i; j++) {
                str->str[j]=*c;
                c++;
            }
            return 1;
        }

    }

}


///子串定位函数方法(强制匹配方法)
int Index(String *mainStr,String *subStr){
    ///i的意思是主串的位置，j的意思是子串的位置
    int i,j = 0;
    char *main,*sub;

    ///判断是否为空串
    if (!(mainStr->length>0&&
          subStr->length>0)) {
        return -1;
    }
    main=mainStr->str;
    sub=subStr->str;
    //开始匹配
    for(i=0;i<mainStr->length && j<subStr->length;)
    {
        printf("子串的字符是%c,j的长度是：%d;主串的字符是%c,i的长度是%d\n",*sub,j,*main,i);
        if (*sub==*main) {
            sub++;
            main++;

            i++;
            j++;
        }
        else{
            //
            main=&mainStr->str[i-j+1];
            ///子串重置
            sub=subStr->str;
            i=i-j+1;
            j=0;
        }

    }
    if (j>(subStr->length-1)) {
        return i-subStr->length;
    }


    return -1;
}


void get_Next(String str,int next[]){
    ///求模式串的next的函数值，并存入数组next
    int i=1;
    int j=0;
//    next[0]=0;
    next[1]=0;
    while (i<str.length) {
        printf("i的值是：%d字符是%c,j的值是%d,字符是%c\n",i,str.str[i],j,str.str[j]);
        if (j==0||str.str[i]==str.str[j]) {
            ++i;
            ++j;
            next[i]=j;
        }
        else{
            j=next[j];
        }
    }
}




void ssss(Student ppint){
    ///当如果是用常量进行编辑时，只是在函数的内部进行编辑，出了方法之后是不执行的。
    ///所以我们应该使用指针的方式，进行运算
    ppint.ages=10;
    ppint.next=&ppint;
    printf("---%d\n",&ppint);

}


///初始化
int main(int argc, const char * argv[]) {
    ///结构体指针，结构体
//    Student *stus,stu;
//    stus=(Student *)malloc(sizeof(stus));
//    stu.name="xz";
//    ssss(stu);
//    stus->ages=10;
//    printf("%d\n",stus->ages);
//    printf("%d\n",stu.ages);

    ///string
    String string ,MainString;

//    if (copy(&string, "abcd") &&
//        copy(&MainString, "abshdsadabcdsfua")) {
//        printf("----%s----\n",string.str);
//        printf("----%s----\n",MainString.str);
//        ///匹配算法
//        printf("主串的匹配的位置是:%d，字串是:%s，主串是：%s\n",Index(&MainString, &string),string.str,MainString.str);
//        ///
//
//
//    }

    if (copy(&string, "abaabc") &&
        copy(&MainString, "ababcabcacbab")) {
        printf("----%s----\n",string.str);
        printf("----%s----\n",MainString.str);
        ///暴力匹配算法
        printf("主串的匹配的位置是:%d，字串是:%s，主串是：%s\n",Index(&MainString, &string),string.str,MainString.str);
        ///串的kmp算法
        int next[string.length];
        get_Next(string, next);
        for (int i=0; i<string.length;i++ ) {
            printf("%d",next[i]);
        }

    }

    return 0;
}
