#define _CRT_SECURE_NO_WARNINGS 1
////BC52 衡量人体胖瘦程度
//#include<stdio.h>
//int main()
//{
//    int w = 0;
//    int h = 0;
//    while (scanf("%d %d", &w, &h) != EOF)
//    {
//        double bmi = 0.0;
//        bmi = w / ((h / 100.0) * (h / 100.0));
//        if (bmi < 18.5)
//        {
//            printf("Underweight\n");
//        }
//        else if (bmi >= 18.5 && bmi <= 23.9)
//        {
//            printf("Normal\n");
//        }
//        else if (bmi > 23.9 && bmi <= 27.9)
//        {
//            printf("Overweight\n");
//        }
//        else
//        {
//            printf("Obese\n");
//        }
//    }
//    return 0;
//}
	

////BC54 获得月份天数
//#include<stdio.h>
//int main()
//{
//    int year = 0;
//    int month = 0;
//    while (scanf("%d%d", &year, &month) != EOF)
//    {
//        int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//        int day = arr[month - 1];
//        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//        {
//            if (month == 2)
//            {
//                day++;
//            }
//        }
//        printf("%d\n", day);
//    }
//    return 0;
//}


//BC55 简单计算器
//#include<stdio.h>
//int main()
//{
//    double n1 = 0;
//    double n2 = 0;
//    char ch = 0;
//    while (scanf("%lf%c%lf", &n1, &ch, &n2) != EOF)
//    {
//        switch (ch)
//        {
//        case '+':
//            printf("%.4lf%c%.4lf=%.4lf", n1, ch, n2, n1 + n2);
//            break;
//        case '-':
//            printf("%.4lf%c%.4lf=%.4lf", n1, ch, n2, n1 - n2);
//            break;
//        case '*':
//            printf("%.4lf%c%.4lf=%.4lf", n1, ch, n2, n1 * n2);
//            break;
//        case '/':
//            if (n2 == 0)
//            {
//                printf("Wrong!Division by zero!\n");
//            }
//            else
//            {
//                printf("%.4lf%c%.4lf=%.4lf", n1, ch, n2, n1 / n2);
//            }
//            break;
//        default:
//            printf("Invalid operation!\n");
//        }
//    }
//    return 0;
//}


////BC56 线段图案
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}


////BC57 正方形图案
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


////BC58 直角三角形图案
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 1; i <= n; i++)
//        {
//            int j = 0;
//            for (j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


////BC59 翻转直角三角形图案
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 1; i <= n; i++)
//        {
//            int j = 0;
//            for (j = 1; j <= n + 1 - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = n; i >= 1; i--)
//		{
//			int j = 0;
//			for (j=i;j>=1;j--)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


////BC60 带空格直角三角形图案
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 1; i <= n; i++)
//        {
//            int j = 0;
//            for (j = 1; j <= n - i; j++)
//            {
//                printf("  ");
//            }
//            for (j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



////BC61 金字塔图案
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        //打印n行
//        for (i = 1; i <= n; i++)
//        {
//            int j = 0;
//            //打印空格
//            for (j = 1; j <= n - i; j++)
//            {
//                printf(" ");
//            }
//            //打印*
//            for (j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}












































































































































































































































