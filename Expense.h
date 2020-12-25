//Expense.h
#pragma once
//класс Expense
//Класс затрат
class Expense
{
public:
	int month;
	int day; // месяц и день уплаты расходов
	string category; // категория расходов (налоги, аренда, услуги гробовщиков и т.д.)
	string payee; // кому платим
	float amount; // сколько платим
	Expense() :
		month(0),
		day(0),
		amount(0)
	{ }
	Expense(int m, int d, string c, string p, float a) :
		month(m), day(d), category(c), payee(p), amount(a)
	{
		/* тут пусто! */
	}
};
//конец Expense.h