#define _CRT_SECURE_NO_WARNINGS 1
////����ָ������ʵ��ת�Ʊ���������
//#include<stdio.h>
////�˵�
//void menu()
//{
//	printf("**********************\n");
//	printf("*****1,add  2.sub*****\n");
//	printf("*****3.mul  4.div*****\n");
//	printf("*****   0.exit   *****\n");
//	printf("**********************\n");
//}
//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x,int y)
//{
//	return x - y;
//}
//int Mul(int x,int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
////һ������д�ö�ö�����ʱ����case���ͻ�Խ��Խ�����ͻ���Խ��Խ���ӣ����ڣ������ú���ָ�������������Ż�һ�´���


//#include<stdio.h>
////�˵�
//void menu()
//{
//	printf("**********************\n");
//	printf("*****1,add  2.sub*****\n");
//	printf("*****3.mul  4.div*****\n");
//	printf("*****5.Xor  0.exit****\n");
//	printf("**********************\n");
//}
////����ʵ��
//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x,int y)
//{
//	return x - y;
//}
//int Mul(int x,int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*(pfArr[6]))(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}


//#include<stdio.h>
////�˵�
//void menu()
//{
//	printf("**********************\n");
//	printf("*****1,add  2.sub*****\n");
//	printf("*****3.mul  4.div*****\n");
//	printf("*****5.Xor  0.exit****\n");
//	printf("**********************\n");
//}
//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x,int y)
//{
//	return x - y;
//}
//int Mul(int x,int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//#include<stdio.h>
////�˵�
//void menu()
//{
//	printf("**********************\n");
//	printf("*****1,add  2.sub*****\n");
//	printf("*****3.mul  4.div*****\n");
//	printf("*****5.exit 0.exit****\n");
//	printf("**********************\n");
//}
////�㷨����ʵ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 5:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Xor(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int arr[10] = { 0 };
//	//int(*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	//int (*pfArr[4])(int, int);//pfArr��һ������---����ָ�������
//	////pfArr��ȻҲ��һ�����飬�����ǾͿ����ó����ĵ�ַ
//	////���ǿ�����ָ����ָ��pfArr������飬�����ָ��ͳ�Ϊָ����ָ�������ָ��
//	//int (*(*ppfArr)[4])(int, int) = &pfArr;
//	int(*pf)(int, int);//����ָ��
//	int(*pfArr[4])(int, int);//����ָ������
//	int(*(*pfArr)[4])(int, int);//ָ����ָ�������ָ��
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	float height = 0;
//	float weight = 0;
//	float ret = 0;
//	scanf("%f %f", &weight, &height);
//	height = height / 100;
//	ret = weight / (height * height);
//	printf("%.2f\n", ret);
//	return 0;
//}

//#include<stdio.h>
//void print(char *str)
//{
//	printf("hehe:%s", str);
//}
//test(void (*p)(char*))//pָ�����print�����ĵ�ַ
//{
//	printf("test\n");
//	p("bit");//�����p�����ڵ���print���������Ȼ���"bit"����ַ�������print������ȥ
//}
//int main()
//{
//	test(print);
//	return 0;
//}






//#include<stdio.h>
//void BubbleSort(int arr[], int sz)
//{
//	//...����Ͳ�չ��д��
//}
//int main()
//{
//	//ð������
//	//ð������ֻ��������������
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	return 0;
//}




//#include<stdio.h>
//int Add(int x, int y)
//{
//	return 0;
//}
//int main()
//{
//	//ָ������
//	int* arr[10];
//	//����ָ��
//	int* (*pa)[10] = &arr;
//	//����ָ��
//	int (*pAdd)(int, int) = Add;//AddҲ���Ի���&Add
//	//int sum = (*pAdd)(2, 3);//ͨ������ָ��������Add��������ķ�ʽ1
//	int sum = (pAdd)(2, 3);//ͨ������ָ��������Add��������ķ�ʽ2
//	printf("%d\n", sum);
//	//����ָ�������
//	int (*pArr[5])(int, int);
//	//ָ����ָ�������ָ��
//	int (*(*ppArr)[5])(int, int);
//	return 0;
//}


//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,7,8,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//	//��ӡ���
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}















































































