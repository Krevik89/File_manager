#pragma once
#include <iostream>
#include <conio.h>
#include <io.h>
#include <stdio.h>
using namespace std;

class Manager
{
public:
	const char* path = "C:\\Users\\Krevi\\source\\repos\\File_manager\\1.txt";
	FILE* f, f1;
	
	static void CreateFile( FILE* f, const char* pathP);
	static void DeleteFile( FILE* f, const char* pathP);
	static void RenameFile( FILE* f, const char* pathP);
	static void MoveFile( FILE* f, const char* pathP);
	static void PrintFile( FILE* f, const char* pathP);
	

};

