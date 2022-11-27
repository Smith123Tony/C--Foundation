#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//struct S
//{
//	int a : 2;//a只需要占2个比特位
//	int b : 5;//b只需要占5个比特位
//	int c : 10;//c只需要占10个比特位
//	int d : 30;//d只需要占30个比特位
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}


//#include<stdio.h>
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

////#include<stdio.h>
//#define RED 0
//#define GREEN 1
//#define BLUE 2
////int main()
////{
////	int color = RED;
////	return 0;
////}
//
//
//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}

//enum Day//声明
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};

//#include<stdio.h>
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//printf("%d %d %d\n", RED, GREEN, BLUE);
//	//printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	//enum Color c = BLUE;
//
//	enum Color c = 2;
//	return 0;
//}

//#include<stdio.h>
////联合类型的声明
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	//联合定义的变量
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int check_sys()
//{
//	union Un {
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1是小端
//	//返回0则是大端
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//#include<stdio.h>
//union Un
//{
//	int a;
//	char arr[5];
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}

//
////位段
//#include<stdio.h>
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 6;
//};
//int main()
//{
//	struct S s = { 0 };
//	{
//		s.a = 10;
//		s.b = 20;
//		s.c = 3;
//		s.d = 4;
//	}
//	return 0;
//}




























































































































