#pragma once
#include "Task.h"
#include <list>
using namespace std;

class User
{
private:
	int number;			//номер пользователя
	list<Task*> tasks;	//задачи
	int size;			//количество задач
public:
	User(int number)
	{
		size = 0;
		this->number = number;
	}
	void addTask(int number, int kvant)
	{
		Task* task = new Task(number, kvant);
		tasks.push_back(task);
		size++;
	}
	int returnTaskNumber()
	{
		return tasks.front()->returnNumber();
	}
	int returnTaskKvants()
	{
		return tasks.front()->returnKvants();
	}
	Task* returnCurrentTask()
	{
		return tasks.front();
	}
	void changeOrder()
	{
		Task* task = returnCurrentTask();
		tasks.pop_front();
		if (task->returnKvants() == 0)
			size--;
		else
			addTask(task->returnNumber(), task->returnKvants());
	}
	void completeTask()
	{
		Task* task = returnCurrentTask();
		task->execution();
		changeOrder();
	}
	int returnSize()
	{
		return size;
	}
};