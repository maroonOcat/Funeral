//PayRecord.h
#pragma once
#include <List>
#include <string>
//#include "PayRow.h"
// класс PayRecord
//класс PayRecord. ќн хранит непосредственно записи об оплате услуг.
//— ним будет взаимодействовать экран добавлени€ оплаты.
class PayRecord
{
private:
	list <PayRow*> setPtrsRR; // указатели на объекты PayRow (по одному на клиента)
	list <PayRow*>::iterator iter;
public:
	~PayRecord();
	void insertPay(string, string, int, float, int); // добавить платеж
	void display(); // отобразить все строки с платежами
	float getSumOfPays(); // подсчитать сумму всех платежей всех клиентов
};
//конец PayRecord.h