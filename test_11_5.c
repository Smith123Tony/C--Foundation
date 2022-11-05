#define _CRT_SECURE_NO_WARNINGS 1
////函数指针数组实现转移表（计算器）
//#include<stdio.h>
////菜单
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
////一旦我们写好多好多代码的时候，那case语句就会越来越长，就会变的越来越繁杂，现在，我们用函数指针数组来改造优化一下代码


//#include<stdio.h>
////菜单
//void menu()
//{
//	printf("**********************\n");
//	printf("*****1,add  2.sub*****\n");
//	printf("*****3.mul  4.div*****\n");
//	printf("*****5.Xor  0.exit****\n");
//	printf("**********************\n");
//}
////函数实现
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}


//#include<stdio.h>
////菜单
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
//	printf("请输入两个操作数:>");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
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
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//#include<stdio.h>
////菜单
//void menu()
//{
//	printf("**********************\n");
//	printf("*****1,add  2.sub*****\n");
//	printf("*****3.mul  4.div*****\n");
//	printf("*****5.exit 0.exit****\n");
//	printf("**********************\n");
//}
////算法函数实现
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
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 5:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Xor(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int arr[10] = { 0 };
//	//int(*p)[10] = &arr;//取出数组的地址
//
//	//int (*pfArr[4])(int, int);//pfArr是一个数组---函数指针的数组
//	////pfArr既然也是一个数组，那我们就可以拿出它的地址
//	////我们可以拿指针来指向pfArr这个数组，那这个指针就成为指向函数指针数组的指针
//	//int (*(*ppfArr)[4])(int, int) = &pfArr;
//	int(*pf)(int, int);//函数指针
//	int(*pfArr[4])(int, int);//函数指针数组
//	int(*(*pfArr)[4])(int, int);//指向函数指针数组的指针
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
//test(void (*p)(char*))//p指向的是print函数的地址
//{
//	printf("test\n");
//	p("bit");//这里的p就是在调用print这个函数，然后把"bit"这个字符串传到print函数中去
//}
//int main()
//{
//	test(print);
//	return 0;
//}






//#include<stdio.h>
//void BubbleSort(int arr[], int sz)
//{
//	//...具体就不展开写了
//}
//int main()
//{
//	//冒泡排序
//	//冒泡排序只能排序整型数组
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
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int* (*pa)[10] = &arr;
//	//函数指针
//	int (*pAdd)(int, int) = Add;//Add也可以换成&Add
//	//int sum = (*pAdd)(2, 3);//通过函数指针来调用Add这个函数的方式1
//	int sum = (pAdd)(2, 3);//通过函数指针来调用Add这个函数的方式2
//	printf("%d\n", sum);
//	//函数指针的数组
//	int (*pArr[5])(int, int);
//	//指向函数指针数组的指针
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
//	//打印结果
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}















































































