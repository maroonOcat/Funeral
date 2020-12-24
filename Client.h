//Client.h
#pragma once
#include <iostream>
#include <string>

using namespace std;

// класс Client (клиенты)
//ќн хранит им€ клиента и его номер телефона.
class Client
{
private:

	string name; // им€ клиента
	string phoneNumber; // номер телефона клиента

public:
	Client(string n, string cl);
	~Client();
	string getPhoneNumber(); //возвращает номер телефона клиента
	string getName(); //возвращает им€ клиента
};
//конец Client.h