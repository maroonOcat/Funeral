//Source.cpp
#include "stdafx.h"
#include "Header.h"
void getaLine(string& inStr) // получение строки текста
{
	char temp[21];
	cin.get(temp, 20, '\n');
	cin.ignore(20, '\n'); //число пропускаемых символов и символ разделени€
	inStr = temp;
}
//-------------------------------------------------------Ч
char getaChar() // получение символа
{
	char ch = cin.get();
	cin.ignore(80, '\n'); //число пропускаемых символов и символ разделени€
	return ch;
}

void checkDigit(int& x) //проверка на ввод целого числа, чтобы программа не вылетала
{
	cin >> x;
	while (cin.fail()) {
		cout << "¬ведите число!" << std::endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> x;
	}
}
//конец Source.cpp