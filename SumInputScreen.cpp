//SumInputScreen.cpp
#include "stdafx.h"
#include "Header.h"

void SumInputScreen::setPay() //���� � ������ ������� � �������
{
	cout << "������� ��� �������: ";
	getaLine(clientName);
	// �������� ����� �������� �� ����� �������
	phoneNo = ptrClientList->getphNum(clientName);
	if (phoneNo.empty() == false) // ���� ������ ������ -
	{ // �������� ����� �������
		cout << "������� ����� ������� (2000.37): " << endl;
		cin >> sumPaid; // ������ ����� �������
		cin.ignore(80, '\n');
		cout << "������� ����� ������ ������ (1-12): " << endl;
		checkDigit(month);
		cin.ignore(80, '\n');
		month--; // (���������� ��������� 0-11)
		cout << "������� ��� ������ (���������� ��������� (1), ������� �����(2), ����� ������ (3), ������ ���������� (4)): " << endl;
		checkDigit(service); //���� ������ � ��������� int
		cin.ignore(80, '\n');
		// ��������� ������ � ������ �� ������
		ptrPayRecord->insertPay(clientName, phoneNo, month, sumPaid, service);
	}
	else
		cout << "������ ������� ���.\n" << endl;
} //����� SumInputScreen.cpp