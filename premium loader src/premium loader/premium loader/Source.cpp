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
	cout << "<< Premium Loader >> | by floppa" << endl; // ��� ������ �� ���������
	cout << "Enter you key" << endl; // ������� ��� ����
	system("title Premium Loader "); // ��� ����
	cin >> num;
	if (num == 1337) { // ����
		cout << "Succes!" << endl; // �������
		ShellExecute(0, 0, L"https://google.com", 0, 0, SW_SHOW); // ��� FREE ������ ���� ����� �������� DLL (������ ������ �������)
		ShellExecute(0, 0, L"https://google.com", 0, 0, SW_SHOW); // ��� FREE ������ ���� ����� �������� �������� (������ ������ �������)
		std::fstream fs;
		fs.close();
	}
	else {
		cout << "Error! Invalid key!" << endl; // ���������� ����
	}
	system("pause");
	return 0;
}