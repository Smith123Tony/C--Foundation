#define _CRT_SECURE_NO_WARNINGS 1
////err
//#include<stdio.h>
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d", a);
//}

////冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 4,5,6,3,7,2,8,1,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//进行排序
//	bubble_sort(arr, sz);
//	//打印数据
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//把数组初始化为0
//	Print(arr, sz);//打印
//	Reverse(arr,sz);//实现数组逆置
//	Print(arr, sz);//打印
//	return 0;
//}

////交换数组
// 通过创建临时变量的方式
//#include<stdio.h>
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 6,7,8,9,10 };
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//#include<stdio.h>
//int i;//全局变量-不初始化-默认是0
//int main()
//{
//	i--;
//	if (i > sizeof(i))//sizeof()-计算变量/类型所占内存的大小
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0.0;
//	scanf("%d %d", &n, &k);
//	ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}

////写一个递归函数Digitsum(n),输入一个非负整数，返回组成它的数字之和。
//#include<stdio.h>
//int Digitsum(n)
//{
//	if (n > 9)
//	{
//		return Digitsum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = Digitsum(n);
//	printf("%d", sum);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//void reverse_string(char arr[])
//{
//	int l = 0;
//	int r = strlen(arr) - 1;
//	while (l < r)
//	{
//		char tmp = arr[l];
//		arr[l] = arr[r];
//		arr[r] = tmp;
//		l++;
//		r--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int Strlen(char *str)
//{
//	int count = 0;
//	while ((*str) != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char *str)
//{
//	int l = 0;
//	int r = Strlen(str) - 1;
//	while (l < r)
//	{
//		char tmp = *(str + l);//char tmp = str[l];
//		*(str + l) = *(str + r);//str[l]=str[r];
//		*(str + r) = tmp;//str[r]=tmp;
//		l++;
//		r--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}




//#include<stdio.h>
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_bit_one(n);
//	printf("%d", count);
//	return 0;
//}


////求二进制位中不同位的个数
//#include<stdio.h>
//int get_diff_bit(m, n)
//{
//	int tmp = m ^ n;
//	return count_bit_one(tmp);
//}
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("%d", count);
//	return 0;
//}



////12.打印二进制中的奇数和偶数位。
//#include<stdio.h>
//void print(int n)
//{
//	int i = 0;
//	printf("奇数位:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n偶数位:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//13.交换两个变量（不创建临时变量）
////法一:按位异或
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	m = m ^ n;
//	n = m ^ n;
//	m = m ^ n;
//	printf("%d %d", m, n);
//	return 0;
//}



////写一个函数打印arr数组的内容，不使用下标，使用指针。
//#include<stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}



////函数判断素数
//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	int i = 2;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



////实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定。
//#include<stdio.h>
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}






















