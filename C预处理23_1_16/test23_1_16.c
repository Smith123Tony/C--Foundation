#define _CRT_SECURE_NO_WARNINGS 1
//预处理(2)


//#include<stdio.h>
//
//#define MAX 100   //这是我们自己定义的符号，并不是预定义符号
//
////预定义符号
//
//int main()
//{
//	/*printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);*/
//
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//
//#define MAX 100
//#define STR "hehe"
//#define reg register
//#define do_forever for(;;)
//int main()
//{
//	//reg int a;//等价于register int a;
//	//int max = MAX;
//	//printf("%d\n", max);
//	//printf("%s\n", STR);
//
//	do_forever;
//
//	return 0;
//}

//#include<stdio.h>
//
//#define do_forever for(;;)
//
//int main()
//
//{
//	for(;;)
//		return 0;
//	
//}





//预处理(3)
//#include<stdio.h>
//
//#define SQUARE(X) (X)*(X)
//
//int main()
//{
//	//int ret = SQUARE(5);
//	////int ret = 5*5;
//	//printf("%d\n", ret);
//
//	int ret = SQUARE(5 + 1);
//	
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//
//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//
//#define MAX 10
//
//int main()
//{
//
//	printf("MAX=%d\n", MAX);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//	printf("hello worle\n");
//	printf("hello ""world\n");
//	printf("hel""lo ""world\n");
//
//	return 0;
//}



//#
//#include<stdio.h>
//
//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//等价于printf("the value of ""a"" is %d\n", a);
//	PRINT(b);
//	//等价于printf("the value of ""b"" is %d\n", b);
//	return 0;
//}



//##
//#include<stdio.h>
//
//#define CAT(X,Y) X##Y
//
//int main()
//{
//
//	int apple100 = 2023;
//	//printf("%d\n",apple100);
//	printf("%d\n", CAT(apple, 100));
//	//printf("%d\n", apple##100);
//	//printf("%d\n", apple100);
//	return 0;
//}




































