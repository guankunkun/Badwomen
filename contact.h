#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 5
#define ADRR_MAX 5
#define DATA_MAX 1000
//描述一个人信息的结构体
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char adrr[ADRR_MAX];
};
//通讯录的结构体
struct Contact
{
	struct PeoInfo data[DATA_MAX];//存放1000个人的信息的空间
	int sz;//表示通讯录中存放了几个人的信息个数
};
void InitContact(struct Contact* pc);//初始化通讯录的函数
