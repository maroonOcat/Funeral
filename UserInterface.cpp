//UserInterface.cpp
#include "stdafx.h"
#include "Header.h"

//������ ������ userInterface
UserInterface::UserInterface()
{
	ptrClientList = new ClientList;
	ptrPayRecord = new PayRecord;
	ptrExpenseRecord = new ExpenseRecord;
}
//-------------------------------------------------------�
UserInterface::~UserInterface()
{
	delete ptrClientList;
	delete ptrPayRecord;
	delete ptrExpenseRecord;
}
//-------------------------------------------------------�
void UserInterface::interact()
{
	while (true)
	{
		cout << " ������ ������ 'i', \n"
			<< " ������� ����� 'd', \n"
			<< " ����� 'q': \n";
		ch = getaChar();
		if (ch == 'i') // ���� ������
		{
			cout << " �������� ������� 't', \n"
				<< " �������� ��������� ������/����� 'r', \n"
				<< " �������� ������� 'e': \n";
			ch = getaChar();
			switch (ch)
			{
				//������ ����� ���������� ������ �� ����� ��
				//�������������
			case 't': ptrClientInputScreen =
				new ClientInputScreen(ptrClientList);
				ptrClientInputScreen->setClient();
				delete ptrClientInputScreen;
				break;

			case 'r': ptrPayInputScreen =
				new SumInputScreen(ptrClientList, ptrPayRecord);
				ptrPayInputScreen->setPay();
				delete ptrPayInputScreen;
				break;
			case 'e': ptrExpenseInputScreen =
				new ExpenseInputScreen(ptrExpenseRecord);
				ptrExpenseInputScreen->setExpense();
				delete ptrExpenseInputScreen;
				break;
			default: cout << "����������� �������\n";
				break;
			} // ����� ������ switch
		} // ����� ������� if
		else if (ch == 'd') // ����� ������
		{
			cout << " ������� ������ �������� 't', \n"
				<< " ������� ��������� ������ � ������ 'r' \n"
				<< " ������� ������� 'e', \n"
				<< " ������� ������� ����� 'a': \n";
			ch = getaChar();
			switch (ch)
			{
			case 't': ptrClientList->display();
				break;
			case 'r': ptrPayRecord->display();
				break;
			case 'e': ptrExpenseRecord->display();
				break;
			case 'a':
				ptrAnnualReport = new AnnualReport(ptrPayRecord,
					ptrExpenseRecord);
				ptrAnnualReport->display();
				delete ptrAnnualReport;
				break;
			default: cout << "����� ������� ���\n";
				break;
			} // ����� switch
		} // ����� elseif
		else if (ch == 'q')
			return; // �����
		else
			cout << "����� ������� ���. ��������� ������ 'i', 'd' ��� 'q'\n";
	} // ����� while
} // ����� interact()
//����� UserInterface.cpp