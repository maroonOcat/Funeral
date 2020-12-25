// Main.cpp
#include "stdafx.h"
#include "Header.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>

int main()
{
	//Функция setlocale() задаёт локализацию программы.
	setlocale(LC_ALL, "rus");
	UserInterface theUserInterface;
	theUserInterface.interact();
	return 0;
}
//конец Main.cpp

