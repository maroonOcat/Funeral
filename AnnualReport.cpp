//AnnualReport.cpp
#include "stdafx.h"
#include "Header.h"


//������ ������ AnnualReport
//�����������
AnnualReport::AnnualReport(PayRecord* pRR, ExpenseRecord* pER) : ptrRR(pRR), ptrER(pER)
{ /* ����� */
}
//---------------------------------------------------------
void AnnualReport::display()
{
	cout << "������� �����\n--------------\n" << endl;
	cout << "������\n" << endl;
	cout << "\t������� ��������:\t\t";
	pays = ptrRR->getSumOfPays(); //�������� ����� ������� � ����������
	cout << pays << endl;

	cout << "�������\n" << endl;
	expenses = ptrER->displaySummary(); //�������� ����� ���� ������ � ����������
	cout << "������� �����:\t\t";
	cout << expenses << endl;
	// ��������� ������������
	cout << "\n������ �������:\t\t\t" << (pays - expenses) << endl;
}
//����� AnnualReport.cpp