//PayRow.h
#pragma once
#include <string>
//����� PayRow
//�����, �������� ���� ��������� ������ ������� (���������� ������)
// ���� ������ ������� �������: ��� �������, ��� ������, ����� ������, �����
class PayRow
{
private:
	string clName; // ��� �������
	float pay = 0; // �����
	int service = 0; //��� ������ ��� ������� 1, 2, 3 ��� 4
	int month = 0; // ����� ������
public:
	PayRow(string); // ����������� � ����� ����������
	void setPay(string, string, int, float, int); // �������� �����
	string getName(); //������ �����
	float getPayNo(); //������ �����
	string getService(); //������ ������
	int getMonth(); //������ ������
};
//����� PayRow.h