#define _CRT_SECURE_NO_WARNINGS 1
//动态内存管理(1)	

#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>


////变长数组
//int main()
//{
//	int arr[10];
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];//一旦把这个变长数组创建好以后就不能够改变了。
//	//变长数组不是说数组可大可小。而是我可以通过输入的方式，根据用户的需求输入进去。
//}


//int main()
//{
//	//申请40个字节，用来存放10个整型
//	int* p = (int*)malloc(40);//申请的这40个字节是在内存中是连续的
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//存放1-10
//	int i = 0;
//	/*
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}*/
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);//释放申请的内存
//	p = NULL;
//	return 0;
//}


////malloc  calloc都是在堆区上申请空间
////空间使用完后都要释放
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (NULL == p)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放
//	free(p);
//	p = NULL;//防止p变为野指针
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	//使用
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = 1;
//	}
//	//不够了，增加5个整型的空间
//	int* ptr = (int*)realloc(p, 10 * sizeof(int));
//	if(ptr != NULL)
//	{
//		p = ptr;
//	}
//	//继续使用10个整型
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//
//	int* p = (int*)realloc(NULL, 40);//此时跟malloc(40);类似,功能就相当于malloc
//	return 0;
//}