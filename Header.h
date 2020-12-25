//Header.h
//������������ ���� �������� ���������� ������� � �.�. (� ���� ���������� ��� ������������ �����)

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
// ���������� ������
void getaLine(string& inStr); // ��������� ������ ������
char getaChar(); // ��������� �������
void checkDigit(int& x); //��������, ��� ������� �����

//����� Header.h