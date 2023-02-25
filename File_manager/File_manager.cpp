#include <iostream>
#include <conio.h>
#include <io.h>
#include "Manager.h"
#include <stdio.h>
using namespace std;

/*
4. Перемещение файла из текущего каталога в указанный
пользователем каталог.
5. Вывод содержимого указанного пользователем файла
из текущего каталога на экран.
*/
void main_n() {
	int n = 0;
	Manager p;
	do
	{
		system("cls");
		cout << "\t\t\t Файловый менеджер\n"
			<< "1- Создать файл\n"
			<< "2- Удалить файл\n"
			<< "3- Переименовать файл\n"
			<< "4- Переместить файл в другой каталог\n"
			<< "5- Показать содержимое файла\n"
			<< "0- Выход\n";

		cin >> n;

		switch (n)
		{
		case 1:
			Manager::CreateFile(p.f, p.path);
			system("pause");
			break;
		case 2:
			Manager::DeleteFile(p.f, p.path);
			system("pause");
			break;
		case 3:
			Manager::RenameFile(p.f, p.path);
			system("pause");
			break;
		case 4:
			Manager::MoveFile(p.f, p.path);
			system("pause");
			break;
		case 5:
			Manager::PrintFile(p.f, p.path);
			system("pause");
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (n != 0);
}
int main()
{
	setlocale(LC_ALL, "");
	main_n();
	

}

