//PayRecord.cpp
#include "stdafx.h"
#include "Header.h"

//методы класса PayRecord
PayRecord::~PayRecord() // деструктор
{ // удалить строки с платежами,
	// удалить указатели из множества.
	while (!setPtrsRR.empty())
	{
		iter = setPtrsRR.begin();
		delete* iter;
		setPtrsRR.erase(iter);
	}
}
//---------------------------------------------------------
void PayRecord::insertPay(string name, string phNo, int month, float amount, int serv)
{
	PayRow* ptrRow = new PayRow(name);
	ptrRow->setPay(name, phNo, month, amount, serv); // заносим в нее платеж
	setPtrsRR.push_back(ptrRow); // заносим строку в вектор
}
//---------------------------------------------------------
void PayRecord::display() // отобразить все строки с доходами
{
	cout << "\nИмя клиента\tТип услуги\tМесяц\t Сумма\n" << endl
		<< "------------------------------------------------------------------\n" << endl;
	if (setPtrsRR.empty())
		cout << "***Нет платежей!***\n" << endl;
	else
	{
		iter = setPtrsRR.begin(); //итератор на список с указателями на объекты PayRow
		while (iter != setPtrsRR.end())
		{
			cout << (*iter)->getName() << '\t'; // вывести имя клиента
			cout << (*iter)->getService() << "\t";
			cout << (*iter)->getMonth() << "\t";
			cout << (*iter)->getPayNo() << " ";
			cout << endl;
			iter++;
		}
		cout << endl;
		cout << endl;
	}
}
//---------------------------------------------------------
float PayRecord::getSumOfPays() // сумма всех платежей
{
	float sumRents = 0.0;
	iter = setPtrsRR.begin();

	while (iter != setPtrsRR.end())
	{ // плюсуем суммы всех платежей клиентов за все время
		sumRents += (*iter)->getPayNo();
		iter++;
	}
	return sumRents;
}
//конец PayRecord.cpp