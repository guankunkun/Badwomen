//#include<stdio.h>
//#include<math.h>

//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j < sqrt(i); j++)
//	{
//		
//		if (i % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int is_leap_year(int y)
//{
//	return((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0));
//	
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//
//
//
//	return 0;
//}

//void swap(int *px, int *py)
//{
//	int temp = 0;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//
//
//}
//
//
//
//int main()
//{
//	int n = 5;
//	int m = 3;
//	swap(&n, &m);
//	printf("%d %d", n,m);
//
//	return 0;
//}
//void list(int x)
//{
//	int i = 0;
//	int j = 0;
//for (i = 1; i <= x; i++)
//{ 
//	for (j = 1; j <=x; j++)
//	{
//		printf("%d * %d = %-4d ", i, j, i * j);
//	}
//	printf("\n");
//
//
// }
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
//	int n = 0;
//	scanf_s("%d",&n);
//	list(n);
//
//	return 0;
//}
//����Ա����
//��Ŀ����
//����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ���
//�������� :
//һ�У�����7��������0~100��������7���ɼ����ÿո�ָ���
//������� :
//һ�У����ȥ����߷ֺ���ͷֵ�ƽ���ɼ���С�������2λ��ÿ��������С�
//дһ���Ƚϴ�С�ĺ�����һֱ�Ƚ����ڵ�������

//int main()
//{
//	int arr[7] = { 0 };
//	int min = arr[0];
//	int max = arr[0];
//	double average = 0.0;
//	int i = 0;
//	int score = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf_s("%d", &arr[i]);
//		score += arr[i];
//	}
//	for (i = 1; i < 7; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	average = ((score - max - min) / 5);
//	printf("%.2lf", average);
//
//	return 0;
//}
//#include<stdio.h>
//int main() {
//    int arr[7] = { 0 };
//    int i = 0;
//    float score = 0;
//    for (i = 0; i < 7; i++) {
//        scanf_s("%d", &arr[i]);
//        score += arr[i];
//    }
//    int max = arr[0];
//    int min = arr[0];
//    for (i = 1; i < 7; i++) {
//        if (max < arr[i]) {
//            max = arr[i];
//        }
//        if (min > arr[i]) {
//            min = arr[i];
//        }
//    }c
//    score = (score - (max + min)) / 5;
//    printf("%.2f\n", score);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[7] = { 0 };
//	int sum = 0;
//	double average = 0.00;
//	int i = 0;
//	for(i=0;i<=6;i++)
//	{ 
//		scanf_s("%d", &arr[i]);
//		sum += arr[i];
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 0; i < 7; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	average = (sum - min - max) / 5.0;
//	printf("%.2lf", average);
//	return 0;
//}
//����·�����
//int leap_year(int year)
//{ 
//return((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	��Ҫ�ж������ǲ������꣬������±�ƽ���һ��
//	while (scanf_s("%d %d", &year, &month) != EOF)
//	{
//		���������
//		if (leap_year == 1)
//		{
//			while (month == 2)
//			{
//				day = 29;
//			}
//			while (month == 1|| 3|| 5|| 7|| 8|| 10|| 12)
//			{
//				day = 31;
//			}
//			while (month == 4, 6, 9)
//			{
//				day = 30;
//			}
//
//		}
//		else if(leap_year==0)
//		{
//			while (month == 2)
//			{
//				day = 28;
//			}
//			while (month == 1, 3, 5, 7, 8, 10, 12)
//			{
//				day = 31;
//			}
//			while (month == 4, 6, 9)
//			{
//				day = 30;
//			}
//		}
//		printf("%d", day);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    while (scanf_s("%d %d", &a, &b) != EOF)
//    {
//        if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
//        {
//            b = 31;
//        }
//        else if (b == 2)
//        {
//            b = 28;
//            if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0))
//            {
//                b++;
//            }
//        }
//        else
//        {
//            b = 30;
//        }
//        printf("%d\n", b);
//    }
//    return 0;
//}
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	print(num);
//
//
//
//}
#include<stdio.h>
//long long Fac(int N)
//{
//    long long ret = 1;
//    for (int i = 2; i <= N; ++i)
//    {
//        ret *= i;
//    }
//
//    return ret;
//}
//int main()
//{
//    int n = 0;
//    long ret = 0;
//    scanf_s("%d", &n);
//    long long Fac(ret);
//    printf("%d", ret);
//
//
//    return 0;
//}
#include<stdio.h>
long long Fac(int N)
{
if (N <= 1)
return 1;

return Fac(N - 1) * N;
}
int main()
{
	int n = 0;
	long ret = 0;
	scanf_s("%d", &n);
	long long Fac(ret);
	printf("%d", ret);

	return 0;
}