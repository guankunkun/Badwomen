#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ӡһ������ÿһλ
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	print("%d", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	print(num);
//}


//void print(int n)
//
//{
//
//	if (n > 9)
//
//	{
//
//		print(n / 10);
//
//		
//
//	}
//	printf("%d ", n % 10);
//
//}
//
//int main()
//
//{
//
//	int num = 0;
//
//	scanf_s("%d", &num);
//
//	print(num);
//
//
//
//
//
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10 );
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//}
//��׳�
// N�Ľ׳� N!=1*2*3*(N-1)*N
// 1:ѭ���ķ�����׳�
//int main()
//{
//	int n=0;
//	int i = 0;
//	int sum = 1;//�׳˵�ֵ
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = i * sum;
//	}
//	printf("%d", sum);
//
//
//	
//
//
//
//	return 0;
//}
//2������ѭ��
//int  Fac(int n)
//{
//     int ret = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	Fac(n);
//	
//
//	return 0;
//}
//3:�ݹ�
int Fac(int n)
{
	n = n * n;
	if (n <= 1)
		return 1;
	return Fac(n - 1) * n;
	printf("%d", n);
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	Fac(n);


	return 0;
}