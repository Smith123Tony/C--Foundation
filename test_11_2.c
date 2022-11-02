#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//此时数组arr就可以通过指针变量p来进行访问
//	//即数组是可以通过指针来访问
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//通过指针变量p把数组中的每个元素依次从0到9进行赋值
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));//通过指针变量p来把赋值后的数组中的元素进行打印
//	}
//	/*for (int i = 0; i < 10; i++)
//	{
//		printf("%p-------------%p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}
//

//二级指针
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	//printf("%d\n", **ppa);
//	**ppa = 20;
//	printf("%d ", **ppa);
//
//
//
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int arr1[10];//arr1是一个存放整型的数组
//	int* arr2[3] = { &a,&b,&c };//arr2是一个存放整型指针的数组
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//	return 0;
//}

//指针进阶3
//#include<stdio.h>
//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;//p是一个字符指针变量
//	const* p2 = "abcdef";//p2指向的是字符串中首字符的地址
//	
//	//指针数组-数组-数组中的元素是指针
//	int* p3[10];
//	char* p4[10];
//
//	//数组指针-是指针-指针指向的对象是数组-指针指向的是数组的地址
//	int(*p5)[5];
//	char(*p6)[5];
//
//	int arr[5];
//	int(*p7)[5] = &arr;//取出数组的地址，pa就是指向数组的一个指针
//	int(*parr3[])[5];//把parr3[]去掉之后，剩下的就是数组指向的对象，这里即数组parr中的每个元素数，数组里存在的数组指针
//
//	return 0;
//}


////数组传参、指针传参
////在写代码时，难免要把数组或者指针传给函数，那么函数的参数应该如何设计呢？
//#include<stdio.h>
//void test1(int arr[])//方式1接收数组arr1
//{}
//void test1(int arr[10])//方式2接收数组arr1,注意这里的10加不加没有任何意义，就算你改成5或者其它任何数都可以
//{}
//void test1(int *arr)//方式3接收数组arr3
//{}
//void test2(int* arr2[])//方式1接收数组arr2
//{}
//void test2(int **arr2)//方式2接收数组arr2（以二级指针形式接收数组arr2）
//{}                    //二级指针中存放的是一级指针变量的地址
//int main()
//{
//	int arr1[10] = { 0 };//数组arr1中存放着10个元素，每个元素的类型是int
//	int* arr2[10] = { 0 };//arr2是是一个数组，是一个指针数组，数组中有10个元素，每个元素的类型是int*
//	test1(arr1);
//	test2(arr2);
//
//	return 0;
//}


//二维数组传参

//以数组形式传参
#include<stdio.h>
int main()
{

	return 0;
}















































