#define _CRT_SECURE_NO_WARNINGS 1
////�����ֵ
//#include<stdio.h>
////���庯��
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//������ʹ��
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}



//����
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(a, b);
//	return 0;
//}


////isalpha����ר���ж�һ���ַ��ǲ�����ĸ
////����ĸ�򷵻ط�0��ֵ��������ĸ�򷵻�0
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isalpha(ch))
//			printf("YES\n");
//		else
//			printf("NO\n");
//		getchar();//����\n
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	for (int i = 1; i <= 5; i++)
//	{
//		//�ȴ�ӡ�ո�
//		for (int j = 1; j <= 5-i; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 1; k <= i; k++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%4d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        printf("%d\n", 1 << n);
//    }
//    return 0;
//}





























