//ClientList.cpp
#include "stdafx.h"
#include "Header.h"

//������ ������ ClientList
ClientList::~ClientList() // ����������
{
	while (!setPtrsClients.empty()) // �������� ���� ��������,
	{ // �������� ���������� �� ����������
		iter = setPtrsClients.begin();
		delete* iter;

		setPtrsClients.erase(iter);
	}
}
//---------------------------------------------------------
void ClientList::insertClient(Client* ptrT)
{
	setPtrsClients.push_back(ptrT); // ������� ������ ������� � ������
}
//---------------------------------------------------------
string ClientList::getphNum(string tName) // �������� ����� �������� �� ����� �������
{
	string phoneNo;
	iter = setPtrsClients.begin();
	while (iter != setPtrsClients.end())
	{ // ����� ������� � ������ (������� � ������� ������� ����� ��������)
		phoneNo = (*iter)->getPhoneNumber();
		if (tName == ((*iter)->getName())) // ���������� �� ������ �
		{
			// ���� ������������ ���� ��������� - ������,
			//���� ������ �� ���� ������� ������� � ������ ��������, � ���� ������
			return phoneNo; // ���������� ����� ��������
		}
		iter++;
	}
	return string(); // ���� ��� - ���������� ������ ������
}
//--------------------------------------------------------

void ClientList::display() // ����� ������ ��������
{
	cout << "\n����� ��������\t��� �������\n-------------------\n";
	if (setPtrsClients.empty()) // ���� ������ �������� ����
		cout << "***��� ��������***\n" << endl; // ������� ������, ��� �� ����)
	else
	{
		iter = setPtrsClients.begin();
		while (iter != setPtrsClients.end()) // ������������� ���� ��������
		{
			cout << (*iter)->getPhoneNumber() << " || " << (*iter)->getName() << endl;
			*iter++;
		}
	}
}
//����� ClientList.cpp