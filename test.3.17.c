#define _CRT_SECURE_N0_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
enum State
{
	valid,//��ʾ����Ϸ� 0
	invalid,//��ʾ������Ϸ� 1
	//Ĭ�Ͻ�����ܷǷ�����ȷת�����ڸ�Ϊ�Ϸ�
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
	//����ֹͣ
	if (*str == '\0')
	{
		state = valid;
		return (int)ret;
	}
	else
	{
		//�����������ַ�
		return (int)ret;
	}
	}

int main()
{
	char* p = "-121212";
	printf("%d\n", my_atoi(p));
	//����
	/*char a[] = "-100";
	char b[] = "123";
	int c = 0;
	c = atoi(a) + atoi(b);
	printf("%d", c);
*/



	return 0;
}