#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("helloworld");
//	printf("len=%d\n", len);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int len = my_strlen("helloworld");
//	printf("len=%d\n", len);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef"))
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
//
//size_t strlen(const char *string)
////

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdefgh";
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//my_strcpy(char* dest, char* scr)
//{
//	assert(dest != NULL);
//	assert(scr != NULL);
//	while (*scr != '\0')
//	{
//		*dest = *scr;
//		dest++;
//		scr++;
//	}
//	*dest = *scr;//��ʱ��������\0
//}
//int main()
//{
//	char arr1[] = "abcdefgh";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* scr)
//{
//	assert(dest != NULL);
//	assert(scr != NULL);
//	char* ret = dest;//������������Ϊchar*
//	//����strָ����ַ�����destָ��Ŀռ�
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefgh";
//	char arr2[] = "hello";
//  //char arr2[] = { 'w','o','r' };����ʾ��
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}//�ô���ᵼ�³��������Խ�����
////Ŀ�ĵ�arr1Ҫ�㹻�������׷�ӹ�����arr2


//#include<stdio.h>
//void Fun1(int N)
//{
//	int count = 0;
//	int i = 0;
//	for ( i = 0; i < N; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 2 * N; j++)
//		{
//			count++;
//		}
//	}
//	int k = 0;
//	for (k = 0; k < 2 * N; k++)
//	{
//		count++;
//	}
//	int N = 10;
//	while (N--)
//	{
//		count++;
//	}
//	printf("%d\n", count);
//}

//void Fun2(int N)
//{
//	int count = 0;
//	int k = 0;
//	for (k = 0; k < 2 * N; k++)
//	{
//		count++;
//	}
//	int M = 10;
//	while (M--)
//	{
//		count++;
//	}
//	printf("%d\n", count);
//}

//void Fun3(int M, int N)
//{
//	int count = 0;
//	int k = 0;
//	for (k = 0; k < M; k++)
//	{
//		count++;
//	}
//	for (k = 0; k < N; k++)
//	{
//		count++;
//	}
//	printf("count=%d\n", count);
//}

//void Fun4(int N)
//{
//	int count = 0;
//	int k = 0;
//	for (k = 0; k < 100; k++)
//	{
//		count++;
//	}
//	printf("count=%d\n", count);
//}
//int main()
//{
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "world";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "world";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//

#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}



























