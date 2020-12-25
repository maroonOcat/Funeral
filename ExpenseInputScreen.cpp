//ExpenseInputScreen.cpp
#include "stdafx.h"
#include "Header.h"

//������ ������ ExpenseInputScreen

// �����������
ExpenseInputScreen::ExpenseInputScreen(ExpenseRecord* per) : ptrExpenseRecord(per)
{
	/*�����*/
}
//------------------------------------------------------
void ExpenseInputScreen::setExpense()
{
	int month, day;
	string category, payee;
	float amount;
	cout << "������� ����� (1-12): ";
	checkDigit(month);
	cin.ignore(80, '\n');
	cout << "������� ���� (1-31): ";
	checkDigit(day);
	cin.ignore(80, '\n');
	cout << "������� ��������� �������� (������, ������, ������, ���������� � �.�.): ";
	getaLine(category);
	cout << "������� ���������� (�� �������): ";
	getaLine(payee);
	cout << "������� ����� (3900.99): ";
	cin >> amount;
	cin.ignore(80, '\n');
	// ������� ����� ������
	Expense* ptrExpense = new Expense(month, day, category, payee, amount);
	// ��������� ������ � ������ ���� ��������
	ptrExpenseRecord->insertExp(ptrExpense);
}
//����� ExpenseInputScreen.cpp