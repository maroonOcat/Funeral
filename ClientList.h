//ClientList.h
#pragma once

using namespace std;
//����� ClientList
//����� ClientList � ������ ���� ��������.
//�� �������� ��������� ���������� �� ����� Client � ��������� ��� ��� ������
class ClientList
{
private:
	// ���������� ��������� �� ��������
	list <Client*> setPtrsClients; // ��������� �� ����� ��������
	list <Client*>::iterator iter; //��������
public:
	~ClientList(); // ���������� (�������� ��������)
	void insertClient(Client*); // �������� ������� � ������
	string getphNum(string); // ���������� ����� ��������
	void display(); // ����� ������ ��������
};
//����� ClientList.h