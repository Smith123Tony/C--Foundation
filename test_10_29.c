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

//ת�Ʊ�ʵ�ּ����
//����ָ������
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
//		printf("��ѡ��:>");
//		scanf("%d",&input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�");
//		}
//		else
//		{
//			printf("ѡ�����");
//		}
//	} while (input);
//	return 0;
//}



//ָ�����
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
//	char* p = "abcded";//"abcded"��һ�������ַ�����ָ��p���ŵ�����������ַ������ַ�'a'�ĵ�ַ
//	printf("%c\n", *p);
//	return 0;
//}//���ﲢ���ǰ��ַ����е��ڴ渳��p,���ǰ���������ַ����е����ַ�'a'�ĵ�ַ��ŵ�p��ȥ


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
//	return 0;//�����ǳ����ַ��������Բ��ɱ��޸ġ����������ܻ�ʹ�������
//}

//��׼ȷ��������������:
//#include<stdio.h>
//int main()
//{
//	const char* p = "abcdef";  //const��ʱ���ε���*p,��ָ�����p��ָ������ݲ����޸�
//	printf("%s\n", p);
//	return 0;
//}






//ָ������
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	int* parr[4];//�������ָ�������--ָ������
//	char* pch[5];//����ַ�ָ�������--�ַ�����
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
//	//����������ͨ��ָ��������������arr1��arr2��arr3
//	//�е�Ԫ�ش�ӡ�����أ��뿴
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
//	const char* p = "abcdef";//������"abcdef"��һ�������ַ���
//	//�ַ�ָ������д�ŵ������ַ�'a'�ĵ�ַ��
//	//ע�����ﲢ���ǰ��ַ��������ݸ���p
//	printf("%c\n", *p);
//	printf("%s\n", p);//ָ��p�зŵĲ������ַ����������ַ��������ַ��ĵ�ַ
//	return 0;
//}

//������Ŀ
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	//��Ŀһ:�����ӡ����123����456�أ�
//	if (arr1 == arr2)
//	{
//		printf("123");
//	}
//	else
//	{
//		printf("456");
//	}
//	//��Ŀ��:�����ӡ����321����654�أ�
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

















































