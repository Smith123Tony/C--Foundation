#define _CRT_SECURE_NO_WARNINGS 1
//C-�ļ�����(2)

////�ļ���
//#include<stdio.h>
//int main()
//{
//	//���ļ�test.txt
//	//���·��(������ڵ�ǰ�Ĵ������ĸ�·������)
//	//..��ʾ��һ��·��
//	//. ��ʾ��ǰ·��
//	//fopen("../test.txt","r");
//	//fopen("../../test.txt","r");
//	//fopen("test.txt","r");
//
//	//����·����д��
//	//fopen("D:\\vs\code\\101\\C����-�ļ�����\\C-�ļ�������1��-22-12-1\\test.txt", "r");
//	return 0;
//}


//"r"ֻ��
//#include<stdio.h>
//#include<errno.h>
//#include<string.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		{
//			printf("%s", strerror(errno));
//			return 0;
//		}
//	}
//	//���������˵���򿪳ɹ���
//	//���ļ�
//	
//	//�ر��ļ�
//	fclose(pf);//pf�����;���FILE*
//	//fclose���ǰ��ļ��رյ�����FILE����ṹ����ָ����ļ��رյ����������Դ�ͷŵ�
//	//���Ǵ�ʱpf��û���óɿ�ָ�룬����fclose(pf)����ֵ���ݣ���û�иı�pf
//	//�������Ǿ���Ҫ��pf�óɿ�ָ��
//	pf = NULL;
//	return 0;
//}


//"w"(ֻд)
////#include<stdio.h>
////#include<errno.h>
////#include<string.h>
////int main()
////{
////	FILE* pf = fopen("test.txt", "w");
////	if (pf == NULL)
////	{
////		{
////			printf("%s", strerror(errno));
////			return 0;
////		}
////	}
////	���������˵���򿪳ɹ���
////	���ļ�
////
////	�ر��ļ�
////	fclose(pf);
////	pf = NULL;
////	return 0;
////}



//C����-�ļ�����(3)

////fputc
//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	FILE* pfwrite = fopen("test.txt", "w");
//	if (pfwrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//д�ļ�
//	fputc('h', pfwrite);
//	fputc('e', pfwrite);
//	fputc('l', pfwrite);
//	fputc('l', pfwrite);
//	fputc('o', pfwrite);
//	//�ر��ļ�
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//}


////fgetc
//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	FILE* pfread = fopen("test.txt", "r");
//	if (pfread == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//���ļ�
//	int ch = fgetc(pfread);
//	printf("%c", ch);
//	ch = fgetc(pfread);
//	printf("%c", ch);
//	ch = fgetc(pfread);
//	printf("%c", ch);
//	ch = fgetc(pfread);
//	printf("%c", ch);
//	ch = fgetc(pfread);
//	printf("%c", ch);
//	//�ر��ļ�
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}


////��׼���������
//#include<stdio.h>
//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}


////fgets
//#include<stdio.h>
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



////puts
//#include<stdio.h>
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fgets(buf, 1024, pf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	puts(buf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////fputs
//#include<stdio.h>
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//д�ļ�
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////fgets��fputs
//#include<stdio.h>
//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	
//	//fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ
//	//fputs(buf, stdout);//�ӱ�׼�������ȡ
//
//	//����д���ȼ�����������д��
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}


////fprintf:���԰Ѹ�ʽ������Ϣ�ŵ��ļ���ȥ
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//#include<stdio.h>
//int main()
//{
//	struct S s = { 100,3.14f,"hello" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽд�ļ�
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	return 0;
//}


////fscanf:���԰���Ϣ���ļ����ó���
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//#include<stdio.h>
//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������������
//	fscanf(pf, "%d %f %s", &s.n, &s.score, s.arr);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//#include<stdio.h>
//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);//�ӱ�׼������-���Ӽ����ϻ�ȡ��Ϣ
//	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);
//	return 0;
//}


////sprintf
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//#include<stdio.h>
//int main()
//{
//	struct S s = { 100,3.14f,"abcdef" };
//	//�����������s���������ת��Ϊ�ַ���
//
//	char buf[1024] = { 0 };
//
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s", buf);
//	return 0;
//}


////sscanf
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//#include<stdio.h>
//int main()
//{
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//
//	char buf[1024] = { 0 };
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s", buf);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//#include<stdio.h>
//int main()
//{
//	struct S s = { "����",20,59 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////fwrite
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//#include<stdio.h>
//int main()
//{
//	struct S s = { "����",20,59 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////fread
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//#include<stdio.h>
//int main()
//{
//	//struct S s = { "����",20,59.5 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽ���ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}