#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <io.h>
#include <time.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20

typedef int Status;
typedef int ElemType;

Status visit(ElemType c)
{
	printf("%d", c);
	return OK;
}

typedef struct
{
	ElemType data[MAXSIZE];
	int length;
}SqList;
/*初始化线性表*/
Status InitList(SqList *L)
{
	L->length = 0;
	return OK;
}

Status ListEmpty(SqList L)
{
	if (L.length == 0)
		return TRUE;
	else
		return FALSE;
}

Status ClearList(SqList *L)
{
	L->length = 0;
	return OK;
}

int ListLength(SqList L)
{
	return L.length;
}


Status GetElem(SqList L, int i, ElemType *e)
{
	if (L.length == 0 || i > L.length || i < 1)
		return ERROR;
	*e = L.data[i - 1];
	return OK;
}

int LocateElem(SqList L, ElemType e)
{
	int i;
	if (L.length == 0)
		return 0;
	for (i = 0; i < L.length; i++)
	{
		if (L.data[i] == e)
			break;
	}
	if (i >= L.length) 
		return 0;
	return i + 1;
}

Status ListInsert(SqList *L, int i, ElemType e)
{
	int k;
	if (L->length == MAXSIZE)
		return ERROR;
	if (i<1 || i>L->length + 1)
		return ERROR;
	if (i <= L->length)
	{
		for (k = L->length - 1; k > i - 1; k--)
			L->data[k + 1] = L->data[k];
	}
	L->data[i - 1] = e;
	L->length++;
	return OK;

}
Status ListDelete(SqList *L, int i, ElemType *e)
{
	int k;
	if (L->length == 0)
		return ERROR;
	if (i<1 || i>L->length)
		return ERROR;
	if (i <L->length)
	{
		for (k = i;k<L->)
	}
}