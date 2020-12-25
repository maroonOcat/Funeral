//PayRow.cpp
#include "stdafx.h"
#include "Header.h"
//методы класса PayRow//

PayRow::PayRow(string an) : clName() //конструктор
{ //конструктор с одним параметром

}
//-------------------------------------------------------Ч
void PayRow::setPay(string cl, string ph, int m, float am, int serv) // сеттер оплата за мес€ц m, сумма - am
{
	//инициализаци переменных
	pay = am;
	clName = cl;
	month = m;
	service = serv;
}
//-------------------------------------------------------Ч

string PayRow::getName() // геттер запрос имени клиента
{
	return clName;
}
//-------------------------------------------------------Ч
float PayRow::getPayNo() //√еттер запрос платежа
{
	return pay;
}
//----------------------------------------------------------Ч
int PayRow::getMonth() //геттер запрос мес€ца
{
	return (month + 1); //+1 из-за специфики счета: считаетс€ с 0
}
//-----------------------------------------------------------Ч
string PayRow::getService() //√еттер запрос услуги
{
	switch (service)
	{
	case 1:
		return "ѕодготовка покойника";
		break;
	case 2:
		return "ѕродажа гроба ";
		break;
	case 3:
		return " опка могилы ";
		break;
	case 4:
		return "”слуги гробовщика ";
		break;
	default:
		return "ƒругое ";
		break;
	}
}
//конец PayRow.cpp