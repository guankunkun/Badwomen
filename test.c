//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<math.h>
//�ж�year�ǲ�������
//		�ж�����Ĺ���
//		 1 ���ĳ˳���������100 2����400����
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		/*if ((year % 4 == 0) && (year % 100 != 0))
//		{
//			printf("%d ", year);
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}*/
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//
//	}
//
//	return 0;
//}
  //�ж�i�Ƿ�Ϊ���� 100-200֮��
  //ֻ�ܱ�1������������
  //�ж�i�Ƿ�Ϊ��������2>i-1֮������֣��Գ�i
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0; 
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//}
//���Լ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//
//	}
//	printf("%d\n", b);
//
//	return 0;
//}
//100��9
//int main()
//{
//	int  i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
// ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ��
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�ҳ����ֵ
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}
//����˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 3;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//
//		}
//		else if(arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ�С���ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf(" �Ҳ���\n");
//	}
//
//
//
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		//�ж�����Ĺ���
//		//1. ��4���������ܱ�100����������
//		//2. ��400����Ҳ������
//		/*if ((year % 4 == 0) && (year % 100 != 0))
//		{
//			printf("%d ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}*/
//		if (((year%4==0)&&(year%100!=0)) || (year%400==0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//дһ�����룺��ӡ100~200֮�������
//����-ֻ�ܱ�1������������
//�ж�i�Ƿ�Ϊ��������2->i-1֮�����֣��Գ�i
//
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		int flag = 1;//����i������
//		int j = 0;
//		for (j = 2; j < i; j++)//j������i-1
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//��ʶi��������
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		int flag = 1;//����i������
//		int j = 0;
//		//j��ȡֵ��Χ��2->i-1
//		for (j = 2; j <= sqrt(i); j++)//j������i-1
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//��ʶi��������
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		int flag = 1;//����i������
//		int j = 0;
//		//j��ȡֵ��Χ��2->i-1
//		for (j = 2; j <= sqrt(i); j++)//j������i-1
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//��ʶi��������
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//
// �Գ���
// ɸѡ��
// ...
// ����������N�־��硷
//



//
//��˼����
//�ܲ����ٺ�һ��
//

//int main()
//{
//	int  i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//9 19 29 39 99
//		//90 91 .. 99
//		//19%10==9
//		//91/10==9
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

//
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	
//	//
//	//%f - float
//	//%lf - double
//	//%s - �ַ���
//	//%c - �ַ�
//	//%d - �з��ŵ�����
//	//%u - �޷�����
//	//
//	return 0;
//}
//
//


//��10 �����������ֵ

//int main()
//{
//	int arr[10] = { 0 };
//	//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�ҳ����ֵ
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


//����Ļ�����9 * 9�˷��ھ���

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//....

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//
//f(x) = 2 * x + 3;
//
//
//int Add(int x, int y)
//{
//	int z = x + y;//�ӷ�
//	return z;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}

#include <string.h>
//
//int main()
//{
//	char arr1[] = "bit";//����Դ
//	char arr2[20] = "xxxxxxxx";//Ŀ�ĵ�
//	
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}
//


//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	//xxxxx bit
//	return 0;
//}
//
//

//��ʽ���ϵĲ���
//int get_max(int x, int y)
//{
//	int z = (x > y) ? (x) : (y);
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int max = get_max(get_max(2, 3), b);//�ҳ�2�������Ľϴ�ֵ
//	
//	printf("max = %d\n", max);
//
//	return 0;
//}
//
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//д����������a��b��ֵ
//	printf("����ǰ��a=%d b=%d\n", a, b);//
//	//��ֵ����
//	Swap1(a, b);
//	//
//	//�������ε�ʱ��
//	//ʵ�δ��ݸ��βΣ��β���ʵ�ε�һ����ʱ����
//	//���βε��޸ģ�����Ӱ��ʵ��
//	//
//
//	//��ַ����
//	Swap2(&a, &b);
//
//	printf("������a=%d b=%d\n", a, b);//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//
//	printf("%d\n", a);
//	return 0;
//}



//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int * pa = &a;
//	int * pb = &b;
//
//	test1(pa, pb);//��ֵ
//	test2(&pa, &pb);//��ַ
//
//	return 0;
//}

//is_prime(i)
//����1-������
//����0-��������
//
//int is_prime(int i)
//{
//	//�ж�i�Ƿ�Ϊ����
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
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
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int is_leap_year(int y)
//{
//	return ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0);
//    /*
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//	*/
//}
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
//	}
//	return 0;
//}
//int binary_serarh(int * arr, int k)
//
//
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz-1;//
//
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//	return -1;
//}
//
//int main()
//{
//	//�����
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 100;
//	//���ֲ��ҵ�
//	//�ҵ��ˣ������±�
//	//�Ҳ��������� -1
//	//arr������
//	//arr��Ϊ���������ε�ʱ�򣬴��ݵ���������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//
//	int ret = binary_search(arr, k, sz);
//
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}


//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//
//	return 0;
//}