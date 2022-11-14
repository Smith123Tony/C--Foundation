#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcd@efg.hijk";
//	char* p = "@.";
//
//	char buf[1024] = { 0 };	
//	strcpy(buf, arr);
//	
//	char* ret=strtok(arr,p);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcd@efg.hijk";
//	char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	char* ret = NULL;
//
//	for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	char* str = strerror(errno);
//	printf("%s\n", str);
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	char ch1 = 'w';
//	char ch2 = 'W';
//
//	int ret1 = islower(ch1);
//	int ret2 = islower(ch2);
//
//	printf("ret1=%d\n", ret1);//2
//	printf("ret2=%d\n", ret2);//0
//	return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	char ch1 = '@';
//	char ch2 = '2';
//
//	int ret1 = isdigit(ch1);
//	int ret2 = isdigit(ch2);
//
//	printf("ret1=%d\n", ret1);
//	printf("ret2=%d\n", ret2);
//	return 0;
//}


//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	char ch1 = tolower('E');
//	char ch2 = tolower('e');
//
//	char ch3 = toupper('f');
//	char ch4 = toupper('F');
//
//	putchar(ch1);//e
//	putchar(ch2);//e
//	putchar(ch3);//F
//	putchar(ch4);//F
//	return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	int i = 0;
//	char arr[] = "I AM A STUDENT";
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int tmp = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - tmp;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//char* my_strncpy(char* dest, const char* src, size_t n)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (n&&(*dest++ = *src++))
//	{
//		n--;
//	}
//	if (n)
//	{
//		while (n--)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "i am a student";
//
//	printf("%s\n", my_strncpy(arr2, arr1, strlen(arr1)));
//	return 0;
//}














































































