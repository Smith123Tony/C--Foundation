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
//	//	       int( * cmp) (const void *e1, const void *e2)//cmp��һ������ָ�룬δ������ʱ��Ҫ��һ����ַ��ȥ
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
//int cmp_int(const void* e1, const void* e2)//�Ƚ���������ֵ�ĺ���
//{
//	//�Ƚ���������
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
//	//int* p = &a;//����p��������int*
//	////����û��ָ����Խ�������һ��Ԫ�صĵ�ַ��---void*
//	//void* pa = &a;//p��Ϊ�����͵�ָ��
//
//	//char ch = 'w';
//	//void* pc = &ch;//pcҲ�������͵�ָ��
//	////����void* ���Խ����������͵ĵ�ַ�����ǿ��԰������Ϊ����Ͱ
//
//	//int a = 10;
//	//void* pa = &a;
//	//*p = 0;//�Ƿ��ļ��Ѱַ
//	////��Ȼpa�������͵�ָ�룬��ô���Ƕ�����н�����������ʼ����ֽ��أ�
//	////����ֱ��ָ�����;��������Ƕ��������ʱ���Է��ʼ����ֽڡ�
//	////���Զ���void*ָ���ǲ��ܶ�����н����ò�����
//	
//	int a = 10;
//	void* pa = &a;
//	p++;//ָ�������мӼ�����ʱҲ����Ҫȷ�������͵�
//	//����ĳ�����Ͳſ��Խ��мӼ������Ĳ���
//	//����void*���͵�ָ���ǲ��ܽ���+-�����Ĳ���
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)//�Ƚ���������ֵ�ĺ���
//{
//	//�Ƚ���������
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
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp����
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
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp����
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
//int cmp_int(const void* e1, const void* e2)//�Ƚ���������ֵ�ĺ���
//{
//	//�Ƚ���������
//	return *(int*)e1 - *(int*)e2;
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
////ʵ��bubble_sort�����ĳ���Ա�����ǲ�֪��δ��������������͵�
////�ǳ���ԱҲ��֪�����Ƚϵ�����Ԫ�ص�����
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;//����֮��ָ����һ���ַ�
//		buf2++;//����֮��ָ����һ���ַ�
//	}
//}
//void bubble_sort(void* base, int sz, int width,int (*cmp)(void*,void*))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz-1; i++)
//	{
//		//ÿһ�˵Ķ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//void test5()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪�����������е�Ԫ��
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






































































































































