#define _CRT_SECURE_NO_WARNINGS 1


//��Ŀ���ƣ�
//��ӡˮ�ɻ���
//��Ŀ���ݣ�
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

#include <stdio.h>
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000000; i++)
//	{
//		//�ж�i�Ƿ�Ϊ������
//		int sum = 0;
//		//1. ����i��λ��n
//		int tmp = i;//12
//		int n = 1;
//		while (tmp/10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2. ��ȡi��ÿλ��������ÿһλ��n�η�֮��
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3. �жϲ����
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//	    *
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��-line��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��-line-1��
//	for (i = 0; i < line-1; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j <2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 20;
//	//00000000000000000000000000010100
//	//0x00000014
//	//
//	int b = -10;
//	//4���ֽ�
//	//32bit
//	//10000000000000000000000000001010 - ԭ��
//	//11111111111111111111111111110101 - ����
//	//11111111111111111111111111110110 - ����
//	//fffffff6
//	//
//	return 0;
//}

//
//1-1 = 0
//1+(-1) = 0
//
//�������
//00000000000000000000000000000001
//11111111111111111111111111111111
//00000000000000000000000000000000
//

//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111

//ԭ�����
//00000000000000000000000000000001
//10000000000000000000000000000001
//10000000000000000000000000000010    -2



//
//����һ������-����
// 4 ���ֽ�
//
//0x 11 22 33 44
//


//int main()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//
//
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;//С��
//	else
//		return 0;//���
//}

//
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//
////int check_sys()
////{
////	int a = 1;
////	return *(char*)&a;
////}
//
//
//int main()
//{
//	if (check_sys() == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//


#include <stdio.h>
//int main()
//{
//	//-1 ����
//	//32bit
//	//8bit
//	//�ض�
//	char a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//11111111-a
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	//-1
//	signed char b = -1;
//	unsigned char c = -1;
//	//11111111
//	//00000000000000000000000011111111
//	//
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	//a=-1,b=-1,
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//10000000 - a
//	//%u - �޷�������
//	//11111111111111111111111110000000 - ����
//	//
//	printf("%u\n", a);
//
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000
//	//11111111111111111111111110000000
//	//
//	printf("%u\n", a);
//	return 0;
//}







//int main()
//{
//	int i = -20;
//	unsigned  int  j = 10;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//	//00000000000000000000000000001010
//	//11111111111111111111111111110110
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010
//	//-10
//	printf("%d\n", i + j);
//
//	return 0;
//}

#include <windows.h>

//int main()
//{
//	unsigned int i;
//
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//
//	return 0;
//}
//

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//INT_MAX

#include <stdio.h>

//0-255
//
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//


//
//int main()
//{
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//
//	return 0;
//}


//
//5.5
//
//101.1
//1.011*2^2
//

int main()
{
	float f = 5.5;
	//101.1;
	//1.011 * 2 ^ 2;
	//(-1)^0*2*1.011*2^2
	//S=0
	//M=1.011
	//E=2
	//2+127 = 129
	//0100 0000 1011 0000 0000 0000 0000 0000
	//40 B0 00 00
	//
	return 0;
}
