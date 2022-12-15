#define _CRT_SECURE_NO_WARNINGS 1
//C-文件操作(2)

////文件打开
//#include<stdio.h>
//int main()
//{
//	//打开文件test.txt
//	//相对路径(即相对于当前的代码在哪个路径底下)
//	//..表示上一级路径
//	//. 表示当前路径
//	//fopen("../test.txt","r");
//	//fopen("../../test.txt","r");
//	//fopen("test.txt","r");
//
//	//绝对路径的写法
//	//fopen("D:\\vs\code\\101\\C语言-文件操作\\C-文件操作（1）-22-12-1\\test.txt", "r");
//	return 0;
//}


//"r"只读
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
//	//来到这里就说明打开成功了
//	//读文件
//	
//	//关闭文件
//	fclose(pf);//pf的类型就是FILE*
//	//fclose就是把文件关闭掉，把FILE这个结构体所指向的文件关闭掉，把这个资源释放掉
//	//但是此时pf并没有置成空指针，对于fclose(pf)属于值传递，并没有改变pf
//	//所以我们就需要把pf置成空指针
//	pf = NULL;
//	return 0;
//}


//"w"(只写)
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
////	来到这里就说明打开成功了
////	读文件
////
////	关闭文件
////	fclose(pf);
////	pf = NULL;
////	return 0;
////}



//C语言-文件操作(3)

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
//	//写文件
//	fputc('h', pfwrite);
//	fputc('e', pfwrite);
//	fputc('l', pfwrite);
//	fputc('l', pfwrite);
//	fputc('o', pfwrite);
//	//关闭文件
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
//	//读文件
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
//	//关闭文件
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}


////标准输入输出流
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
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////fgets和fputs
//#include<stdio.h>
//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	
//	//fgets(buf, 1024, stdin);//从标准输入流读取
//	//fputs(buf, stdout);//从标准输出流读取
//
//	//上述写法等价于下面这种写法
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}


////fprintf:可以把格式化的信息放到文件中去
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
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	return 0;
//}


////fscanf:可以把信息从文件中拿出来
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
//	//格式化的输入数据
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
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);//从标准输入流-即从键盘上获取信息
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
//	//假设我们想把s里面的数据转换为字符串
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
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s", buf);
//	//从buf中读取格式化的数据到tmp
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
//	struct S s = { "张三",20,59 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
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
//	struct S s = { "张三",20,59 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
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
//	//struct S s = { "张三",20,59.5 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式读文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}