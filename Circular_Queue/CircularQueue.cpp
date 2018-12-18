#include "CircularQueue.h"

CircularQueue::CircularQueue()
{
}


CircularQueue::~CircularQueue()
{
}


void CircularQueue::InitCircularQueue()
{
	LNode *p;
	while (rear != NULL)
	{
		p = rear->next;
		if (rear->next == rear)
			rear = NULL;
		else
			rear->next = rear->next->next;
		delete p;
	}
}

bool CircularQueue::CircularQueueEmpty()
{
	if (rear == NULL)
		return true;
	else
		return false;
}

bool CircularQueue::IntoCircularQueue(Data x)
{
	LNode *p = new LNode;
	if (rear == NULL)
	{
		rear = p;
		rear->data = x;
		rear->next = rear;
	}
	else
	{
		p->next = rear->next;
		p->data = x;
		rear->next = p;
		rear = p;
	}
	return true;
}

bool CircularQueue::OutCircularQueue(Data &x)
{
	if (rear == NULL)
		return false;
	else
	{
		LNode *p;
		p = rear->next;
		x = p->data;
		if (rear->next == rear)
			rear = NULL;
		else
			rear->next = rear->next->next;
		delete p;
		return true;
	}
}