#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ��
//	//int* p2 = realloc(p, 80);
//	//if (p2 != NULL)
//	//{
//	//	p = p2;
//	//}
//
//	/*int* p = (int*)realloc(NULL, 40);*/
//
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//void test()
//{
//	////1.��NULLָ������ò���
//	//int* p = malloc(40);
//	//if (p == NULL)
//	//{
//	//	printf("%s", strerrno(errno));
//	//}
//	////�ж����֮���ټ���ʹ��
//	//*p = 10;//malloc����һ������ʧ�ܣ����п��ܶԿ�ָ����н�����
//}


//int main()
//{
//	//2.�Զ�̬�����ڴ��Խ�����
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	//Խ��
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}



////�ԷǶ�̬�����ڴ�ʹ��free
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}


////ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//���տռ�
//	free(p);
//	return 0;
//}


////��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//ʹ��
//	//�ͷ�
//	free(p);
//	//....
//	p = NULL;
//	free(p);//�����ʱ��p�ǿ�ָ��Ļ������ǲ����������κεĲ���
//	//��Ҳ��free������һ���ص�
//	return 0;
//}

//��̬�����ڴ������ͷţ��ڴ�й©��
//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//void GetMemory(char **p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	char* str = "abcdef";
//	printf("%s\n", str);
//	printf(str);
//	printf("abcdef");
//	return 0;
//}

















