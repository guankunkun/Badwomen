#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 5
#define ADRR_MAX 5
#define DATA_MAX 1000
//����һ������Ϣ�Ľṹ��
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char adrr[ADRR_MAX];
};
//ͨѶ¼�Ľṹ��
struct Contact
{
	struct PeoInfo data[DATA_MAX];//���1000���˵���Ϣ�Ŀռ�
	int sz;//��ʾͨѶ¼�д���˼����˵���Ϣ����
};
void InitContact(struct Contact* pc);//��ʼ��ͨѶ¼�ĺ���
