#define _CRT_SECURE_NO_WARNINGS 1
//��ά���鴫��

//��������ʽ����
//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	if (x < 0)
//		y = 1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = -1;
//	printf("%d\n", y);
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a / b, a % b);
//	return 0;
//}


////void test1(int*arr)
////{}  err
////void test2(int* arr[5])
////{}  err
//void test3(int (*arr)[5])//������������һά����ĵ�ַ���ʴ���ȥ֮��Ӧ�ö�Ӧ��һ��һά����ĵ�ַ
//{}
////void test4(int **arr)����ָ���������Ҳ���ܽ�������ĵ�ַ���ʸ�д������
////{}
//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { 0 };
//	//test1(arr);  
//	//test2(arr);
//	test3(arr);
//	//test4(arr);
//	return 0;
//}




//#include<stdio.h>
//void print(int *p,int sz)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}

//#include<stdio.h>
//void test1(int* p1)
//{}
//void test2(char* p2)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(p1);
//	test1(&a);
//
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//	return 0;
//}

//#include<stdio.h>
//void test(int** ptr)
//{
//	printf("%d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//#include<stdio.h>
//void test(int **p)
//{}
//int main()
//{
//	int* arr[10];
//	test(arr);//��ʱ������������Ԫ�صĵ�ַ����int*�ĵ�ַ�����������ö���ָ�������յ�Ȼû������
//	return 0;
//}





////����ָ��
////����ָ��-ָ�������ָ��
////����ָ��-ָ������ָ��-��ź�����ַ��ָ��
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//	return 0;
//}//���Կ���&�������ͺ��������Ǻ����ĵ�ַ

//#include<stdio.h>
//void test()
//{
//	printf("hehe");
//}
//
//int main()
//{
//	printf("%p\n", test);//00007FF7451913D4
//	printf("%p\n", &test);//00007FF7451913D4
//	return 0;
//}//����Ҳ���Կ���&�������ͺ��������Ǻ����ĵ�ַ


//������ǰѺ����ĵ�ַ���������뿴:
//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}






//#include<stdio.h>
//int Add(int x, int y)
//{ 
//	return x + y;
//}
//int main()
//{
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));//5
//
//	//printf("%d\n", pa(2, 3));//5
//	//printf("%d\n", (*pa)(2, 3));//5 
//	//printf("%d\n", (**pa)(2, 3));//5
//	//printf("%d\n", (***pa)(2, 3));//5
//	//printf("%d\n", (****pa)(2, 3));//5
//	return 0;
//}
//������pa��һ������ָ�룬����ֱ��������ָ����һ��ָ�룬��ָ�����һ�������ĵ�ַ����ʵ�Ӳ���*������������ν��
//������ǲ���*�Ļ�������ֱ����paҲ�ǿ��Եģ���Ҳ�ܺ���⣺Add��һ������������(Add)����ʹ������Լ��ĵ�ַ�������ǽ����õ�ַ(��*pa)ʱ��
//�ҵ�����Ȼ�Ǻ�����(��Add����)����������(Add)������Ǵ������Լ��ĵ�ַ������˵�������ǼӶ���*������н����ò���������û�õ�
//��֮��������������ǵ�ַ




//#include<stdio.h>
//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello world");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//����1
//	(*(void (*)())0)();
//	//����2
//	void (*signal(int, void(*)(int)))(int);
//
//
//	return 0;
//}





























