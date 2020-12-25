//Expense.h
#pragma once
//����� Expense
//����� ������
class Expense
{
public:
	int month;
	int day; // ����� � ���� ������ ��������
	string category; // ��������� �������� (������, ������, ������ ����������� � �.�.)
	string payee; // ���� ������
	float amount; // ������� ������
	Expense() :
		month(0),
		day(0),
		amount(0)
	{ }
	Expense(int m, int d, string c, string p, float a) :
		month(m), day(d), category(c), payee(p), amount(a)
	{
		/* ��� �����! */
	}
};
//����� Expense.h