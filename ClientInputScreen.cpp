//ClientInputScreen.cpp
#include "stdafx.h"
#include "Header.h"

//метод класса ClientInputScreen
void ClientInputScreen::setClient() // добавить данные о клиенте
{

	cout << "Введите имя клиента (Иванов И И): " << endl;
	getaLine(tName);
	cout << "Введите номер телефона клиента (89008753626): " << endl;
	getaLine(clientPhone);
	Client* ptrClient = new Client(tName, clientPhone); // создать клиента
	ptrClientList->insertClient(ptrClient); // занести в список клиентов
}
//конец ClientInputScreen.cpp