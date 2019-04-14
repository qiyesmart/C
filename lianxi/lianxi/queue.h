#pragma once
#include<assert.h>
#include<stdlib.h>
struct  BSTreeNode;
//????
typedef struct  BSTreeNode * QDataType;
typedef  struct  QNode{
	QDataType  data;
	struct QNode *next;

}QNode;


typedef  struct  Queue{
	QNode *front;
	QNode  *rear;
	int size;
}Queue;

void QueueInit(Queue *pq)
{
	assert(pq != NULL);
	pq->front = pq->rear = NULL;
	pq->size = 0;
}
void  QueueDestory(Queue *pq)
{
	QNode *cur, *next;
	for (cur = pq->front; cur != NULL; cur = next)
	{
		next = cur->next;
		free(cur);
	}
	pq->front = pq->rear = NULL;
}

void	QueuePush(Queue *pq, QDataType  data)
{
	pq->size++;
	QNode *node = (QNode *)malloc(sizeof(QNode));
	node->data = data;
	node->next = NULL;

	if (pq->rear == NULL)
	{
		pq->front = pq->rear = node;
		return;
	}
	pq->rear->next = node;
	pq->rear = node;
}

void  QueuePop(Queue *pq)
{
	pq->size--;
	assert(pq != NULL);
	assert(pq->front != NULL);
	if (pq->front == pq->rear)
	{
		free(pq->front);
		pq->front = pq->rear = NULL;
	}
	else
	{
		QNode *del = pq->front;
		pq->front = pq->front->next;
		free(del);
	}
}


QDataType QueueFront(const Queue *pq)
{
	assert(pq != NULL);
	assert(pq->front != NULL);
	return pq->front->data;
}

int QueueEmpty(const Queue *pq)
{
	return pq->front == NULL ? 1 : 0;
}

int QueueSize(Queue *pq)
{
	return pq->size;
}