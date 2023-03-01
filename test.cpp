#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

////√∞≈›≈≈–Ú
//#include<stdio.h>
//int main()
//{
//
//	int arr[10] = { 5,7,4,6,2,9,8,10,1,3 };
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 9 - i; j++)
//		{
//			int tmp = 0;
//			if (arr[j] > arr[j+1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////œ˚ ßµƒ ˝◊÷
//int missingNumber(int* nums, int numsSize) {
//    int tag = 0;
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        tag ^= nums[i];
//    }
//    for (i = 1; i <= numsSize; i++)
//    {
//        tag ^= i;
//    }
//    return tag;
//}