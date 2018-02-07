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
	void InitCircularQueue();												//��ʼ������
	bool CircularQueueEmpty();												//�ж�ѭ�����п�
	bool IntoCircularQueue(Data x);											//��ѭ������
	bool OutCircularQueue(Data &x);											//��ѭ������
private:
	LNode *rear = NULL;
};

