#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;//找不到了
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 8;
//	//如果能找到就返回下标，找不到则返回-1
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("找到了\n");
//	else
//		printf("找到了，下标为%d", ret);
//	return 0;
//}


//#include<stdio.h>
//void Add(int* p)
//{
//	*p = *p + 1;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//#include<stdio.h>
//int Add(int n)
//{
//	return n + 1;
//}
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d\n", num);//1
//	
//	num = Add(num);
//	printf("%d\n", num);//2
//
//	num = Add(num);
//	printf("%d\n", num);//3
//
//	return 0;
//}




//#include<stdio.h>
//void new_line(void)
//{
//	printf("hehe\n");
//}
//void three_line(void)
//{
//	for (int i = 1; i <= 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}


//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//#include"add.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = add(a, b);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//int val;//全局变量不初始化时，默认初始化为0
//int main()
//{
//	printf("val=%d\n", val);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//#include<stdio.h>
//void Print(n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//	
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//写一个函数把num的每一位打印出来
//	Print(num);
//	return 0;
//}


//编写函数不允许创建临时变量，求字符串长度
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
//	char arr[] = "helloworld";
//	int len = my_strlen(arr);
//	printf("len=%d", len);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "helloworld";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}

//#include<stdio.h>
//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int fac(int n)
//{
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int ret = fac(x);
//	printf("ret=%d\n", ret);
//	return 0;
//}




//#include<stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("ret=%d", ret);
//	return 0;
//}


















































