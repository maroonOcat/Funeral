//AnnualReport.cpp
#include "stdafx.h"
#include "Header.h"


//методы класса AnnualReport
//Конструктор
AnnualReport::AnnualReport(PayRecord* pRR, ExpenseRecord* pER) : ptrRR(pRR), ptrER(pER)
{ /* пусто */
}
//---------------------------------------------------------
void AnnualReport::display()
{
	cout << "Годовой отчет\n--------------\n" << endl;
	cout << "Доходы\n" << endl;
	cout << "\tПлатежи клиентов:\t\t";
	pays = ptrRR->getSumOfPays(); //помещаем сумму доходов в переменную
	cout << pays << endl;

	cout << "Расходы\n" << endl;
	expenses = ptrER->displaySummary(); //помещаем сумму всех затрат в переменную
	cout << "Расходы всего:\t\t";
	cout << expenses << endl;
	// вычисляем прибыльность
	cout << "\nЧистая прибыль:\t\t\t" << (pays - expenses) << endl;
}
//конец AnnualReport.cpp