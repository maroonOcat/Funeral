//Client.cpp
#include "stdafx.h"
#include "Header.h"

//������ ������ Client
//� ������������ ����� ��� ������� � ����� ��������
Client::Client(string n, string cl) : name(n), phoneNumber(cl)
{
	/* ��� ����� */
}
//---------------------------------------------------------
Client::~Client() // ����������
{
	/* ��� ���� ����� */
}
//---------------------------------------------------------
string Client::getPhoneNumber() // ���������� ����� �������� �������
{
	return phoneNumber;
}
//--------------------------------------------------------
string Client::getName() // ���������� ��� �������
{
	return name;
}
//����� Client.cpp