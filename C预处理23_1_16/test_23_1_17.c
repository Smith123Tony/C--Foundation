#define _CRT_SECURE_NO_WARNINGS 1
//预处理(4)


//#include<stdio.h>
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	//试着尝试猜想一下结果
//	int max = MAX(a++, b++);
//	//int max = ((a++) > (b++) ? (a++) : (b++));
//
//	printf("max=%d\n", max);
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//#include<stdio.h>
//
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);//函数
//	max = MAX(a, b);//宏
//	return 0;
//}


//#include<stdio.h>
//int Max1(int x, int y)
//{
//	return x > y ? x : y;
//}
//float Max2(float x, float y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 30.0f;
//	float d = 40.0f;
//
//	int max1 = Max1(a, b);
//	float max2 = Max2(c, d);
//
//	printf("max1=%d\n", max1);
//	printf("max2=%f\n", max2);
//	return 0;
//}




//#include<stdio.h>
//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 30.0f;
//	float d = 40.0f;
//	int max1 = MAX(a, b);
//	float max2 = MAX(c, d);
//	float max2 = c > d ? c : d;
//	printf("max1=%d\n", max1);
//	printf("max2=%f\n", max2);
//	return 0;
//}



//#include<stdio.h>
//
//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//
//	printf("ret=%d\n", ret);
//
//	return 0;
//}




//#include<stdio.h>
//
//#define MALLOC(num,type) (type*)(num*sizeof(type))
//
//int main()
//{
//	int* p = MALLOC(10, int);
//	//int* p = (int*)malloc(10 * sizeof(int));
//	return 0;
//}



//错误举例
//#include<stdio.h>
//
//#define MAX 100
//
//int main()
//{
//	printf("MAX=%d\n", MAX);
//
//#undef MAX
//	printf("MAX=%d\n", MAX);
//	return 0;
//}




//预处理(5)
//#include<stdio.h>
//int main()
//{
//
//	int arr[SZ] = { 0 };
//	int i = 0;
//	for (i = 0; i < SZ; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < SZ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//#include<stdio.h>
//
//#define DEBUG   //只要定义过就行，不给值也可以
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG                 //如果DEBUG被定义过，那么printf("%d ", arr[i]);这个语句就参与编译，否则不参与。这就是条件编译
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1                //此时下面的语句参与编译
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//#if 1==1
//	printf("haha\n");
//#elif 2==1
//	printf("hehe\n");
//#else
//	printf("嘿嘿\n");
//#endif
//
//	return 0;
//}


//#include<stdio.h>
//
//#define DEBUG 0
//int main()
//{
//#if defined(DEBUG)
//	printf("hehe\n");
//#endif
//	return 0;
//}


//#include<stdio.h>
//#define DEBUG 0
//int main()
//{
//#ifdef DEBUG
//	printf("hehe\n");
//#endif
//
//	return 0;
//}


#include<stdio.h>
#define DEBUG 0
int main()
{
#if !defined(DEBUG)
	printf("hehe\n");
#endif

	return 0;
}

















