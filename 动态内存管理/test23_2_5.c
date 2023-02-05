#define _CRT_SECURE_NO_WARNINGS 1

//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;

//struct S
//{
//	int n;
//	int arr[0];//与上面那种写法的形式不一样，但都是一个意思
//};
//
//int main()
//{
//	struct S s;
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//struct S
//{
//	int n;
//	int arr[0];//与上面那种写法的形式不一样，但都是一个意思
//};
//int main()
//{
//	/*struct S s;
//	printf("%d\n", sizeof(s));*/
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//调整大小
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//两次释放(有先后顺序)
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}