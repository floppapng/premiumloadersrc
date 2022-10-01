#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <windows.h>
#include <shellapi.h>
using namespace std;
int main()
{
	setlocale(0, "");
	double num;
	cout << "<< Premium Loader >> | 2.0" << endl; // Имя лоадер по английски
	cout << "Enter you key" << endl; // Введите ваш ключ
	system("title Premium Loader 2.0 update "); // Имя окна
	cin >> num;
	if (num == 1337) { // Ключ
		cout << "Succes!" << endl; // Успешно
		ShellExecute(0, 0, L"https://google.com", 0, 0, SW_SHOW); // Для FREE версии чита будет качаться DLL (ТОЛЬКО ПРЯМОЙ ССЫЛКОЙ)
		ShellExecute(0, 0, L"https://google.com", 0, 0, SW_SHOW); // Для FREE версии чита будет качаться ИНЖЕКТОР (ТОЛЬКО ПРЯМОЙ ССЫЛКОЙ)
		ShellExecute(0, 0, L"https://pastebin.com/raw/9mktSE8e", 0, 0, SW_SHOW); // Ссылка на создателя чита (Обязательно RAW pastebin пастой)
		std::fstream fs;
		fs.close();
	}
	else {
		cout << "Error! Invalid key!" << endl; // Невалидный ключ
	}
	system("pause");
	return 0;
}