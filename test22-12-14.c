#define _CRT_SECURE_NO_WARNINGS 1
//�ļ�����(1)
#include<stdio.h>
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");//w��write����˼����b���Զ����Ƶ���ʽȥд����ļ�
	fwrite(&a, 4, 1, pf);//�Զ����Ƶ���ʽд���ļ���
	//&a������������a�ĵ�ַ��
	//4��4���ֽ�
	//1��дһ������������
	//pf���ŵ�pfά��������ļ���ȥ
	fclose(pf);//�ر��ļ�
	pf = NULL;
	return 0;
}
