#pragma once
class Task
{
private:
	int number;		//����� ������
	int kvant;		//���-�� ������� �� ������
public:
	Task(int number, int kvant)
	{
		this->number = number;
		this->kvant = kvant;
	}
	int returnNumber()	//��������� ������ ������
	{
		return number;
	}
	int returnKvants()	//��������� ���-�� ������� �� ������
	{
		return kvant;
	}
	void execution()	//���������� ������
	{
		kvant --;
	}
};