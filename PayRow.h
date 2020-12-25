//PayRow.h
#pragma once
#include <string>
//класс PayRow
//класс, хранящий одну табличную строку доходов (оплаченной услуги)
// одна строка таблицы прибыли: имя клиента, тип услуги, месяц сделки, сумма
class PayRow
{
private:
	string clName; // имя клиента
	float pay = 0; // плата
	int service = 0; //тип услуги под номером 1, 2, 3 или 4
	int month = 0; // номер месяца
public:
	PayRow(string); // конструктор с одним параметром
	void setPay(string, string, int, float, int); // добавить плату
	string getName(); //Запрос имени
	float getPayNo(); //Запрос платы
	string getService(); //запрос услуги
	int getMonth(); //запрос месяца
};
//конец PayRow.h