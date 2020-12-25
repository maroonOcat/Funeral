//Header.h
//заголовочный файл содержит объявления классов и т.п. (к нему подключены все заголовочные файлы)

//#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>

#include "Client.h"
#include "ClientList.h"
#include "ClientInputScreen.h"
#include "PayRow.h"
#include "PayRecord.h"
#include "SumInputScreen.h"
#include "Expense.h"
#include "ExpenseRecord.h"
#include "ExpenseInputScreen.h"
#include "AnnualReport.h"
#include "UserInterface.h"

using namespace std;
// ГЛОБАЛЬНЫЕ МЕТОДЫ
void getaLine(string& inStr); // получение строки текста
char getaChar(); // получение символа
void checkDigit(int& x); //проверка, что введено число

//конец Header.h