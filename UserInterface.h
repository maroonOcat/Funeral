//UserInterface.h
#pragma once
// ����� UserInterface
//������� ����� ��� ������� ����������:
//���� ����� ���������� �������������� ����� � ����������.
class UserInterface
{
private:
	ClientList* ptrClientList;
	ClientInputScreen* ptrClientInputScreen;
	PayRecord* ptrPayRecord;
	SumInputScreen* ptrPayInputScreen;
	ExpenseRecord* ptrExpenseRecord;
	ExpenseInputScreen* ptrExpenseInputScreen;
	AnnualReport* ptrAnnualReport;
	char ch;
public:

	UserInterface();
	~UserInterface();
	void interact();
};
// ����� userInterface.h