#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

	//牛客网
	//int t = 0;
	//int s = 0;
	//
	//while (scanf("%d", &t) != EOF)
	//{
	//	if (t > 0)
	//	{
	//		printf("1\n");
	//	}
	//	else if (t == 0)
	//	{
	//		printf("0.5\n");
	//	}
	//	else if (t < 0)
	//	{
	//		printf("0\n");
	//	}
 //    }
	//比特科技 递归实现打印一个整数的每一个位
	//void Print(int n)
	//{
	//	if (n > 9)
	//	{
	//		Print(n / 10);
	//	}
	//	printf("%d ", n % 10);
	//}
	//int main()
	//{
	//	int number = 0;//要打印的数
	//	scanf("%d", &number);//输入
	//	Print(number);



	//	return 0;
	//}
//函数求阶乘
//函数循环
//int Fac(int n)
//{
//	int ret = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		ret = ret * i;
//
//	}
//	printf("%d", ret);
//	return ret;
//}
// 函数递归
//int Fac(int m)
//{
//	if (m <= 1)
//	{
//		return 1;
//	}
//	return Fac(m - 1) * m;
// }
//int main()
//{
//	// 1:函数循环
//	int n = 0;
//		scanf("%d", &n);
//	Fac(n);
//	//2：函数递归
//
//
//	return 0;
//}
//
//字符串逆序
// 函数循环
char reverse_string(char* arr)
{
	char* left = arr;
	char* right = arr + strlen(arr) - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
	return *arr;
}
int main()
{
	char arr[3] = { 'a','b','c' };
	reverse_string(arr);
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%c", arr[i]);
	}

	return 0;
}