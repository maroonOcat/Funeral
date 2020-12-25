//ClientList.h
#pragma once

using namespace std;
//класс ClientList
//класс ClientList — список всех клиентов.
//Он содержит множество указателей на класс Client и оперирует ими при выводе
class ClientList
{
private:
	// установить указатели на клиентов
	list <Client*> setPtrsClients; // указатели на класс клиентов
	list <Client*>::iterator iter; //итератор
public:
	~ClientList(); // деструктор (удаление клиентов)
	void insertClient(Client*); // добавить клиента в список
	string getphNum(string); // возвращает номер телефона
	void display(); // вывод списка клиентов
};
//конец ClientList.h