#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//			printf("YES\n");
//		else
//			printf("NO\n");
//		getchar();
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0; i < 5; i++)//此时循环了5次
//	{
//		printf("%d ", *p);
//		p = p + 2;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	for (int i = 0; i < 5; i++)//此时循环了5次
//	{
//		printf("%d ", *p);
//		p = p - 2;
//	}
//	return 0;
//}

//#include<stdio.h>
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	printf("%d\n", &arr[0] - &arr[9]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d ", &arr[9] - &ch[0]);
//	return 0;
//}


































