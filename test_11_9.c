#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<stdio.h>
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 30;
//	printf("a=%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//void swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int isprime(int n)
//{
//	for (int j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j==0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		//判断是否为素数，实则返回1，否则返回0
//		if (isprime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int is_leap_year(int n)
//{
//	//是闰年返回1，不是闰年返回0
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (is_leap_year(i))
//			printf("%d ", i);
//	}
//	return 0;
//}































