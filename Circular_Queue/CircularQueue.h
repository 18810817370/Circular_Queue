#pragma once
#define Data int

class LNode
{
public:
	Data data;
	LNode *next;
};


class CircularQueue
{
public:
	CircularQueue();
	~CircularQueue();
	void InitCircularQueue();												//初始化队列
	bool CircularQueueEmpty();												//判断循环队列空
	bool IntoCircularQueue(Data x);											//入循环队列
	bool OutCircularQueue(Data &x);											//出循环队列
private:
	LNode *rear = NULL;
};

