//ClientInputScreen.h
#pragma once
#include <iostream>

using namespace std;

//����� ClientInputScreen
//����� ClientInputScreen. ��� �����, ���������� �� ����������� �������,
//���� ������������ ����� ������ ������ � ����� �������:
class ClientInputScreen

{
private:
	ClientList* ptrClientList;
	string tName;
	string clientPhone;
public:
	ClientInputScreen(ClientList* ptrTL) : ptrClientList(ptrTL)
	{
		/* ��� ����� */
	}
	void setClient(); // �������� ������ � �������
};
//����� ClientInputScreen.h