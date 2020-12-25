//ClientList.cpp
#include "stdafx.h"
#include "Header.h"

//методы класса ClientList
ClientList::~ClientList() // деструктор
{
	while (!setPtrsClients.empty()) // удаление всех клиентов,
	{ // удаление указателей из контейнера
		iter = setPtrsClients.begin();
		delete* iter;

		setPtrsClients.erase(iter);
	}
}
//---------------------------------------------------------
void ClientList::insertClient(Client* ptrT)
{
	setPtrsClients.push_back(ptrT); // вставка нового клиента в список
}
//---------------------------------------------------------
string ClientList::getphNum(string tName) // получить номер телефона по имени клиента
{
	string phoneNo;
	iter = setPtrsClients.begin();
	while (iter != setPtrsClients.end())
	{ // поиск клиента в списке (достаем у каждого клиента номер телефона)
		phoneNo = (*iter)->getPhoneNumber();
		if (tName == ((*iter)->getName())) // сравниваем по именам и
		{
			// если получившаяся пара совпадает - значит,
			//если запись об этом клиенте найдена в списке клиентов, в этом случае
			return phoneNo; // возвращаем номер телефона
		}
		iter++;
	}
	return string(); // если нет - возвращаем пустую строку
}
//--------------------------------------------------------

void ClientList::display() // вывод списка клиентов
{
	cout << "\nНомер телефона\tИмя клиента\n-------------------\n";
	if (setPtrsClients.empty()) // если список клиентов пуст
		cout << "***Нет клиентов***\n" << endl; // выводим запись, что он пуст)
	else
	{
		iter = setPtrsClients.begin();
		while (iter != setPtrsClients.end()) // распечатываем всех клиентов
		{
			cout << (*iter)->getPhoneNumber() << " || " << (*iter)->getName() << endl;
			*iter++;
		}
	}
}
//конец ClientList.cpp