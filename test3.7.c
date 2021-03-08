#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<stdio.h>
	//int arr1[10] = { 0 };
	//int i = 0;
	//for (i = 0; i <=9; i++)
	//{
	//	scanf_s("%d", arr1);
	//}
	//int sz = sizeof(arr1) / sizeof(arr1[0]);
	//for (i = 0; i <= 9; i++)
	//{
	//	int tmp = 0;
	//	int left = arr1[0];
	//	int right = arr1[sz-1];
	//	tmp = left;
	//	right = tmp;
	//	left = ;
	//	
	//		for (i = 0; i <= 9; i++)
	//		{
	//			printf("%d", arr1[i]);
	//		}
	//}
	//void BubbleSort(int array[], int size)

	//{

	//	for (int i = 0; i < size - 1; ++i)

	//	{

	//		int isChange = 0;



	//		for (int j = 1; j < size - i; ++j)

	//		{

	//			if (array[j - 1] > array[j])

	//			{

	//				int temp = array[j - 1];

	//				array[j - 1] = array[j];

	//				array[j] = temp;



	//				isChange = 1;

	//			}

	//		}



	//		if (!isChange)

	//			return;

	//	}

	//}

	//int main()

	//{

	//	int arr[10] = { 2,4,6,7,5,9,3 };

	//	int i = 0;
	//	
	//	

	//	int sz = sizeof(arr) / sizeof(arr[0]);

	//	BubbleSort(arr, sz);

	//	for (i = 0; i < sz; i++)

	//	{

	//		printf("%d ", arr[i]);

	//	}





	//	return 0;

	//}

//int BubbleSort(int array[], int size)
//
//{
//
//	for (int i = 0; i < size - 1; ++i)
//
//	{
//
//		int isChange = 0;
//
//
//
//		for (int j = 1; j < size - i; ++j)
//
//		{
//
//			if (array[j - 1] > array[j])
//
//			{
//
//				int temp = array[j - 1];
//
//				array[j - 1] = array[j];
//
//				array[j] = temp;
//
//
//
//				isChange = 1;
//
//			}
//
//		}
//
//
//
//		if (!isChange)
//
//			return;
//
//	}
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		scanf_s("%d", &array[i]);
//	}
//
//}
//
//int main()
//
//{
//
//	int arr[10] = { 0 };
//
//	int i = 0;
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//
//	BubbleSort(arr, sz);
//
//	for (i = 0; i < sz; i++)
//
//	{
//
//		printf("%d ", arr[i]);
//
//	}
//
//
//
//
//
//	return 0;
//
//}
//void Reverse(int arr[], int sz)
//
//{	
//
//	int left = 0;
//
//	int right = sz - 1;
//
//	while (left < right)
//
//	{
//
//		int tmp = arr[left];
//
//		arr[left] = arr[right];
//
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//int  main()
//{
//	int n = 0;
//	int i = 0;
//	if (1)
//	{
//		for (i = 0; i < 10; i++)
//		{
//			printf("hhe");
//		}
//
//	}
//
//
//	return 0;
//}
int my_search(int *arr, int n,int s)
{
	int i = 0;
	
	for (i = 0; i < n; i++)
	{
		if (s==arr[i])
		{
			return 1;
		}
		else return 0;
	}
	
}
int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	int arr[20] = { 0 };
	for (i = 0; i <n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int s = 0;
	scanf("%d", &s);
	int ret=my_search(arr,n,s);
	if (ret == 1)
		printf("yes");
	else
		printf("no");

	return 0;
}