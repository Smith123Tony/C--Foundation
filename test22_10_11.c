//������룬���������Ӵ�С���
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
//	int count = 0;//��¼һ���ж��ٸ�����
//	for (year = 100; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("��Χ��������%d��", count);
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
//	printf("��Χ�ڵ�������%d��", count);
//	return 0;
//}


//���һ����Χ��3�ı���
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
//	printf("��Χ����%d������3�ı���", count);
//	return 0;
//}


//��ӡ�˷���
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


//������Ϸ
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>//����srand()
//#include<time.h>//����time
//void menu()  //��Ϸ��ʼ�˵�
//{
//	printf("***************************\n");
//	printf("****  1.play   0.exit  ****\n");
//	printf("***************************\n");
//}
//void game()
//{
//	int ret = 0;    //time_t������һ��������
//	int guess = 0;//�����Լ��µ�����
//	ret = rand()%100+1;   //����1��100֮��������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("��´���\n");
//		}
//		else if(guess < ret)
//		{
//			printf("���С��\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
//			break;
//		}
//	}
//}
////ʱ�����һ����ֵ����ǰʱ���ڲ��ϱ仯
//int main()
//{
//	int input = 1;
//	srand((unsigned int)time(NULL));  //ֻ��Ҫ����һ�����Ϳ���
//	do
//	{
//		menu();         //��Ϸ�˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//���������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//				break;
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
//again:
//	printf("�Ǻ�");
//	goto again;
//	return 0;
//}

























