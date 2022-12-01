#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = ADD(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//void test(int arr[])
//{
//
//}
//int a = 10;
//int main()
//{
//	int b = 20;
//	int arr[12] = { 1,2,3,4,5,6,7,8,9,10 };
//	test(arr);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int* p = 0x0012ff44;
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//	return 0;
//}


////调用堆栈
//#include<stdio.h>
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}


//调试实例
//一:求1！+2！+3！+......+n!;不考虑溢出。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


////实例二
//#include<stdio.h>
//int main()
//{
//	
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}


//#include<stdio.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<stdio.h>
////void my_strcpy(char* dest, char* src)
////{
////	while (*src != '\0')
////	{
////		*dest++ = *src++;
////		
////	}
////	*dest = *src;//拷贝\0
////}
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	/*if (src == NULL || dest == NULL)
//	{
//		return;
//	}*/
//	//断言
//	//assert中可以放一个表达式，表达式的结果如果为假，就报错，如果为真啥事也不发生
//	//assert其实在release版本中优化掉了
//	/*assert(src != NULL);
//	assert(dest != NULL);*/
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//void my_strcpy(char* dest, const char* src)//这里const修饰的是指针变量本身，但指针所指向的内容，可以通过指针来改变
//
////int num = 10;
////int* p = &num;
////int n = 1000;
////const修饰指针变量的时候
////1.const放在*的左边，const修饰的是指针所指向的内容，不能通过指针来改变量，不过通过指针来改变了；但是指针变量本身可以修改
//// const int* p=&num;
//// *p=20//err
//// p=&n;//ok
//// const int* p=&num;
////2.const放在*的右边，const修饰的指针变量本身，表示指针变量本身的内容不能够被修改，但是指针指向的内容，可以通过指针来修改
////int* const p=&num;
////*p=20;//ok
////p=&n;//err
//
//{
//	assert(dest && src);//断言指针的有效性。
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char* p = "hello";//p指向的常量字符串是不可以被修改的
//	my_strcpy(arr1, p);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);//断言指针的有效性。
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char* p = "hello";//p指向的常量字符串是不可以被修改的
//	//链式访问
//	//当我们把一个函数的返回值作为另外一个参数它就实现了链式访问
//	printf("%s\n", my_strcpy(arr1, p));
//	return 0;
//}

//#include<stdio.h>
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "helloworld";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//#include<stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	Test();
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int n = (++i) + (++i) + (++i);
//	printf("%d\n", n);
//	return 0;
//}
































































