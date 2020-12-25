//ExpenseInputScreen.cpp
#include "stdafx.h"
#include "Header.h"

//методы класса ExpenseInputScreen

// конструктор
ExpenseInputScreen::ExpenseInputScreen(ExpenseRecord* per) : ptrExpenseRecord(per)
{
	/*пусто*/
}
//------------------------------------------------------
void ExpenseInputScreen::setExpense()
{
	int month, day;
	string category, payee;
	float amount;
	cout << "Введите месяц (1-12): ";
	checkDigit(month);
	cin.ignore(80, '\n');
	cout << "Введите день (1-31): ";
	checkDigit(day);
	cin.ignore(80, '\n');
	cout << "Введите категорию расходов (Налоги, ремонт, аренда, крематорий и т.д.): ";
	getaLine(category);
	cout << "Введите получателя (ИП Могилки): ";
	getaLine(payee);
	cout << "Введите сумму (3900.99): ";
	cin >> amount;
	cin.ignore(80, '\n');
	// создаем новый расход
	Expense* ptrExpense = new Expense(month, day, category, payee, amount);
	// вставляем расход в список всех расходов
	ptrExpenseRecord->insertExp(ptrExpense);
}
//конец ExpenseInputScreen.cpp