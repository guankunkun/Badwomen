#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[3] = { 'a','b','c' };
//	//测试数组在内存中的存储
//
//
//
//	return 0;
//}
//递归求n的阶乘根据递归公式
//int  Fac(int m)
//{
//	if (m <= 1)
//	{
//		return 1;
//	}
//	return Fac(m - 1) * m;
//	
//}
//int main()
//{
//	int n = 5;
//	int  Fac(n);
//	printf("%d",Fac(n));
//	return 0;
//}
//strlen的实现
//1循环实现
//了解strlen函数：开始扫描直到\'o'结束，然后返回统计值，求字符串长度，不包含\'0'
//思路：计数器一直累加，直到遇到字符0，一直判断字符串
//int my_strlen(char *str)
//{
//	int count = 0;
//	while ('\0'!= *str)
//	{	
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "a";
//	scanf("%s", &str);
//	int ret= my_strlen(str);
//	printf("%d", ret);
//	return 0;
//}
//递归实现
//int my_strlen(char* str)
//{
//	if ('\0' == *str)
//		return 0;
//	else
//		return 1 + my_strlen(1 + str);
//
//
//
//
//}
//int main()
//{
//	char str[] = "abcd";
//	scanf("%s", &str);
//	int ret = my_strlen(str);
//	printf("%d", ret);
//
//
//
//	return 0;
//}
//为什么是*str而不是str，需要穿str整个数组，数组名代表首元素地址。
//字符串逆序  abcd_dcba
//char reverse_string(char* arr)
//{
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//
//	}
//	return *arr;
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
//	char arr[] = "abcdef";
//    reverse_string(arr);
//	printf("%s", &arr);
//
//
//	return 0;
//}
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	*(arr + len - 1) = tmp;
//	return *arr;
//
//
//
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", &arr);
//
//
//
//	return 0;
//}
//int DigitSum(n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//	printf("%d", n);
//
//
//
//
//}
//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	DigitSum(n);
//
//
//
//
//
//	return 0;
//}
//int Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k >= 1)
//	{
//		return n * pow(n, k - 1);
//	}
//
//
//
//}

//冒泡排序
//void BubbleSort(int array[], int size)
//{
//	for (int i = 0; i < size - 1; ++i)
//	{
//		int isChange = 0;
//		for (int j = 1; j < size - i; ++j)
//		{
//			if (array[j - 1] > array[j])
//			{
//				int tmp = array[j - 1];
//				array[j - 1] = array[j];
//				array[j] = tmp;
//				isChange = 1;
//			}
//
//				
//
//
//		}
//
//		if (isChange)
//		{
//			return ;
//         }
//
//	}
//
//
//
//
//}
   // size-1表示：最后一趟区间中只剩余1个元素，该趟冒泡可以省略
//void BubbleSort(int array[],int size)
//{
//for (int i = 0; i < size - 1; ++i)
//{
//    int isChange = 0;
//    // 具体冒泡的方式：用相邻的两个元素进行比较，前一个大于后一个元素时，交换着两个数据，依次直到数组的末尾
//    for (int j = 1; j < size - i; ++j)
//    {
//        if (array[j - 1] > array[j])
//        {
//            int temp = array[j - 1];
//            array[j - 1] = array[j];
//            array[j] = temp;
//
//            isChange = 1;   // 如果本次冒泡进行数据交换了，说明本次还是无序的，就将isChange设置为1
//        }
//    }
//
//    // 如果本次冒泡中，元素没有交换，则本次开始冒泡时，数据已经有序了，后面的冒泡可以不用进行了
//    if (!isChange)
//        return;
//}
//}
//int main()
//{
//	int arr[7] = { 2,4,6,7,5,9,3 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort( arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	
//
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//
//
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	
//
//
//	}
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	print(arr, sz);
//	Reverse(arr, sz);
//	
//
//
//
//
//	return 0;
//}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p)[10] = &arr;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", (*p)[i] );

	}




	return 0;
}