#define _CRT_SECURE_NO_WARNINGS 1

////��������(1)
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

////��������(2)
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

////��������(3)
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//#include<stdio.h>
//////��һ
////int NumberOf1(int n) {
////    // write code here
////    int count = 0;
////    while (n)
////    {
////        n = n & (n - 1);
////        count++;
////    }
////    return count;
////}
//////����
////int NumberOf1(unsigned n) {
////    // write code here
////    int count = 0;
////    while (n)
////    {
////        if (n % 2 == 1)
////        {
////            count++;
////        }
////        n = n / 2;
////    }
////    return count;;
////}
////��3
//int NumberOf1(int n) {
//    // write code here
//    int count = 0;
//    int i = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if (((n >> i) & 1) == 1)
//        {
//            count++;
//        }
//    }
//    return count;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = NumberOf1(n);
//    printf("%d\n", ret);
//}














