#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用
//	//int* p2 = realloc(p, 80);
//	//if (p2 != NULL)
//	//{
//	//	p = p2;
//	//}
//
//	/*int* p = (int*)realloc(NULL, 40);*/
//
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//void test()
//{
//	////1.对NULL指针解引用操作
//	//int* p = malloc(40);
//	//if (p == NULL)
//	//{
//	//	printf("%s", strerrno(errno));
//	//}
//	////判断完成之后再继续使用
//	//*p = 10;//malloc函数一旦开辟失败，就有可能对空指针进行解引用
//}


//int main()
//{
//	//2.对动态开辟内存的越界访问
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	//越界
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}



////对非动态开辟内存使用free
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}


////使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//回收空间
//	free(p);
//	return 0;
//}


////对同一块动态内存的多次释放
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//使用
//	//释放
//	free(p);
//	//....
//	p = NULL;
//	free(p);//如果此时的p是空指针的话，我们不对它进行任何的操作
//	//这也是free函数的一个特点
//	return 0;
//}

//动态开辟内存忘记释放（内存泄漏）
//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//void GetMemory(char **p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	char* str = "abcdef";
//	printf("%s\n", str);
//	printf(str);
//	printf("abcdef");
//	return 0;
//}

















