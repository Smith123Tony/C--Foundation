#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<assert.h>

//long long Fac(size_t N)////计算阶乘递归Fac的时间复杂度
//{
//	if (N == 0)
//	{
//		return 1;//0!=1
//	}
//	else
//	{
//		return Fac(N - 1) * N;
//	}
//}

////计算斐波那契数列Fib的时间复杂度
//long long Fib(size_t N)
//{
//	if (N < 3)
//	{
//		return 1;
//	}
//	return Fib(N - 1) + Fib(N - 2);
//}

//void BubbleSort(int* a, int n)
//{
//	assert(a);
//	int i = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//				count = 1;
//			}
//		}
//		if (count == 0)
//		{
//			break;
//		}
//	}
//}

//int main()
//{
//	int arr[10] = { 6,5,7,4,8,3,9,2,10,1 };
//	BubbleSort(arr, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////单词分析
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	int count[26] = { 0 };
//	int i = 0;
//	int max = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		count[ch - 97]++;
//	}
//	for (i = 1; i < 26; i++)
//		if (count[i] > count[max])
//			max = i;
//	printf("%c\n%d", max + 'a', count[max]);
//	return 0;
//}


////成绩分析
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10000] = { 0 };
//	int i = 0;
//	int max = 0;
//	int min = 100;
//	int sum = 0;
//	double ave = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	ave = sum * 1.0 / n;
//	printf("%d\n%d\n%.2lf", max, min, ave);
//	return 0;
//}


////门牌制作
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 2020; i++)
//	{
//		int j = 0;
//		for (j = i; j > 0; j /= 10)
//		{
//			if (j % 10 == 2)
//				count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (i <= 9)
//		{
//			if (i == 2 || i == 0 || i == 1 || i == 9)
//			{
//				sum += i;
//			}
//		}
//		if (i >= 10 && i <= 99)
//		{
//			if (i % 10 == 2 || i % 10 == 0 || i % 10 == 1 || i % 10 == 9)
//				sum += i;
//			if (i / 10 == 2 || i / 10 == 0 || i / 10 == 1 || i / 10 == 9)
//				sum += i;
//		}
//		if (i >= 100 && i <= 999)
//		{
//			if (i % 10 == 2 || i % 10 == 0 || i % 10 == 1 || i % 10 == 9)
//				sum += i;
//			if (i / 10 % 10 == 2 || i / 10 % 10 == 0 || i / 10 % 10 == 1 || i / 10 % 10 == 9)
//				sum += i;
//			if (i / 100 == 2 || i / 100 == 0 || i / 100 == 1 || i / 100 == 9)
//				sum += i;
//		}
//		if (i >= 1000 && i <= 9999)
//		{
//			if (i % 10 == 2 || i % 10 == 0 || i % 10 == 1 || i % 10 == 9)
//				sum += i;
//			if (i / 10%10 == 2 || i / 10 % 10 == 0 || i / 10 % 10 == 1 || i / 10 % 10 == 9)
//				sum += i;
//			if (i / 100 % 10 == 2 || i / 100 % 10 == 0 || i / 100 % 10 == 1 || i / 100 % 10 == 9)
//				sum += i;
//			if (i / 1000 == 2 || i / 1000 == 0 || i / 1000 == 1 || i / 1000 == 9)
//				sum += i;
//		}
//		if (i == 10000)
//			sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

////特别数的和https://www.lanqiao.cn/problems/191/learning/?page=2&first_category_id=1&sort=students_count
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		j = i;
//		while (j)
//		{
//			if (j % 10 == 2 || j % 10 == 0 || j % 10 == 1 || j % 10 == 9)
//			{
//				sum += i;
//				break;
//			}
//			j /= 10;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}


////时间显示https://www.lanqiao.cn/problems/1452/learning/?page=2&first_category_id=1&sort=students_count&second_category_id=3
//#include<stdio.h>
//int main()
//{
//	long long n = 0;
//	int hour = 0;
//	int min = 0;
//	int m = 0;
//	scanf("%lld", &n);
//	n /= 1000;
//	m = n % 60;
//	n /= 60;
//	min = n % 60;
//	n /= 60;
//	hour = n % 24;;
//	printf("%02d:%02d:%02d", hour, min, m);
//	return 0;
//}

//复习二分查找(切记二分查找要求是有序)