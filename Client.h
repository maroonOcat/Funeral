//Client.h
#pragma once
#include <iostream>
#include <string>

using namespace std;

// ����� Client (�������)
//�� ������ ��� ������� � ��� ����� ��������.
class Client
{
private:

	string name; // ��� �������
	string phoneNumber; // ����� �������� �������

public:
	Client(string n, string cl);
	~Client();
	string getPhoneNumber(); //���������� ����� �������� �������
	string getName(); //���������� ��� �������
};
//����� Client.h