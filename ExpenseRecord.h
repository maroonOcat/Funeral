//ExpenseRecord.h
#pragma once
//����� ExpenseRecord
//����� ������� � ��������
class ExpenseRecord
{
private:
	vector<Expense*> vectPtrsExpenses; //������ ���������� �� �������
	vector<Expense*>::iterator iter;
public:
	~ExpenseRecord();

	void insertExp(Expense*);
	void display();
	float displaySummary(); // ����� ��� �������� ������
};
//����� ExpenseRecord.h