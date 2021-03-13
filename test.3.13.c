//#include<stdio.h>
//void findTwoNum(int arr[], int n, int * pnum1, int * pnum2)
//{
// int i;
// int sum = 0;
//?
// for (i = 0; i < 9; i++)
// {
//  sum ^= arr[i];
// } //���ҵ��������������Ľ��
//?
// int pos;
// for (i = 0; i < 32; i++)
// {
//  if (sum & 1 << i)
//  {
//   pos = i;
//   break;
//  }
// } //���ҵ��з����һλ������һλ�ϣ�������һ����һ��1һ��0
//?
// *pnum1 = *pnum2 = 0;
// for (i = 0; i < 10; i++)
// {
//  if (arr[i] & 1 << pos)
//  {
//   *pnum1 ^= arr[i]; //��һλ��1�ģ�������1��
//  }
//  else
//  {
//   *pnum2 ^= arr[i]; //��һλ��0�ģ�������2��
//  }
// }
//}
//char* mystrncpy(char* dst, const char* src, size_t n)
//{
//    int i;
//    for (i = 0; src[i] && i < n; i++)
//    {
//        dst[i] = src[i];
//    }
//
//    if (i < n)
//    {
//        dst[i] = 0;
//    }
//    return dst;
//char* mystrncat(char* dst, const char* src, size_t n)
//{
//    char* tmp = dst;
//
//    while (*dst)
//    {
//        dst++;
//    }
//
//    int i;
//    for (i = 0; src[i] && i < n; i++)
//    {
//        dst[i] = src[i];
//    }
//
//    dst[i] = 0;
//    return tmp;
//}#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//VALID ��ʾ����Ϸ�
//INVALID ��ʾ����Ƿ�
enum State
{
    VALID,//0
    INVALID//1
};
//Ĭ�Ͻ�����ܷǷ�������ȷת�����ٸ�Ϊ�Ϸ�
//enum State state = INVALID;
//?
//int my_atoi(char* str)
//{
//    int flag = 1;
//    long long ret = 0;
//    assert(str);
//    state = INVALID;
//    //�����հ��ַ�
//    while (isspace(*str))
//    {
//        str++;
//    }
//    if (*str == '\0')
//    {
//        return 0;
//    }
//    //����������
//    if (*str == '+')
//    {
//        str++;
//    }
//    else if (*str == '-')
//    {
//        flag = -1;
//        str++;
//    }
//    //��ʼת�������ַ�ֱ���������ַ�
//    while (isdigit(*str))
//    {
//        ret = ret * 10 + flag * (*str - '0');
//        if ((ret > INT_MAX) || (ret < INT_MIN))
//        {
//            return 0;
//        }
//        str++;
//    }
//    //����ֹͣ
//    if (*str == '\0')
//    {
//        state = VALID;
//        return (int)ret;
//    }
//    else
//    {
//        //�����������ַ�
//        return (int)ret;
//    }
//}
//?
//int main()
//{
//    char* p = "-1212212121212";
//    printf("%d\n", my_atoi(p));
//    return 0;
//}#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
?
enum Option
{
    EXIT,
    ADD,
    DEL,
    SEARCH,
    MODIFY,
    SHOW,
    CLEAR,
    SORT
};
?
#define DEFAULT_SZ 3
#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 25
?
//�˵���Ϣ
typedef struct PeoInfo
{
    char name[NAME_MAX];
    short age;
    char sex[SEX_MAX];
    char tele[TELE_MAX];
    char addr[ADDR_MAX];
}PeoInfo;
?
//ͨѶ¼�ṹ��
?
typedef struct Contact
{
    PeoInfo data[MAX];//�����ʵ���ݵĿռ�
    int sz;//��¼��Ч���ݵĸ���
}Contact;
?
void InitContact(Contact* pcon);
void AddContact(Contact* pcon);
void DelContact(Contact* pcon);
void FindContact(Contact* pcon);
void ModifyContact(Contact* pcon);
void ShowContact(const Contact* pcon);
void ClearContact(Contact* pcon);
void SortContact(Contact* pcon);
contact.c��

#include "Contact.h"
?
//��ʼ��ͨѶ¼
void InitContact(Contact* pcon)
{
    assert(pcon);
    pcon->sz = 0;
    memset(pcon->data, 0, sizeof(pcon->data));
}
?
//1�������ϵ����Ϣ
void AddContact(Contact* pcon)
{
    assert(pcon);

    //¼����Ϣ
    printf("����������:>");
    scanf("%s", pcon->data[pcon->sz].name);
    printf("����������:>");
    scanf("%d", &(pcon->data[pcon->sz].age));
    printf("�������Ա�:>");
    scanf("%s", pcon->data[pcon->sz].sex);
    printf("������绰:>");
    scanf("%s", pcon->data[pcon->sz].tele);
    printf("�������ַ:>");
    scanf("%s", pcon->data[pcon->sz].addr);
    ?
        pcon->sz++;
    printf("���ӳɹ�\n");
}
?
//����ָ����Ŀ�±�
static int FindByName(Contact* pcon, char name[])
{
    int i = 0;
    assert(pcon);
    for (i = 0; i < pcon->sz; i++)
    {
        if (0 == strcmp(pcon->data[i].name, name))
        {
            return i;
        }
    }
    //�Ҳ���
    return -1;
}
?
//2��ɾ��ָ����ϵ����Ϣ
void DelContact(Contact* pcon)
{
    int i = 0;
    char name[NAME_MAX] = { 0 };
    int pos = 0;
    assert(pcon);

    if (pcon->sz == 0) //�յľͲ���ɾ��
    {
        printf("ͨѶ¼�ѿգ��޷�ɾ��\n");
        return;
    }
    //ɾ��
    printf("������Ҫɾ���˵�����:>");
    scanf("%s", name);
    //���ң�ɾ��֮ǰ��Ҫ�Ȳ��ң�
    pos = FindByName(pcon, name);
    if (pos == -1)
    {
        printf("Ҫɾ������Ŀ������\n");
        return;
    }
    //�Ƴ�
    for (i = pos; i < pcon->sz; i++)
    {
        pcon->data[i] = pcon->data[i + 1];
    }
    pcon->sz--;
    printf("ɾ���ɹ�\n");
}
?
//3������ָ����ϵ����Ϣ
void FindContact(Contact* pcon)
{
    int i = 0;
    char name[NAME_MAX] = { 0 };
    int pos = 0;
    assert(pcon);

    if (pcon->sz == 0) //�յľͲ���ɾ��
    {
        printf("ͨѶ¼�ѿգ��޷�����\n");
        return;
    }
    ?
        //����
        printf("������Ҫ�����˵�����:>");
    scanf("%s", name);
    ?
        pos = FindByName(pcon, name);
    if (pos == -1)
    {
        printf("Ҫ���ҵ���Ŀ������\n");
        return;
    }

    printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[pos].name,
        pcon->data[pos].age,
        pcon->data[pos].sex,
        pcon->data[pos].tele,
        pcon->data[pos].addr);
}
?
//4���޸�ָ����ϵ����Ϣ
void ModifyContact(Contact* pcon)
{
    int i = 0;
    char name[NAME_MAX] = { 0 };
    int pos = 0;
    assert(pcon);

    if (pcon->sz == 0) //�յľͲ�����
    {
        printf("ͨѶ¼�ѿգ��޷��޸���Ϣ\n");
        return;
    }
    //�޸�
    printf("������Ҫ�޸���Ŀ������:>");
    scanf("%s", name);
    //���ң��޸�֮ǰ��Ҫ�Ȳ��ң�
    pos = FindByName(pcon, name);
    if (pos == -1)
    {
        printf("Ҫ�޸ĵ���Ŀ������\n");
        return;
    }
    //ѯ��Ҫ��ʲô
    printf("������Ҫ�޸�ʲô��Ϣ��1-���֣�2-���䣬3-�Ա�4-�绰��5-סַ��:>");
    int msg;
    scanf("%d", &msg);
    switch (msg)
    {
    case 1:
        printf("�������µ�����:>");
        scanf("%s", pcon->data[pos].name);
        break;
    case 2:
        printf("�������µ�����:>");
        scanf("%d", &pcon->data[pos].age);
        break;
    case 3:
        printf("�������µ��Ա�:>");
        scanf("%s", pcon->data[pos].sex);
        break;
    case 4:
        printf("�������µĵ绰:>");
        scanf("%s", pcon->data[pos].tele);
        break;
    case 5:
        printf("�������µĵ�ַ:>");
        scanf("%s", pcon->data[pos].addr);
        break;
    default:
        printf("���������޸�ʧ��\n");
        return;
    }
    printf("�޸ĳɹ�\n");
}
?
//5����ʾ������ϵ����Ϣ
void ShowContact(const Contact* pcon)
{
    int i = 0;
    assert(pcon);
    printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
    for (i = 0; i < pcon->sz; i++)
    {
        printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[i].name,
            pcon->data[i].age,
            pcon->data[i].sex,
            pcon->data[i].tele,
            pcon->data[i].addr);
    }
}
?
//6�����������ϵ����Ϣ
void ClearContact(Contact* pcon)
{
    InitContact(pcon);
}
?
//7��������������
void SortContact(Contact* pcon)
{
    int i, j;
    PeoInfo tmp;
    for (i = 0; i < pcon->sz - 1; i++)
    {
        for (j = 0; j < pcon->sz - 1 - i; j++)
        {
            if (0 < strcmp(pcon->data[j].name, pcon->data[j + 1].name))
            {
                tmp = pcon->data[j];
                pcon->data[j] = pcon->data[j + 1];
                pcon->data[j + 1] = tmp;
            }
        }
    }
}
���Դ��룺

#include "Contact.h"
?
void menu()
{
    printf("******************************\n");
    printf("** 1. add   2. del **\n");
    printf("** 3. search 4. modify **\n");
    printf("** 5. show  6. clear **\n");
    printf("** 7. sort  0. exit **\n");
    printf("******************************\n");
}
?
int main()
{
    int input = 0;
    //����ͨѶ¼
    Contact con;//
    //��ʼ��ͨѶ¼
    InitContact(&con);
    do
    {
        menu();
        printf("��ѡ��:>");
        scanf("%d", &input);
        switch (input)
        {
        case ADD:
            AddContact(&con);
            break;
        case DEL:
            DelContact(&con);
            break;
        case SEARCH:
            FindContact(&con);
            break;
        case SORT:
            SortContact(&con);
            break;
        case MODIFY:
            ModifyContact(&con);
            break;
        case SHOW:
            ShowContact(&con);
            break;
        case CLEAR:
            ClearContact(&con);
            break;
        case EXIT:
            printf("�˳�����\n");
            return 0;
        default:
            printf("������������������\n");
            break;
        }
    } while (input);
    return 0;
}