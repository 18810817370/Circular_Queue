// Circular_Queue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CircularQueue.h"
#include <iostream>
using namespace std;

int main()
{
	CircularQueue L;
	char a;
	int  x;
	L.InitCircularQueue();
	do
	{
		cout << "<--------------------------------------------------------------------------------------------------------------------->" << endl;
		cout << "        " << "0.初始化" << "        " << "1.判断对列空" << "        " << "2.入队列" << "        " << "3.出队列" << "        " << "4.退出" << endl;
		cin >> a;
		switch (a)
		{
		case '0':
			L.InitCircularQueue();														//初始化循环队列
			cout << "初始化完成" << endl;
			break;
		case '1':																		//判断队列空
			if (L.CircularQueueEmpty())
				cout << "队列空" << endl;
			else
				cout << "队列不空" << endl;
			break;
		case '2':																		//入队列
			cout << "请输入要入队列的元素" << endl;
			cin >> x;
			if (L.IntoCircularQueue(x))
				cout << "入队列成功" << endl;
			else
				cout << "入队列失败" << endl;
			break;
		case '3':																		//出队列
			if (L.CircularQueueEmpty())
				cout << "队列空，出队列失败" << endl;
			else
			{
				L.OutCircularQueue(x);
				cout << "出队列元素为:" << x << endl;
			}
			break;
		case '4':
			break;
		default:																		//输入错误提示
			cout << "输入错误，请重新输入" << endl;
			break;
		}
	} while (a != '4');

	return 0;
}