//SumInputScreen.h
#pragma once
//#include "ClientList.h"
//#include "PayRecord.h"
//����� SumInputScreen
//����� ��� ���������� �������
class SumInputScreen
{
private:
	ClientList* ptrClientList; // ������ ��������
	PayRecord* ptrPayRecord; // ������ ������� �� ������ �����
	string clientName; // ��� �������, ������� ������� ������
	float sumPaid = 0; // ����� �������
	int month = 0; // �� �����
	string phoneNo; // ����� ��������
	int service = 0; // ��� ������
public:
	SumInputScreen(ClientList* ptrTL, PayRecord* ptrRR) : ptrClientList(ptrTL),
		ptrPayRecord(ptrRR)
	{
		/*��� �����*/
	}
	void setPay(); // �������� ������ ����� ������ ��������
};
//����� SumInputScreen.h