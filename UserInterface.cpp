//UserInterface.cpp
#include "stdafx.h"
#include "Header.h"

//методы класса userInterface
UserInterface::UserInterface()
{
	ptrClientList = new ClientList;
	ptrPayRecord = new PayRecord;
	ptrExpenseRecord = new ExpenseRecord;
}
//-------------------------------------------------------—
UserInterface::~UserInterface()
{
	delete ptrClientList;
	delete ptrPayRecord;
	delete ptrExpenseRecord;
}
//-------------------------------------------------------—
void UserInterface::interact()
{
	while (true)
	{
		cout << " ВВЕСТИ ДАННЫЕ 'i', \n"
			<< " ВЫВЕСТИ ОТЧЕТ 'd', \n"
			<< " ВЫХОД 'q': \n";
		ch = getaChar();
		if (ch == 'i') // ввод данных
		{
			cout << " Добавить клиента 't', \n"
				<< " Записать проданную услугу/товар 'r', \n"
				<< " Добавить расходы 'e': \n";
			ch = getaChar();
			switch (ch)
			{
				//экраны ввода существуют только во время их
				//использования
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
			default: cout << "Неизвестная функция\n";
				break;
			} // конец секции switch
		} // конец условия if
		else if (ch == 'd') // вывод данных
		{
			cout << " вывести список клиентов 't', \n"
				<< " Вывести проданные тавары и услуги 'r' \n"
				<< " Вывести расходы 'e', \n"
				<< " Вывести годовой отчет 'a': \n";
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
			default: cout << "Такой функции нет\n";
				break;
			} // конец switch
		} // конец elseif
		else if (ch == 'q')
			return; // выход
		else
			cout << "Такой функции нет. Нажимайте только 'i', 'd' или 'q'\n";
	} // конец while
} // конец interact()
//конец UserInterface.cpp