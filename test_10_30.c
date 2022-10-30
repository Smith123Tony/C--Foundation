//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char* arr[5];//这是一个指针数组
//	p = &arr;//请完整的把p的类型定义出来，即把p定义成一个数组指针
//	return 0;
//}


//数组名vs&数组
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr);
//	
//	/*printf("arr=%p\n", arr);
//	printf("&arr=%p\n", &arr);
//
//	printf("arr+1=%p\n", arr + 1);
//	printf("&arr+1=%p\n", &arr + 1);*/
//	return 0;
//}

//数组指针的使用
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}





//void print1(int arr[3][5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//		printf("%d ", *(arr+i));
//
//		printf("%d ", p[i]);
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}

//void print(int(*p)[5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(&arr, 3, 5);
//	return 0;
//}

//void print(int(*p)[5], int x, int y)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", (*(*(p + i)) + j));
//			printf("%d ", *(p[i] + j));
//			printf("%d ", (*(p + i))[j]);
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	return 0;
//}


//数组传参和指针传参


//void test1(int arr[])//参数为数组形式
//{}
//void test1(int arr[10])//参数为数组形式，这里的10写不写都无所谓
//{}
//void test1(int* arr)//参数为指针形式
//{}
//void test2(int* arr[20])//20可以省略
//{}
//void test2(int **arr)//一级指针的地址正好放到二级指针中去
//{}
//void test2()
//{}
//#include<stdio.h>
//int main()
//{
//	int arr1[10] = { 0 };
//	int* arr2[20] = { 0 };//每个元素类型都是int*,int*为一级指针
//	test1(arr1);
//	test2(arr2);
//	return 0;
//}

//void test1(int arr[3][5])
//{}
//void test2(int arr[][5])
//{}
////void test3(int arr[3][])//行可以省略但是列不可以省略
////{}
////void test4(int arr[][])//行列都省略当然不可以了
////{}
//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { 0 };
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        printf("%c\n", ch + 32);
//        getchar();
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    printf("     **\n");
//    printf("     **\n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("0%o 0X%X",1234,1234);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%15d", 0xABCDEF);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[10] = { 0 };
//	int* p = a;
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		//当指针指向的范围超过数组a的范围时，p就是野指针
//		*p++ = 1;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 20;
//	return &a;
//}
//#include<stdio.h>
//int main()
//{
//	int* p = test();
//	printf("%d", *p);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//如果我们不知道该给指针变量p初始化谁时我们可以给它初始化成空指针NULL
//	int* p = NULL;//NULL是用来初始化指针的，是用来给指针赋值的
//	return 0;
//}


#include<stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;//将a改为20后，我们如果不想让指针指向其它地方时，或者指针指向的那块空间已经还给操作系统时，我们就可以把这个指针置为空指针。
	pa = NULL;
	return 0;
}

























