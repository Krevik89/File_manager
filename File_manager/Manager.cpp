#include "Manager.h"

void Manager::CreateFile(FILE* f, const char* pathP) {
	if (!fopen_s(&f, pathP, "w")) {
		printf("���� ������� ������\n");
	}
	else printf("������ ��������\n");
	fclose(f);
}

void Manager::DeleteFile(FILE* f, const char* pathP) {
	printf("�������� ����� : ");
	if (-1 == remove(pathP))
		printf("������\n");
	else
		printf("���������\n");
}

void Manager::RenameFile(FILE* f, const char* pathP) {
	char newpath[25] = "";
	cout<< "\n������� ����� ��� ����� \n"; cin.ignore(); gets_s(newpath, 24);
	printf("�������������� ����� : ");
	// �������������� ��������
	if (-1 == rename(pathP, newpath))
		printf("������\n");
	else
		printf("���������\n");
}

void Manager::MoveFile(FILE* f, const char* pathP) {
	char temp[1000]="";
	FILE* f2;
	char newpath[125];
	cout << "T������ ���� ����� " << pathP << "\n������� ����� ���� ����� \n"; cin.ignore(); gets_s(newpath, 124);
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
		printf("������\n");
	else
		printf("���������\n");
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
	else printf("������ ����� �� ����������\n");

}
