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
//	int* p = arr;//��ʱ����arr�Ϳ���ͨ��ָ�����p�����з���
//	//�������ǿ���ͨ��ָ��������
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
//		*(p + i) = i;//ͨ��ָ�����p�������е�ÿ��Ԫ�����δ�0��9���и�ֵ
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));//ͨ��ָ�����p���Ѹ�ֵ��������е�Ԫ�ؽ��д�ӡ
//	}
//	/*for (int i = 0; i < 10; i++)
//	{
//		printf("%p-------------%p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}
//

//����ָ��
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
//	int arr1[10];//arr1��һ��������͵�����
//	int* arr2[3] = { &a,&b,&c };//arr2��һ���������ָ�������
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//	return 0;
//}

//ָ�����3
//#include<stdio.h>
//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;//p��һ���ַ�ָ�����
//	const* p2 = "abcdef";//p2ָ������ַ��������ַ��ĵ�ַ
//	
//	//ָ������-����-�����е�Ԫ����ָ��
//	int* p3[10];
//	char* p4[10];
//
//	//����ָ��-��ָ��-ָ��ָ��Ķ���������-ָ��ָ���������ĵ�ַ
//	int(*p5)[5];
//	char(*p6)[5];
//
//	int arr[5];
//	int(*p7)[5] = &arr;//ȡ������ĵ�ַ��pa����ָ�������һ��ָ��
//	int(*parr3[])[5];//��parr3[]ȥ��֮��ʣ�µľ�������ָ��Ķ������Ｔ����parr�е�ÿ��Ԫ��������������ڵ�����ָ��
//
//	return 0;
//}


////���鴫�Ρ�ָ�봫��
////��д����ʱ������Ҫ���������ָ�봫����������ô�����Ĳ���Ӧ���������أ�
//#include<stdio.h>
//void test1(int arr[])//��ʽ1��������arr1
//{}
//void test1(int arr[10])//��ʽ2��������arr1,ע�������10�Ӳ���û���κ����壬������ĳ�5���������κ���������
//{}
//void test1(int *arr)//��ʽ3��������arr3
//{}
//void test2(int* arr2[])//��ʽ1��������arr2
//{}
//void test2(int **arr2)//��ʽ2��������arr2���Զ���ָ����ʽ��������arr2��
//{}                    //����ָ���д�ŵ���һ��ָ������ĵ�ַ
//int main()
//{
//	int arr1[10] = { 0 };//����arr1�д����10��Ԫ�أ�ÿ��Ԫ�ص�������int
//	int* arr2[10] = { 0 };//arr2����һ�����飬��һ��ָ�����飬��������10��Ԫ�أ�ÿ��Ԫ�ص�������int*
//	test1(arr1);
//	test2(arr2);
//
//	return 0;
//}


//��ά���鴫��

//��������ʽ����
#include<stdio.h>
int main()
{

	return 0;
}















































