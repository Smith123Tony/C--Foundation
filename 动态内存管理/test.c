#define _CRT_SECURE_NO_WARNINGS 1
//��̬�ڴ����(1)	

#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>


////�䳤����
//int main()
//{
//	int arr[10];
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];//һ��������䳤���鴴�����Ժ�Ͳ��ܹ��ı��ˡ�
//	//�䳤���鲻��˵����ɴ��С�������ҿ���ͨ������ķ�ʽ�������û������������ȥ��
//}


//int main()
//{
//	//����40���ֽڣ��������10������
//	int* p = (int*)malloc(40);//�������40���ֽ������ڴ�����������
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���1-10
//	int i = 0;
//	/*
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}*/
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);//�ͷ�������ڴ�
//	p = NULL;
//	return 0;
//}


////malloc  calloc�����ڶ���������ռ�
////�ռ�ʹ�����Ҫ�ͷ�
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (NULL == p)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;//��ֹp��ΪҰָ��
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
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = 1;
//	}
//	//�����ˣ�����5�����͵Ŀռ�
//	int* ptr = (int*)realloc(p, 10 * sizeof(int));
//	if(ptr != NULL)
//	{
//		p = ptr;
//	}
//	//����ʹ��10������
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//
//	int* p = (int*)realloc(NULL, 40);//��ʱ��malloc(40);����,���ܾ��൱��malloc
//	return 0;
//}