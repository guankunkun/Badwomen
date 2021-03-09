#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
	//ACM 3
	//int n = 0;
	//int i = 0;
	//double average = 0;
	//int count = 0;
	//int arr[200] = { 0 };
	//int* p = arr;
	//scanf("%d", &n);
	//for (i =0; i < n; i++)
	//{
	//	scanf("%d ", p);
	//	p += 1;
	//}
	//count = arr[0];
	//for (i = 1; i < n; i++)
	//{
	//	count = arr[i] + count;	
	//}
	//average = (double)count / n;
	//int num = 0;
	//for (i = 1; i <=n; i++)
	//{
	//	if (arr[i] < average)
	//	{	
	//		num++;	
	//	}	
	//}
	//printf("%d", num);


	//ACM4
	/*int n = 0;
	int s = 0;
	int i = 0;
	int arr[200] = { 0 };
	int* p = arr;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", p);
		p=p+1;
	}
	scanf("%d", &s);
	int num = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == s)
		{
			num++;
		}
		
	}
	printf("%d", num)*/;
	//ACM 5
	//int n = 0;
	//int h = 0;
	//int i = 0;
	//int arr[100] = { 0 };
	//int* p = arr;
	//scanf("%d", &n);
	//for (i = 0; i < n; i++)
	//{
	//	scanf("%d", p);
	//	p = p + 1;
	//}
	//scanf("%d", &h);
	//int num = 0;
	//for (i = 0; i < n; i++)
	//{
	//	if (h + 40 >= arr[i])
	//	{
	//		num++;
	//	}
	//}
	//printf("%d", num);
	//ACM 6
	int main()
	{
	int i =0;
	int n = 0;
	double arr1[16] = { 28.1,54.5,46.6,37.1,38,46.7,70.7,21.8,31.4,27.6,39.3,37.1,56.7,70.3,72.7,40.7 };
	double arr[16] = {28.1,54.5,46.6,37.1,38,46.7,70.7,21.8,31.4,27.6,39.3,37.1,56.7,70.3,72.7,40.7 };
	double* p = arr;
	double* p1 = arr1;
	double money = 0;
	for (i = 0; i <16; i++)
	{
		scanf("%d",&n);
		*(p+i) = *(p + i) * n;
	}
	double max = 0;
	double max1 = 0;
	for (i = 0; i < 15; i++)
	{
		if (*(p + i) > *(p + i + 1))
		{
			max=*(p+i);
			max1 = arr1[i];
		}
		else
		{
			max = *(p + i + 1);
			max1 = arr1[i + 1];
		
		}
	}
	double ret = max1;
	double ret1 = max / max1;
	printf("%.1lf ", ret);
	printf("%d",(int)ret1);
	return 0;
	}
	//ACM 7
	/*int main()
	{
		int i =0;
	int n = 0;
	double arr1[16] = { 28.1,54.5,46.6,37.1,38,46.7,70.7,21.8,31.4,27.6,39.3,37.1,56.7,70.3,72.7,40.7 };
	double arr[16] = {28.1,54.5,46.6,37.1,38,46.7,70.7,21.8,31.4,27.6,39.3,37.1,56.7,70.3,72.7,40.7 };
	double* p = arr;
	double* p1 = arr1;
	double money = 0;
	for (i = 0; i <16; i++)
	{
		scanf("%d",&n);
		*(p+i) = *(p + i) * n;
	}
	double max = 0;
	double max1 = 0;
	double sum = 0;
	for (i = 0; i < 16; i++)
	{
		sum = *(p + i) + sum;
	

		
	}
	double ret = max1;
	double ret1 = max / max1;
	double ret2 = sum;
	printf("%.1lf", sum);
	return 0;
	}*/
	/*double my_function()
	int main()
	{
		




		return 0;
	}*/

	//ACM 10

//#define Num 2
//	int main()
//	{
//		int num;
//		int a[16];
//		int i = 1, j;
//		scanf("%d", &num);
//		for (j = 0; j < 16; j++)
//		{
//			i = num % Num;
//			num = num / Num;
//			a[j] = i;
//		}
//		for (j = 15; j >= 0; j--)
//		{
//			printf("%d", a[j]);
//			if (j % 4 == 0)
//				printf("");
//		}
//		printf("\n");
//#include<iostream>
//	using namespace std;
//	int main() {
//		int num;
//		int length = 0;
//		int n[20];
//		cout << 
//		cin >> num;
//		
//		while (num / 2) {
//			n[length] = num % 2;
//			length++;
//			num = num / 2;
//		}
//		//存储最后一个余数
//		n[length] = num;
//		length++;
//		cout << 
//		//将余数从下往上输出
//		for (int i = length - 1; i >= 0; i--) {
//			cout << n[i];
//		}
//		return 0;
//	}
//	
//#include <stdio.h>
//#include <math.h>
//	long long convertDecimalToBinary(int n)
//	{
//		long long binaryNumber = 0;
//		int remainder, i = 1, step = 1;
//		while (n != 0) {
//			remainder = n % 2;    //取余数
//			printf("step %d:%d/2,余数 = %d,商 = %d\n", step++, n, remainder, n / 2);
//			n /= 2;
//			binaryNumber += remainder * i;
//			i *= 10;   //*10
//		}
//		return binaryNumber;
//	}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	return 0;
//}
