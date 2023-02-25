#include "Manager.h"

void Manager::CreateFile(FILE* f, const char* pathP) {
	if (!fopen_s(&f, pathP, "w")) {
		printf("Файл успешно создан\n");
	}
	else printf("Ошибка создания\n");
	fclose(f);
}

void Manager::DeleteFile(FILE* f, const char* pathP) {
	printf("Удаление файла : ");
	if (-1 == remove(pathP))
		printf("Ошибка\n");
	else
		printf("Выполнено\n");
}

void Manager::RenameFile(FILE* f, const char* pathP) {
	char newpath[25] = "";
	cout<< "\nВведите новое имя файла \n"; cin.ignore(); gets_s(newpath, 24);
	printf("Переименование файла : ");
	// Переименование каталога
	if (-1 == rename(pathP, newpath))
		printf("Ошибка\n");
	else
		printf("Выполнено\n");
}

void Manager::MoveFile(FILE* f, const char* pathP) {
	char temp[1000]="";
	FILE* f2;
	char newpath[125];
	cout << "Tекущий путь файла " << pathP << "\nВведите новый путь файла \n"; cin.ignore(); gets_s(newpath, 124);
	if (!fopen_s(&f, pathP, "r"));
		fseek(f, 0, SEEK_END);
		long pos = ftell(f);
		if (pos == 0) {
			fclose(f);
			if (!fopen_s(&f2, newpath, "w"));
			fclose(f2);
		}
		fclose(f);
		if (pos != 0) {
			if (!fopen_s(&f, pathP, "r"));
			if (!fopen_s(&f2, newpath, "w"));
			while (!feof(f)) {
				fscanf_s(f, "%s", temp, sizeof(temp));
				printf("%s\n", temp);
				fprintf(f2, "%s ", temp, sizeof(temp));
			}
			fclose(f);
			fclose(f2);
		}
	if (-1 == remove(pathP))
		printf("Ошибка\n");
	else
		printf("Выполнено\n");
}

void Manager::PrintFile(FILE* f, const char* pathP) {
	char temp[1000] = "";
	if (!fopen_s(&f, pathP, "r")) {
		while (!feof(f))
		{
			fscanf_s(f, "%s", temp, sizeof(temp));
			printf("%s\n", temp);
		}
		fclose(f);
	}
	else printf("Ошибка файла не существует\n");

}
