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
	cout << "<< Premium Loader >> | 2.0" << endl; // ��� ������ �� ���������
	cout << "Enter you key" << endl; // ������� ��� ����
	system("title Premium Loader 2.0 update "); // ��� ����
	cin >> num;
	if (num == 1337) { // ����
		cout << "Succes!" << endl; // �������
		ShellExecute(0, 0, L"https://google.com", 0, 0, SW_SHOW); // ��� FREE ������ ���� ����� �������� DLL (������ ������ �������)
		ShellExecute(0, 0, L"https://google.com", 0, 0, SW_SHOW); // ��� FREE ������ ���� ����� �������� �������� (������ ������ �������)
		ShellExecute(0, 0, L"https://pastebin.com/raw/9mktSE8e", 0, 0, SW_SHOW); // ������ �� ��������� ���� (����������� RAW pastebin ������)
		std::fstream fs;
		fs.close();
	}
	else {
		cout << "Error! Invalid key!" << endl; // ���������� ����
	}
	system("pause");
	return 0;
}