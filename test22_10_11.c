//输入代码，将三个数从大到小输出
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;//记录一共有多少个闰年
//	for (year = 100; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("范围内闰年由%d年", count);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 2000; year <= 2300; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if(year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("范围内的闰年有%d年", count);
//	return 0;
//}


//输出一定范围内3的倍数
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("范围内有%d个数是3的倍数", count);
//	return 0;
//}


//打印乘法表
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//猜数游戏
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>//调用srand()
//#include<time.h>//调用time
//void menu()  //游戏初始菜单
//{
//	printf("***************************\n");
//	printf("****  1.play   0.exit  ****\n");
//	printf("***************************\n");
//}
//void game()
//{
//	int ret = 0;    //time_t本质是一个长整形
//	int guess = 0;//接受自己猜的数字
//	ret = rand()%100+1;   //生成1到100之间的随机数
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("你猜大了\n");
//		}
//		else if(guess < ret)
//		{
//			printf("你猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//}
////时间戳是一个差值，当前时间在不断变化
//int main()
//{
//	int input = 1;
//	srand((unsigned int)time(NULL));  //只需要设置一次起点就可以
//	do
//	{
//		menu();         //游戏菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//进入猜字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//				break;
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
//again:
//	printf("呵呵");
//	goto again;
//	return 0;
//}

























