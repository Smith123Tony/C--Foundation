//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//����һ��ѧ�����ͣ�����ͨ��ѧ�����ʹ���ѧ������(����)
//����ѧ��:����-����+�绰+�Ա�+����
//struct Stu
//{
//	//�ṹ��ĳ�Ա����
//	char name[20];//����
//	char tele[12];//�绰
//	char sex[10];//�Ա�
//	int age;//����
//}s4,s5,s6;//s4,s5,s6��Ϊȫ�ֱ���
//
//struct Stu s3;//s3Ϊȫ�ֱ���
//int main()
//{
//	//�����ṹ�����
//	struct Stu s1;//�ֲ�����
//	struct Stu s2;//�ֲ�����
//	return 0;
//}


//#include<stdio.h>
////�����ṹ������
//struct
//{
//	int a;
//	char b;
//}sa;
//struct
//{
//	int a;
//	char b;
//}* psa;//�ṹ��ָ��
//int main()
//{
//	psa = &sa;
//	return 0;
//}
//Ҳ����˵��Ȼ�������ṹ����ԵĽṹ���Աһģһ�������Ǳ�������Ϊ�����������Զ���������



//#include<stdio.h>
//struct Node
//{
//	int data;//4���ֽ�
//	struct Node* next;//struct Node*��һ��ָ�����ͣ�ռ4/8���ֽ�
//};
//int main()
//{
//
//	return 0;
//}



//#include<stdio.h>
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//
//}


//#include<stdio.h>
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct S s = { 'c',{55.6,50},100,3.14,"hello world" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//	return 0;
//}


//#include<stdio.h>
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//?
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//?
//	
//	return 0;
//}

//#include<stdio.h>
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	struct S4 s4;
//	printf("%d\n", sizeof(s4));
//	return 0;
//}


//#include<stdio.h>
//struct S
//{
//	char c;
//	int a;
//};
//int main()
//{
//
//	return 0;
//}

//#include<stdio.h>
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;//c1��c2����һ��Ļ��Ͳ����˷Ѻܶ�ռ�
//	char c2;
//	int i;
//};
//int main()
//{
//
//	return 0;
//}

//#include<stdio.h>
//struct  S
//{
//	char c1;
//	double d;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//16
//	return 0;
//}


//#include<stdio.h>
//#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}


//#include<stdio.h>
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S tmp)//ֵ����ʱ��tmp��s��һ����ʱ�������ı�tmp����Ӱ��s
//{
//	tmp.a = 100;
//	tmp.c = 'w';
//	tmp.d = 3.14;
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(s);//ֵ����
//	return 0;
//}

//#include<stdio.h>
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)//��ַ
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//void Print2(struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);//��ַ
//	Print1(s);
//	Print2(&s);
//	return 0;
//}


























































