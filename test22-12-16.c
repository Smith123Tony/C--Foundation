#define _CRT_SECURE_NO_WARNINGS 1
//C����-�ļ�����(4-2)

////fseek
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��λ�ļ�ָ��
//	fseek(pf, 2, SEEK_CUR);
//	//��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////fseek
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��λ�ļ�ָ��
//	fseek(pf, -2, SEEK_END);
//	//��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//C����-�ļ�����(5)


////fseek
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int pos = ftell(pf);//ftell�����ļ�ָ���������ʼλֵ��ƫ����
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////rewind
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//feof
//#include<stdio.h>
//int main()
//{
//	//EOF - end of file - �ļ�������־
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d", ch);
//	return 0;
//}



////perror
//#include<stdio.h>
//int main()
//{
//	//sterror - �Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
//	//printf("%s\n", strerror(erron));
//
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("hehe");
//		return 0;
//	}
//	//���ļ�
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int c;//ע��:int����char��Ҫ����EOF
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		perror("File opening failed");
//		return -1;
//	}
//	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	while ((c = fgetc(pf)) != EOF)
//	{
//		putchar(c);
//	}
//	//�ж���ʲôԭ�������
//	if (ferror(pf))
//	{
//		puts("I/0 error when reading");
//	}
//	else if (feof(pf))
//	{
//		puts("EOF of file reached successfully");
//	}
//	fclose(pf);
//	return 0;
//}


////�������ļ�������
//#include<stdio.h>
//enum
//{
//	SIZE = 5
//};
//int main()
//{
//	double a[SIZE] = { 1.0,2.0,3.0,4.0,5.0 };
//	double b = 0.0;
//	size_t ret_code = 0;
//	FILE* pf = fopen("test.txt", "wb");//�����ö����Ƹ�ʽ
//	fwrite(a, sizeof(*a), SIZE, pf);//дdouble������
//	fclose(pf);
//
//	pf = fopen("test.txt", "rb");
//	//��double������
//	while ((ret_code - fread(&b, sizeof(double), 1, pf)) >= 1)
//	{
//		printf("%lf\n", b);
//	}
//	if (feof(pf))
//	{
//		printf("EOF of file reached successfully");
//	}
//	else if (ferror(pf))
//	{
//		perror("Error reading test.txt");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}






































































