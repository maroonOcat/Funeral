//PayRecord.h
#pragma once
#include <List>
#include <string>
//#include "PayRow.h"
// ����� PayRecord
//����� PayRecord. �� ������ ��������������� ������ �� ������ �����.
//� ��� ����� ����������������� ����� ���������� ������.
class PayRecord
{
private:
	list <PayRow*> setPtrsRR; // ��������� �� ������� PayRow (�� ������ �� �������)
	list <PayRow*>::iterator iter;
public:
	~PayRecord();
	void insertPay(string, string, int, float, int); // �������� ������
	void display(); // ���������� ��� ������ � ���������
	float getSumOfPays(); // ���������� ����� ���� �������� ���� ��������
};
//����� PayRecord.h