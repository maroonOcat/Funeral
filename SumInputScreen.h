//SumInputScreen.h
#pragma once
//#include "ClientList.h"
//#include "PayRecord.h"
//класс SumInputScreen
//Экран для добавления платежа
class SumInputScreen
{
private:
	ClientList* ptrClientList; // список клиентов
	PayRecord* ptrPayRecord; // список записей об оплате услуг
	string clientName; // имя клиента, который оплатил услугу
	float sumPaid = 0; // сумма платежа
	int month = 0; // за месяц
	string phoneNo; // номер телефона
	int service = 0; // тип услуги
public:
	SumInputScreen(ClientList* ptrTL, PayRecord* ptrRR) : ptrClientList(ptrTL),
		ptrPayRecord(ptrRR)
	{
		/*тут пусто*/
	}
	void setPay(); // добавить оплату одной услуги клиентом
};
//конец SumInputScreen.h