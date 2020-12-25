//AnnualReport.h
#pragma once
//класс AnnualReport
//Класс годового отчета
class AnnualReport
{
private:
	PayRecord* ptrRR; // записи доходов
	ExpenseRecord* ptrER; // записи расходов
	float expenses, pays; // суммы доходов и расходов
public:
	AnnualReport(PayRecord*, ExpenseRecord*);
	void display(); // отображение годового отчета
};
//конец AnnualReport.h