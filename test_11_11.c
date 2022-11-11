#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int len1 = strlen("helloworld");

	char arr[] = { 'a','b','c' };
	int len2 = strlen(arr);
	printf("len1=%d\n", len1);
	printf("len2=%d\n", len2);
	return 0;
}