#define _CRT_SECURE_NO_WARNINGS 1
//C语言-文件操作(4-2)

////fseek
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//定位文件指针
//	fseek(pf, 2, SEEK_CUR);
//	//读取文件
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
//	//定位文件指针
//	fseek(pf, -2, SEEK_END);
//	//读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//C语言-文件操作(5)


////fseek
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int pos = ftell(pf);//ftell返回文件指针相对于起始位值的偏移量
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
//	//EOF - end of file - 文件结束标志
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
//	//sterror - 把错误码对应的错误信息的字符串地址返回
//	//printf("%s\n", strerror(erron));
//
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("hehe");
//		return 0;
//	}
//	//读文件
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int c;//注意:int，非char，要求处理EOF
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		perror("File opening failed");
//		return -1;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(pf)) != EOF)
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束的
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


////二进制文件的例子
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
//	FILE* pf = fopen("test.txt", "wb");//必须用二进制格式
//	fwrite(a, sizeof(*a), SIZE, pf);//写double的数组
//	fclose(pf);
//
//	pf = fopen("test.txt", "rb");
//	//读double的数组
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






































































