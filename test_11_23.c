//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//声明一个学生类型，是想通过学生类型创建学生变量(对象)
//描述学生:属性-名字+电话+性别+年龄
//struct Stu
//{
//	//结构体的成员变量
//	char name[20];//名字
//	char tele[12];//电话
//	char sex[10];//性别
//	int age;//年龄
//}s4,s5,s6;//s4,s5,s6均为全局变量
//
//struct Stu s3;//s3为全局变量
//int main()
//{
//	//创建结构体变量
//	struct Stu s1;//局部变量
//	struct Stu s2;//局部变量
//	return 0;
//}


//#include<stdio.h>
////匿名结构体类型
//struct
//{
//	int a;
//	char b;
//}sa;
//struct
//{
//	int a;
//	char b;
//}* psa;//结构体指针
//int main()
//{
//	psa = &sa;
//	return 0;
//}
//也就是说虽然这两个结构体各自的结构体成员一模一样，但是编译器认为这是两个各自独立的类型



//#include<stdio.h>
//struct Node
//{
//	int data;//4个字节
//	struct Node* next;//struct Node*是一个指针类型，占4/8个字节
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
//	char c1;//c1和c2放在一起的话就不会浪费很多空间
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
//void Init(struct S tmp)//值传递时，tmp是s的一份临时拷贝，改变tmp不会影响s
//{
//	tmp.a = 100;
//	tmp.c = 'w';
//	tmp.d = 3.14;
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(s);//值传递
//	return 0;
//}

//#include<stdio.h>
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)//传址
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
//	Init(&s);//传址
//	Print1(s);
//	Print2(&s);
//	return 0;
//}


























































