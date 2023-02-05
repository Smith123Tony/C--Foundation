#define _CRT_SECURE_NO_WARNINGS 1
//动态内存管理(4)


//#include<stdio.h>
//
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//#include<stdio.h>
//int* test()
//{
//	static int a = 10;//栈区
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


//#include<stdio.h>
//int* test(void)
//{
//	int* ptr = malloc(100);//堆区
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	return 0;
//}



//int* f2(void)
//{
//	int* ptr;
//	*ptr = 10;
//	return ptr;
//}


//#include<stdio.h>
//
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void test()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//int globalVar = 1;
//static int staticGlobalVar = 1;
//
//void Test()
//{
//	static int staticVar = 1;
//
//	int localVar = 1;
//	int num1[10] = { 1,2,3,4 };
//
//	char char2[] = "abcd";
//	char* pChar3 = "abcd";
//
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);
//	int* ptr2 = (int*)calloc(4, sizeof(int));
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
//
//	free(ptr1);
//	free(ptr3);
//}