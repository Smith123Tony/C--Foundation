#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int n;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);//最大算31的阶乘
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ret = 1;
//	int x = 0;
//	scanf("%d", &x);
//	int sum = 0;
//	int i = 0;
//	int n = 0;
//	for (n = 1; n <= x; n++)
//	{
//		ret = 1;
//		for (i=1;i <= n;i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("sum=%d\n", sum);//最大算到21   268040729
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	int x = 0;
//	scanf("%d", &x);
//	for (n = 1; n <= x; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("sum=%d", sum);      //最大算到20   268040729
//	return 0;
//}



//#include<stdio.h>
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	print(x);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));//8
//	printf("%d\n", sizeof(int*));//8
//	printf("%d\n", sizeof(short*));//8
//	printf("%d\n", sizeof(double*));//8
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pb = &a;
//	printf("%p\n", pa);//0000009F22EFF854
//	printf("%p\n", pb);//0000009F22EFF854
//	return 0;
//}

//指针类型的意义
//1.指针类型决定了指针在解引用操作的时候能够访问空间的大小(能操作几个字节)，例如int*的指针解引用时能访问4个字节，
//例如int*的指针解引用时能访问4个字节，char*的指针解引用时就只能访问一个字节


//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pb = &a;
//	printf("%p\n", pa); //00000028ACD7F544
//	printf("%p\n", pa + 1); //00000028ACD7F548
//		
//	printf("%p\n", pb); //00000028ACD7F544
//	printf("%p\n", pb + 1); //00000028ACD7F545
//	return 0;
//}
//意义2.指针类型决定了指针走一步能走多远(指针的步长)。
//int* p:   p+1->4  即一步四个字节
//double* p   p+1->8  即一步八个字节
//char* p   p+1->1  即一步一个字节

//总结:指针类型决定了指针向前或向后走一步有多大(距离)
//这也是为什么在数组的指针中，指针名+1就是找到了原数组的下一个元素

//#include<stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;//数组名为首元素的地址
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char* pa = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(pa + i));  //1 0 0 0 2 0 0 0 3 0
//	}
//}

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	char* pa = arr;
	for (int i = 0; i < 10; i++)
	{
		*(pa + i) = 1;
	}
	return 0;
}














































