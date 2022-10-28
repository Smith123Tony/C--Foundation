#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(short*));
	return 0;*/
	int a = 0x11223344;
	char* pa = &a;
	*pa = 0;
	/*int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pc);*/
	return 0;
}