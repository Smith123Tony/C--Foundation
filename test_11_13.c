#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxx";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//找到目的字符串中的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxx";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char* p1 = "qbcdef";
//	char* p2 = "asjix";
//	int ret = (strcmp(p1, p2));
//	printf("ret=%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char* p1 = "qbcdef";
//	char* p2 = "asjix";
//	if (strcmp(p1, p2) > 0)
//	{
//		printf("p1>p2\0");
//	}
//	else if (strcmp(p1, p2) < 0)
//	{
//		printf("p1<p2");
//	}
//	else
//		printf("p1==p2");
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		str1++;
//		str2++;
//	}
//	/*if (*str1 > *str2)
//		return 1;
//	else
//		return -1;*/
//	return(*str1 - *str2);//这种方式也可以
//}
//int main()
//{
//	char* p1 = "abcdefg";
//	char* p2 = "abczgujj";
//	int ret = my_strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "hello world";
//	strncpy(arr1, arr2, 4);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "cat";
//	strncpy(arr1, arr2, 6);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 8);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	const char* p1 = "abczef";
//	const char* p2 = "abctefh";
//	int ret = strncmp(p1, p2, 4);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//		printf("子串不存在\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

////strstr---查找字符串
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strstr(const char* p1,const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++, s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到子串
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("子串不存在\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}


#include<stdio.h>
int main()
{
	
	return 0;
}




































































































































































