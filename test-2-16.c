#include<stdio.h>
#include<math.h>
//  判断素数
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//	return 1;
//
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//
//
//
//
//	return 0;
//}
//int is_leap_year(int y)
//{
//	return ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0));
//
//
//
//
//}
//
//
//
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//
//
//
//
//	}
//
//
//
//	return 0;
//}
//int binary_search(int *arr,int k)
int binary_search(int arr[], int k,int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while(left<=right)
	{
		int mid = left+(right-left) / 2;
		if (arr[mid]> k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;

}
int main()
{
	//有序的
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//二分查找
	//找到了返回下标
	//找不到。返回-1
	//数组传参的时候传递的是数组首元素地址
	int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = binary_search(arr,k,sz);
if (ret == -1)
{
	printf("找不到\n");
}
else
{
	printf("找到了下标是：%d ", ret);
}
	return 0;
}