//#include <stdio.h>
////#include "malloc.h"
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct node
//{
//	int number;
//	struct node *next;
//
//}Node;
//
//typedef struct stack
//{
//	Node *top;
//	Node *base;
//
//}stack;
//
//
//void Initstack(stack *S)
//{
//	S->top=(Node*)malloc(sizeof(Node));
//	if(S->top==NULL)
//	{
//		printf("申请失败");
//	}
//	else
//	{
//		S->base=S->top;
//		S->top->next=NULL;
//	}
//}
//
//
//int Push(stack *S,int data)
//{
//	Node *p=(Node*)malloc(sizeof(Node));
//	if(p==NULL)
//	{
//		return 1;
//	}
//	p->number=data;
//	p->next=S->top;
//	S->top=p;
//	return 0;
//}
//int Pop(stack *S,int e)
//{
//	if(S->base==S->top)
//	{
//		return 1;
//	}
//	e=(--S->top);
//	return 0;
//}
//void Clear(stack *S)//«Âø’’ª
//{
//	Node *p=NULL;
//	while(S->base!=S->top)
//	{
//		p=S->top;
//		S->top=S->top->next;
//		free(p);
//	}
//	return;
//}
//int Judge(stack *S)//≈–∂œ «∑ÒŒ™ø’’ª
//{
//	if(S->base==S->top)
//	{
//		return 0;
//	}
//	else return 1;
//}
//void conversion(stack *S)//Ω¯÷∆◊™ªª
//{
//	Initstack(S);
//	int e = 0;
//	int a;//“ª∏ˆ ÆΩ¯÷∆ ˝a
//	printf("«Î ‰»Î“ª∏ˆ ÆΩ¯÷∆ ˝:");
//	scanf("%d",&a);
//	while(a)
//	{
//		Push(S,a%8);
//		a=a/8;
//	}
//	while(Judge(S))
//	{
//		Pop(S,e);
//		printf("%d",e);
//	}
//}
//int main()
//{
//	stack *S = NULL;
//	Initstack(S);
//	/*int i;
//	int num;//’ª÷–‘™Àÿµƒ∏ˆ ˝
//	int data;
//	printf("ƒ„œÎ ‰»Îº∏∏ˆ ˝£ø£∫");
//	scanf("%d",&num);
//	for(i=0;i<num;i++)
//	{
//		printf("µ⁄%d∏ˆ ˝",i+1);
//		scanf("%d",&data);
//		if(Push(S,data))
//		{
//			continue;
//		}
//		else
//		{
//			printf("Ω¯’ª ß∞‹");
//		}
//	}*/
////	conversion(S);
//	return 0;
//}
