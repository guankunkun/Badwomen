#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
int main()
{
	long int code;                  //code-密码
	char id[10] = { 0 };                        //定义变量  id-账号
	printf("请输入账号:\n");        //输出提示语
	scanf("%s", &id);                //输入账号
	printf("请输入密码:\n");
	scanf("%d", &code);
	if (strcmp(id, "xyz") == 0 && code == 727116)

		printf("Yes\n");

	else
		printf("密码或账号错误，请重新输入\n");
	return 0;
}


//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);//
//	if (strcmp(input, "我是猪") == 0)//string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//
//Leetcode
//

//3^3=0
//a^a=0
//0^5=5
//0^3=3
//0^a=a
//3^3^5=5
//3^5^3=5
//异或支持交换律

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4,7,5};
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("单身狗是：%d\n", ret);
//	return 0;
//}
//
//


//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 ,7,5};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;//计数
//		//统计arr[i]在数组arr中出现的次数
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("单身狗是：%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	//按二进制位异或
//	//相同为0，相异为1
//	//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//
//int main()
//{
//	//输出函数-库函数
//	printf("hello world\n");
//	return 0;
//#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//主函数-程序的入口
//int main()
//{
//	//打印函数-库函数
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//
//	return 0;
//}



//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	scanf("%d%d", &a, &b);
//	//交换
//	int c = 0;
//	printf("交换前：a=%d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}
//


//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}
//

//
//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	//^ 异或 - 按（2进制）位异或
//	//相同为0，相异为1
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}
//


//暴力求解
//int main()
//{
//	int arr[] = { 8, 2, 3, 4, 5, 8, 2, 3, 4,7,5};
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		//统计一下arr[i]在arr数组中出现的次数
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("单身狗是：%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//3^3=0
//a^a=0
//0^a=a
//3^3^5=5
//3^5^3=5
//异或操作符是支持交换律的

//int main()
//{
//	int arr[] = { 8, 2, 3, 4, 5, 8, 2, 3, 4,7,5};
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("单身狗是：%d\n", ret);
//	return 0;
//}

#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//执行系统命令的
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);//
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//
//
//
//#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
    printf("hehe\n");
	return 0;
}



//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	//13
//
//	//printf("%d\n", strlen("bit"));
//	//strlen() 求字符串长度的一个函数
//	return 0;
//}F
//
//int main()
//{
//	/*int a = -1;
//	printf("%d\n", a);
//
//	unsigned int b = 10;
//	printf("%u\n", b);
//*/
//	int a = -1;
//	printf("%u\n", a);
//
//	return 0;
//}

//
//int main()
//{
//	char ch = '0';//1个字节-8bit位
//	//printf("%d\n", sizeof(ch));
//	printf("%c %d\n", ch, ch);
//	ch = 'w';
//	printf("%c %d\n", ch, ch);
//
//	return 0;
//}

//
//int main()
//{
//	char ch = 255;//-128-127
//	printf("%d\n", ch);
//	return 0;
//}

//int main()
//{
//	/*float f1 = 3.14f;
//	double f2 = 3.14;
//	printf("%d\n", sizeof(f1));
//	printf("%d\n", sizeof(f2));*/
//	100;
//	200;
//	100l;
//	//int a = 100;
//	//long b = 100l;
//	float f = 3.14f;//double
//	return 0;
//}
//
//int main()
//{
//	//int a = -10;
//	//printf("%d\n", -a);
//	int a = 9;
//	int b = 2;
//	int c = a / b;// 除法得到的是商
//	c = a % b;//取模得到的余数
//	printf("%d\n", c);
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);//10
//	printf("%d\n", a);//11
//
//	//int b = a++;//后置++，先使用，后++
//	//printf("a = %d b = %d\n", a, b);//11 10
//
//	//int b = ++a;//前置++，先++，后使用
//	//printf("a=%d b=%d\n", a, b);
//	
//	//int b = a--;//后置--,先使用，再--
//	//printf("a=%d b=%d\n", a, b);//9 10
//	
//	//int b = --a;//前置--，先--，后使用
//	//printf("a=%d b=%d\n", a, b);// 9 9
//
//	return 0;
//}

int main()
{
	//int a = 10;
	//int b = 2;
	////int c = a + b * 3;
	//int c = a + b + 3;
	/*float a = 3.1;
	double b = 3.2;
	int n = 10;
	double c = a + b;
	double d = n + c;*/

	char c = 'a';//97
	char c2 = c + 1;//98

	printf("%c\n", c);
	printf("%c\n", c2);

	return 0;
}
