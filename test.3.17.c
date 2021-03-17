#define _CRT_SECURE_N0_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
enum State
{
	valid,//表示结果合法 0
	invalid,//表示结果不合法 1
	//默认结果可能非法，正确转换后在改为合法
};
enum State state = invalid;
int my_atoi(char* str)
{
	int flag = 1;
	long long ret = 0;
	assert(str);
	state = invalid;
	while (isspace(*str))
	{
		str++;
	}
	if (*str == '\0')
	{
		return 0;
	}
	if (*str == '+')
	{
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	while (isdigit(*str))
	{
		ret = ret * 10 + flag * (*str - '0');
		if ((ret > INT_MAX) || (ret < INT_MIN))
		{
			return 0;
		}
		str++;
	}
	//正常停止
	if (*str == '\0')
	{
		state = valid;
		return (int)ret;
	}
	else
	{
		//遇到非数字字符
		return (int)ret;
	}
	}

int main()
{
	char* p = "-121212";
	printf("%d\n", my_atoi(p));
	//测试
	/*char a[] = "-100";
	char b[] = "123";
	int c = 0;
	c = atoi(a) + atoi(b);
	printf("%d", c);
*/



	return 0;
}