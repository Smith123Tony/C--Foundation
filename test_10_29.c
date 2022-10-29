#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,7,6,5,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10 - 1 - i; j++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//转移表实现计算机
//函数指针数组
//void menu()
//{
//	printf("  1.add  2.sub  \n");
//	printf("  3.mul  4.div  \n");
//	printf("  5.xor  0.exit \n");
//}
//void add(int x, int y)
//{
//	return x + y;
//}
//void sub(int x, int y)
//{
//	return x - y;
//}
//void mul(int x, int y)
//{
//	return x * y;
//}
//void div(int x, int y)
//{
//	return x / y;
//}
//void xor (int x, int y)
//{
//	return x ^ y;
//}
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int(* pfArr[])(int,int) = {0,add,sub,mul,div,xor};
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d",&input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出");
//		}
//		else
//		{
//			printf("选择错误");
//		}
//	} while (input);
//	return 0;
//}



//指针进阶
//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdefg";
//	char* pf = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pf);//abcdefg
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char* p = "abcded";//"abcded"是一个常量字符串，指针p里存放的是这个常量字符串中字符'a'的地址
//	printf("%c\n", *p);
//	return 0;
//}//这里并不是把字符串中的内存赋给p,而是把这个常量字符串中的首字符'a'的地址存放到p中去


//#include<stdio.h>
//int main()
//{
//	char* p = "abcded";
//	printf("%s\n", p);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	char* p = "abcded";
//	printf("%c\n", p);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";
//	*p = "w";
//	return 0;//由于是常量字符串，所以不可被修改。这样做可能会使代码崩溃
//}

//最准确的做法是这样的:
//#include<stdio.h>
//int main()
//{
//	const char* p = "abcdef";  //const此时修饰的是*p,则指针变量p所指向的内容不可修改
//	printf("%s\n", p);
//	return 0;
//}






//指针数组
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	int* parr[4];//存放整型指针的数组--指针数组
//	char* pch[5];//存放字符指针的数组--字符数组
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[] = { &a,&b,&c,&d };
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	//那我们怎样通过指针数组来将数组arr1、arr2、arr3
//	//中的元素打印出来呢？请看
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	const char* p = "abcdef";//在这里"abcdef"是一个常量字符串
//	//字符指针变量中存放的是首字符'a'的地址。
//	//注意这里并不是把字符串的内容赋给p
//	printf("%c\n", *p);
//	printf("%s\n", p);//指针p中放的并不是字符串，而是字符串的首字符的地址
//	return 0;
//}

//面试题目
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	//题目一:这里打印的是123还是456呢？
//	if (arr1 == arr2)
//	{
//		printf("123");
//	}
//	else
//	{
//		printf("456");
//	}
//	//题目二:这里打印的是321还是654呢？
//	if (p1 == p2)
//	{
//		printf("321");
//	}
//	else
//	{
//		printf("654");
//	}
//	return 0;
//}

















































