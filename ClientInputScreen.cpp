//ClientInputScreen.cpp
#include "stdafx.h"
#include "Header.h"

//����� ������ ClientInputScreen
void ClientInputScreen::setClient() // �������� ������ � �������
{

	cout << "������� ��� ������� (������ � �): " << endl;
	getaLine(tName);
	cout << "������� ����� �������� ������� (89008753626): " << endl;
	getaLine(clientPhone);
	Client* ptrClient = new Client(tName, clientPhone); // ������� �������
	ptrClientList->insertClient(ptrClient); // ������� � ������ ��������
}
//����� ClientInputScreen.cpp