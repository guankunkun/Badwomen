//#include<stdio.h>
//void findTwoNum(int arr[], int n, int * pnum1, int * pnum2)
//{
// int i;
// int sum = 0;
//?
// for (i = 0; i < 9; i++)
// {
//  sum ^= arr[i];
// } //先找到两个数互相异或的结果
//?
// int pos;
// for (i = 0; i < 32; i++)
// {
//  if (sum & 1 << i)
//  {
//   pos = i;
//   break;
//  }
// } //再找到有分歧的一位。在这一位上，两个数一定是一个1一个0
//?
// *pnum1 = *pnum2 = 0;
// for (i = 0; i < 10; i++)
// {
//  if (arr[i] & 1 << pos)
//  {
//   *pnum1 ^= arr[i]; //这一位是1的，放在数1里
//  }
//  else
//  {
//   *pnum2 ^= arr[i]; //这一位是0的，放在数2里
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
//VALID 表示结果合法
//INVALID 表示结果非法
enum State
{
    VALID,//0
    INVALID//1
};
//默认结果可能非法，当正确转换后再改为合法
//enum State state = INVALID;
//?
//int my_atoi(char* str)
//{
//    int flag = 1;
//    long long ret = 0;
//    assert(str);
//    state = INVALID;
//    //跳过空白字符
//    while (isspace(*str))
//    {
//        str++;
//    }
//    if (*str == '\0')
//    {
//        return 0;
//    }
//    //跳过正负号
//    if (*str == '+')
//    {
//        str++;
//    }
//    else if (*str == '-')
//    {
//        flag = -1;
//        str++;
//    }
//    //开始转换数字字符直到非数字字符
//    while (isdigit(*str))
//    {
//        ret = ret * 10 + flag * (*str - '0');
//        if ((ret > INT_MAX) || (ret < INT_MIN))
//        {
//            return 0;
//        }
//        str++;
//    }
//    //正常停止
//    if (*str == '\0')
//    {
//        state = VALID;
//        return (int)ret;
//    }
//    else
//    {
//        //遇到非数字字符
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
//人的信息
typedef struct PeoInfo
{
    char name[NAME_MAX];
    short age;
    char sex[SEX_MAX];
    char tele[TELE_MAX];
    char addr[ADDR_MAX];
}PeoInfo;
?
//通讯录结构体
?
typedef struct Contact
{
    PeoInfo data[MAX];//存放真实数据的空间
    int sz;//记录有效数据的个数
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
contact.c：

#include "Contact.h"
?
//初始化通讯录
void InitContact(Contact* pcon)
{
    assert(pcon);
    pcon->sz = 0;
    memset(pcon->data, 0, sizeof(pcon->data));
}
?
//1、添加联系人信息
void AddContact(Contact* pcon)
{
    assert(pcon);

    //录入信息
    printf("请输入名字:>");
    scanf("%s", pcon->data[pcon->sz].name);
    printf("请输入年龄:>");
    scanf("%d", &(pcon->data[pcon->sz].age));
    printf("请输入性别:>");
    scanf("%s", pcon->data[pcon->sz].sex);
    printf("请输入电话:>");
    scanf("%s", pcon->data[pcon->sz].tele);
    printf("请输入地址:>");
    scanf("%s", pcon->data[pcon->sz].addr);
    ?
        pcon->sz++;
    printf("增加成功\n");
}
?
//查找指定条目下标
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
    //找不到
    return -1;
}
?
//2、删除指定联系人信息
void DelContact(Contact* pcon)
{
    int i = 0;
    char name[NAME_MAX] = { 0 };
    int pos = 0;
    assert(pcon);

    if (pcon->sz == 0) //空的就不用删了
    {
        printf("通讯录已空，无法删除\n");
        return;
    }
    //删除
    printf("请输入要删除人的名字:>");
    scanf("%s", name);
    //查找（删除之前需要先查找）
    pos = FindByName(pcon, name);
    if (pos == -1)
    {
        printf("要删除的条目不存在\n");
        return;
    }
    //移除
    for (i = pos; i < pcon->sz; i++)
    {
        pcon->data[i] = pcon->data[i + 1];
    }
    pcon->sz--;
    printf("删除成功\n");
}
?
//3、查找指定联系人信息
void FindContact(Contact* pcon)
{
    int i = 0;
    char name[NAME_MAX] = { 0 };
    int pos = 0;
    assert(pcon);

    if (pcon->sz == 0) //空的就不用删了
    {
        printf("通讯录已空，无法查找\n");
        return;
    }
    ?
        //查找
        printf("请输入要查找人的名字:>");
    scanf("%s", name);
    ?
        pos = FindByName(pcon, name);
    if (pos == -1)
    {
        printf("要查找的条目不存在\n");
        return;
    }

    printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[pos].name,
        pcon->data[pos].age,
        pcon->data[pos].sex,
        pcon->data[pos].tele,
        pcon->data[pos].addr);
}
?
//4、修改指定联系人信息
void ModifyContact(Contact* pcon)
{
    int i = 0;
    char name[NAME_MAX] = { 0 };
    int pos = 0;
    assert(pcon);

    if (pcon->sz == 0) //空的就不用找
    {
        printf("通讯录已空，无法修改信息\n");
        return;
    }
    //修改
    printf("请输入要修改条目的姓名:>");
    scanf("%s", name);
    //查找（修改之前需要先查找）
    pos = FindByName(pcon, name);
    if (pos == -1)
    {
        printf("要修改的条目不存在\n");
        return;
    }
    //询问要改什么
    printf("请输入要修改什么信息（1-名字，2-年龄，3-性别，4-电话，5-住址）:>");
    int msg;
    scanf("%d", &msg);
    switch (msg)
    {
    case 1:
        printf("请输入新的姓名:>");
        scanf("%s", pcon->data[pos].name);
        break;
    case 2:
        printf("请输入新的年龄:>");
        scanf("%d", &pcon->data[pos].age);
        break;
    case 3:
        printf("请输入新的性别:>");
        scanf("%s", pcon->data[pos].sex);
        break;
    case 4:
        printf("请输入新的电话:>");
        scanf("%s", pcon->data[pos].tele);
        break;
    case 5:
        printf("请输入新的地址:>");
        scanf("%s", pcon->data[pos].addr);
        break;
    default:
        printf("输入有误，修改失败\n");
        return;
    }
    printf("修改成功\n");
}
?
//5、显示所有联系人信息
void ShowContact(const Contact* pcon)
{
    int i = 0;
    assert(pcon);
    printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "地址");
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
//6、清空所有联系人信息
void ClearContact(Contact* pcon)
{
    InitContact(pcon);
}
?
//7、按照名字排序
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
测试代码：

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
    //创建通讯录
    Contact con;//
    //初始化通讯录
    InitContact(&con);
    do
    {
        menu();
        printf("请选择:>");
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
            printf("退出程序\n");
            return 0;
        default:
            printf("输入有误，请重新输入\n");
            break;
        }
    } while (input);
    return 0;
}