//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char* arr[5];//����һ��ָ������
//	p = &arr;//�������İ�p�����Ͷ������������p�����һ������ָ��
//	return 0;
//}


//������vs&����
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

//����ָ���ʹ��
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


//���鴫�κ�ָ�봫��


//void test1(int arr[])//����Ϊ������ʽ
//{}
//void test1(int arr[10])//����Ϊ������ʽ�������10д��д������ν
//{}
//void test1(int* arr)//����Ϊָ����ʽ
//{}
//void test2(int* arr[20])//20����ʡ��
//{}
//void test2(int **arr)//һ��ָ��ĵ�ַ���÷ŵ�����ָ����ȥ
//{}
//void test2()
//{}
//#include<stdio.h>
//int main()
//{
//	int arr1[10] = { 0 };
//	int* arr2[20] = { 0 };//ÿ��Ԫ�����Ͷ���int*,int*Ϊһ��ָ��
//	test1(arr1);
//	test2(arr2);
//	return 0;
//}

//void test1(int arr[3][5])
//{}
//void test2(int arr[][5])
//{}
////void test3(int arr[3][])//�п���ʡ�Ե����в�����ʡ��
////{}
////void test4(int arr[][])//���ж�ʡ�Ե�Ȼ��������
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
//		//��ָ��ָ��ķ�Χ��������a�ķ�Χʱ��p����Ұָ��
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
//	//������ǲ�֪���ø�ָ�����p��ʼ��˭ʱ���ǿ��Ը�����ʼ���ɿ�ָ��NULL
//	int* p = NULL;//NULL��������ʼ��ָ��ģ���������ָ�븳ֵ��
//	return 0;
//}


#include<stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;//��a��Ϊ20���������������ָ��ָ�������ط�ʱ������ָ��ָ����ǿ�ռ��Ѿ���������ϵͳʱ�����ǾͿ��԰����ָ����Ϊ��ָ�롣
	pa = NULL;
	return 0;
}

























