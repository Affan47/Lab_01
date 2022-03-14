#include "stdafx.h"
int _tmain(int argc, _TCHAR* argv[])
{
	// Wrting in Text Mode
	FILE* fp;
	char rec[] = "This is a normal String\n";
	fopen_s(&fp, "file_t.txt", "w");
	if (fp == NULL) {
		perror("Error opening file");
		return(-1);
	}
	fputs(rec, fp);
	fclose(fp);
	return 0;
}