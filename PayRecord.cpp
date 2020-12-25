//PayRecord.cpp
#include "stdafx.h"
#include "Header.h"

//������ ������ PayRecord
PayRecord::~PayRecord() // ����������
{ // ������� ������ � ���������,
	// ������� ��������� �� ���������.
	while (!setPtrsRR.empty())
	{
		iter = setPtrsRR.begin();
		delete* iter;
		setPtrsRR.erase(iter);
	}
}
//---------------------------------------------------------
void PayRecord::insertPay(string name, string phNo, int month, float amount, int serv)
{
	PayRow* ptrRow = new PayRow(name);
	ptrRow->setPay(name, phNo, month, amount, serv); // ������� � ��� ������
	setPtrsRR.push_back(ptrRow); // ������� ������ � ������
}
//---------------------------------------------------------
void PayRecord::display() // ���������� ��� ������ � ��������
{
	cout << "\n��� �������\t��� ������\t�����\t �����\n" << endl
		<< "------------------------------------------------------------------\n" << endl;
	if (setPtrsRR.empty())
		cout << "***��� ��������!***\n" << endl;
	else
	{
		iter = setPtrsRR.begin(); //�������� �� ������ � ����������� �� ������� PayRow
		while (iter != setPtrsRR.end())
		{
			cout << (*iter)->getName() << '\t'; // ������� ��� �������
			cout << (*iter)->getService() << "\t";
			cout << (*iter)->getMonth() << "\t";
			cout << (*iter)->getPayNo() << " ";
			cout << endl;
			iter++;
		}
		cout << endl;
		cout << endl;
	}
}
//---------------------------------------------------------
float PayRecord::getSumOfPays() // ����� ���� ��������
{
	float sumRents = 0.0;
	iter = setPtrsRR.begin();

	while (iter != setPtrsRR.end())
	{ // ������� ����� ���� �������� �������� �� ��� �����
		sumRents += (*iter)->getPayNo();
		iter++;
	}
	return sumRents;
}
//����� PayRecord.cpp