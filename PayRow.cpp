//PayRow.cpp
#include "stdafx.h"
#include "Header.h"
//������ ������ PayRow//

PayRow::PayRow(string an) : clName() //�����������
{ //����������� � ����� ����������

}
//-------------------------------------------------------�
void PayRow::setPay(string cl, string ph, int m, float am, int serv) // ������ ������ �� ����� m, ����� - am
{
	//������������ ����������
	pay = am;
	clName = cl;
	month = m;
	service = serv;
}
//-------------------------------------------------------�

string PayRow::getName() // ������ ������ ����� �������
{
	return clName;
}
//-------------------------------------------------------�
float PayRow::getPayNo() //������ ������ �������
{
	return pay;
}
//----------------------------------------------------------�
int PayRow::getMonth() //������ ������ ������
{
	return (month + 1); //+1 ��-�� ��������� �����: ��������� � 0
}
//-----------------------------------------------------------�
string PayRow::getService() //������ ������ ������
{
	switch (service)
	{
	case 1:
		return "���������� ���������";
		break;
	case 2:
		return "������� ����� ";
		break;
	case 3:
		return "����� ������ ";
		break;
	case 4:
		return "������ ���������� ";
		break;
	default:
		return "������ ";
		break;
	}
}
//����� PayRow.cpp