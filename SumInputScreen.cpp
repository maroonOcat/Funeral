//SumInputScreen.cpp
#include "stdafx.h"
#include "Header.h"

void SumInputScreen::setPay() //ввод и запись платежа в таблицу
{
	cout << "Введите имя клиента: ";
	getaLine(clientName);
	// получить номер телефона по имени клиента
	phoneNo = ptrClientList->getphNum(clientName);
	if (phoneNo.empty() == false) // если клиент найден -
	{ // получить сумму платежа
		cout << "Введите сумму платежа (2000.37): " << endl;
		cin >> sumPaid; // вводим сумму платежа
		cin.ignore(80, '\n');
		cout << "Введите номер месяца оплаты (1-12): " << endl;
		checkDigit(month);
		cin.ignore(80, '\n');
		month--; // (внутренняя нумерация 0-11)
		cout << "Введите тип услуги (Подготовка покойника (1), Продажа гроба(2), Копка могилы (3), Услуги гробовщика (4)): " << endl;
		checkDigit(service); //ввод услуги с проверкой int
		cin.ignore(80, '\n');
		// вставляем данные в запись об оплате
		ptrPayRecord->insertPay(clientName, phoneNo, month, sumPaid, service);
	}
	else
		cout << "Такого клиента нет.\n" << endl;
} //конец SumInputScreen.cpp