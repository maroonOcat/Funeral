//UserInterface.h
#pragma once
// Класс UserInterface
//Главный класс для запуска приложения:
//этот класс определяет взаимодействие юзера с программой.
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
// конец userInterface.h