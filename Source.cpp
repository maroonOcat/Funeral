//Source.cpp
#include "stdafx.h"
#include "Header.h"
void getaLine(string& inStr) // ��������� ������ ������
{
	char temp[21];
	cin.get(temp, 20, '\n');
	cin.ignore(20, '\n'); //����� ������������ �������� � ������ ����������
	inStr = temp;
}
//-------------------------------------------------------�
char getaChar() // ��������� �������
{
	char ch = cin.get();
	cin.ignore(80, '\n'); //����� ������������ �������� � ������ ����������
	return ch;
}

void checkDigit(int& x) //�������� �� ���� ������ �����, ����� ��������� �� ��������
{
	cin >> x;
	while (cin.fail()) {
		cout << "������� �����!" << std::endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> x;
	}
}
//����� Source.cpp