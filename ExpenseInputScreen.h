//ExpenseInputScreen.h
#pragma once

//����� ExpenseInputScreen
//����� ��� ����� ��������
class ExpenseInputScreen
{
private:
	ExpenseRecord* ptrExpenseRecord; // ������ � ��������
public:
	ExpenseInputScreen(ExpenseRecord*);
	void setExpense();
};
//����� ExpenseInputScreen.h