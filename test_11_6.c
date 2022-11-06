#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char arr[] = { 'a','b','c' };
//	printf("%c\n", arr[0]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//void qsort(void* base,
//	//	       size_t num,
//	//	       size_t width, 
//	//	       int( * cmp) (const void *e1, const void *e2)//cmp是一个函数指针，未来传参时需要传一个地址过去
//	//           );
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",40},{"lisi",30},{"wangwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//int main()
//{
//	test3();
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)//比较两个整型值的函数
//{
//	//比较两个整型
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int a = 10;
//	//int* p = &a;//这里p的类型是int*
//	////那有没有指针可以接收任意一类元素的地址呢---void*
//	//void* pa = &a;//p则为无类型的指针
//
//	//char ch = 'w';
//	//void* pc = &ch;//pc也是无类型的指针
//	////所以void* 可以接收任意类型的地址，我们可以把它理解为万能桶
//
//	//int a = 10;
//	//void* pa = &a;
//	//*p = 0;//非法的间接寻址
//	////既然pa是无类型的指针，那么我们对其进行解引用是想访问几个字节呢，
//	////我们直到指针类型决定了我们对其解引用时可以访问几个字节。
//	////所以对于void*指针是不能对其进行解引用操作的
//	
//	int a = 10;
//	void* pa = &a;
//	p++;//指针对其进行加减整数时也是需要确认其类型的
//	//具体某种类型才可以进行加减整数的操作
//	//所以void*类型的指针是不能进行+-整数的操作
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)//比较两个整型值的函数
//{
//	//比较两个整型
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int cmp_float(const void* e1, const void* e2)
//{
//	return *(float*)e1 - *(float*)e2;
//}
//void test2()
//{
//	float f[5] = { 9.0,8.0,7.0,6.0,5.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	for (int j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//int main()
//{
//	test2();
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//void test2()
//{
//	float f[5] = { 9.0,8.0,7.0,6.0,5.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	for (int j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//int main()
//{
//	test2();
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串
//	//字符串比较不能直接用><=来比较，应该用strcmp函数
//
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test4()
//{
//	struct Stu s[3] = { {"zhangsan",40},{"lisi",30},{"wangwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//int main()
//{
//	test4();
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串
//	//字符串比较不能直接用><=来比较，应该用strcmp函数
//
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",40},{"lisi",30},{"wangwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//int main()
//{
//	test3();
//	return 0;
//}



//#include<stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void* e1, const void* e2)//比较两个整型值的函数
//{
//	//比较两个整型
//	return *(int*)e1 - *(int*)e2;
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
////实现bubble_sort函数的程序员，他是不知道未来排序的数据类型的
////那程序员也不知道待比较的两个元素的类型
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;//交换之后指向下一对字符
//		buf2++;//交换之后指向下一对字符
//	}
//}
//void bubble_sort(void* base, int sz, int width,int (*cmp)(void*,void*))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz-1; i++)
//	{
//		//每一趟的对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//void test5()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用bubble_sort的程序员一定知道自己排序的是什么数据
//	//就应该知道排序数组中的元素
//	printf("%d\n", sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test6()
//{
//	struct Stu s[3] = { {"zhangsan",40},{"lisi",30},{"wangwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]),cmp_stu_by_age );
//}
//int main()
//{
//	test5();
//	test6();
//	return 0;
//}






































































































































