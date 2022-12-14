#define _CRT_SECURE_NO_WARNINGS 1
//文件操作(1)
#include<stdio.h>
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");//w是write的意思，而b是以二进制的形式去写这个文件
	fwrite(&a, 4, 1, pf);//以二进制的形式写到文件中
	//&a即数据来自于a的地址处
	//4即4个字节
	//1即写一个这样的数据
	//pf即放到pf维护的这个文件中去
	fclose(pf);//关闭文件
	pf = NULL;
	return 0;
}
