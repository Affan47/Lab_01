#include "stdafx.h"
#define ctrl_z 26 
int _tmain(int argc, _TCHAR* argv[])
{
	FILE* fp;
	char string[20];
	fopen_s(&fp, "file_b3.txt", "r");
	if (fp == NULL) {
		perror("Error opening file");
		return(-1);
	}
	fgets(string, 20, fp);
	printf("%s", string);
	getchar();
	fclose(fp);
	return 0;
}