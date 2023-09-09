// kursach.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <list>
#include "User.h"

int main()
{
	list<User*> users;
	int tmp = 0;
	cout << "How many users you need?" << endl;
	do {
		cin >> tmp;
	} while (tmp < 0 && tmp> 10);
	for (int i = 0; i < tmp; i++)
	{
		cout << "It's " << i + 1 << " user.How many tasks should run?" << endl;
		int tasks = 0;
		do {
			cin >> tasks;
		} while (tasks < 0 && tasks> 10);
		cout << "Write the number of kvants for each task" << endl;
		User* user = new User(i + 1);
		for (int j = 0; j < tasks; j++)
		{
			int kv = 0;
			do {
				cin >> kv;
			} while (tasks < 0 && tasks> 10);
			user->addTask(j + 1, kv);
		}
		users.push_back(user);
	}
	system("cls");
	cout << "Users count - " << users.size() << endl;
	for (int i = 0; i < users.size(); i++)
	{
		cout << "user " << i + 1 << " - " << users.front()->returnSize() << "tasks: ";
		for (int j = 0; j < users.front()->returnSize(); j++)
		{
			cout << users.front()->returnTaskNumber() << " - " << users.front()->returnTaskKvants() << "kvants; ";
			users.front()->changeOrder();
		}
	}

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
