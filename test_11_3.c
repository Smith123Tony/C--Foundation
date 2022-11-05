#define _CRT_SECURE_NO_WARNINGS 1
//二维数组传参

//以数组形式传参
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
//void test3(int (*arr)[5])//由于数组名是一维数组的地址，故传过去之后应该对应第一行一维数组的地址
//{}
////void test4(int **arr)二级指针无论如何也不能接收数组的地址，故改写法错误
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
//	test(arr);//此时的数组名是首元素的地址，即int*的地址，所以我们拿二级指针来接收当然没有问题
//	return 0;
//}





////函数指针
////数组指针-指向数组的指针
////函数指针-指向函数的指针-存放函数地址的指针
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
//}//可以看出&函数名和函数名都是函数的地址

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
//}//这里也可以看出&函数名和函数名都是函数的地址


//如果我们把函数的地址存起来，请看:
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
//在这里pa是一个函数指针，我们直到，函数指针是一个指针，其指向的是一个函数的地址，其实加不加*在这里是无所谓的
//如果我们不加*的话，而是直接用pa也是可以的，它也很好理解：Add是一个函数名，它(Add)本身就代表着自己的地址，当我们解引用地址(即*pa)时，
//找到的依然是函数名(即Add本身)，而函数名(Add)本身就是代表着自己的地址，所以说无论我们加多少*对其进行解引用操作，都是没用的
//总之，函数名本身就是地址




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
//	//代码1
//	(*(void (*)())0)();
//	//代码2
//	void (*signal(int, void(*)(int)))(int);
//
//
//	return 0;
//}





























