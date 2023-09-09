#pragma once
class Task
{
private:
	int number;		//номер задачи
	int kvant;		//кол-во квантов на задачу
public:
	Task(int number, int kvant)
	{
		this->number = number;
		this->kvant = kvant;
	}
	int returnNumber()	//получение номера задачи
	{
		return number;
	}
	int returnKvants()	//получение кол-ва квантов на задачу
	{
		return kvant;
	}
	void execution()	//выполнение задачи
	{
		kvant --;
	}
};