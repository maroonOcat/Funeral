//ClientInputScreen.h
#pragma once
#include <iostream>

using namespace std;

//класс ClientInputScreen
//класс ClientInputScreen. Это класс, отвечающий за отображение «экрана»,
//куда пользователь может ввести данные о новом клиенте:
class ClientInputScreen

{
private:
	ClientList* ptrClientList;
	string tName;
	string clientPhone;
public:
	ClientInputScreen(ClientList* ptrTL) : ptrClientList(ptrTL)
	{
		/* тут пусто */
	}
	void setClient(); // добавить данные о клиенте
};
//конец ClientInputScreen.h