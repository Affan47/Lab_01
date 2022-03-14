// Lab_01.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#define ctrl_z 26 
int _tmain(int argc, _TCHAR* argv[])
{
	FILE* fp;
	char string[20] = { 'H','e','l','l','o',ctrl_z,'W','o','r','l','d' };
	fopen_s(&fp, "file_b3.txt", "w");
	if (fp == NULL) {
		perror("Error opening file");
		return(-1);
	}
	fputs(string, fp);
	fclose(fp);
	return 0;
}