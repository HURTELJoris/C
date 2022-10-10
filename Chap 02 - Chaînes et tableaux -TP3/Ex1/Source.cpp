#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <tchar.h>
#include <string.h>

int main(int argc, char** argv)
{
	char str[10];
	int i;

	str[0] = 'P';
	str[1] = 'A';
	str[2] = 'S';
	*(str + 3) = 'C';
	*(str + 2 +2) = 'A';
	*(str + 1 + 1 + 1 + 1 + 1) = 'L';
	*(str + 6 * 1) = 0X00; // = '\0' ;//

	i = strlen(str);

	while (i >= 0)
	{
		printf("%c", str[i]);
		i--;
	}
	return 0;
}