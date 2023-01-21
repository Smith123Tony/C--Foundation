#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int cmp_int(const void* num1,const void* num2)
//{
//	int* pa = (int*)num1;
//	int* pb = (int*)num2;
//	return *pa - *pb;
//}

//int main()
//{
//	int arr[5] = { 2,3,1,6,5 };
//	qsort(arr, 5, sizeof(int), cmp_int);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int cmp_int(const void* num1, const void* num2)
//{
//	float* pa = (float*)num1;
//	float* pb = (float*)num2;
//	return *pa > *pb ? 1 : -1;
//}
//
//int main()
//{
//	float arr[6] = { 2,3,1,6,5,5 };
//	qsort(arr, 6, sizeof(float), cmp_int);
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%f ", arr[i]);
//	}
//	return 0;
//}





//typedef struct
//{
//	char name[10];
//	int Chinese;
//	int Math;
//	int English;
//}Student;
//
//Student students[7];
//
//void readData()//读入学生数据
//{
//	FILE* file = fopen("mark.txt", "r");
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		fscanf(file, "%s", students[i].name);
//		fscanf(file, "%d", &students[i].Chinese);
//		fscanf(file, "%d", &students[i].Math);
//		fscanf(file, "%d", &students[i].English);
//	}
//	fclose(file);
//	file = NULL;
//}
//
//void DisPlayData()
//{
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		printf("%s\t", students[i].name);
//		printf("%d\t", students[i].Chinese);
//		printf("%d\t", students[i].Math);
//		printf("%d\t", students[i].English);
//		printf("%d\n", students[i].Chinese + students[i].Math + students[i].English);
//	}
//}
//
//int cmp(const void* a, const void* b)
//{
//	Student* pa = (Student*)a;
//	Student* pb = (Student*)b;
//	int num3 = pa->Chinese+pa->English+pa->Math;
//	int num4 = pb->Chinese+pb->Chinese+pb->Math;
//	return num3 - num4;
//}
//
//int main()
//{
//	readData();
//	qsort(students, 7, sizeof(Student), cmp);
//	DisPlayData();
//	return 0;
//}












//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp_int(const void* a,const void* b)
//{
//    int* num1 = (int*)a;
//    int* num2 = (int*)b;
//    return *num1 - *num2;
//}
//int a[500000];
//
//int main(int argc, char* argv[])
//{
//    // 请在此输入您的代码
//    
//    int i = 0;
//    int n = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", a + i);
//    }
//    qsort(a, n, sizeof(int), cmp_int);
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    for (i = n - 1; i >= 0; i--)
//    {
//        printf("%d ", a[i]);
//    }
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char* argv[])
//{
//    // 请在此输入您的代码
//    int count[26] = { 0 }, max = 0;
//    int i = 0;
//    char ch = 0;
//    while ((ch = getchar()) != '\n')
//    {
//        count[ch - 'a']++;
//    }
//    for (i = 1; i < 26; i++)
//        if (count[i] > count[max])
//            max = i;
//    printf("%c\n%d", max + 'a', count[max]);
//    return 0;
//}


#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    // 请在此输入您的代码
    int n, ch[10001], i, a = 0, b = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ch[i]);
        if (ch[i] >= 60)
        {
            a++;
        }
        if (ch[i] >= 85)
        {
            b++;
        }
    }
    printf("%.0f%%\n%.0f%%", a * 100 / (n * 1.0), b * 100 / (n * 1.0));
    return 0;
}




