#include<stdio.h>
#include<assert.h>
//模拟实现strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//    assert(str1);
//    assert(str2);
//
//    char* cp = (char*)str1;
//    char* substr = (char*)str2;
//    char* s1 = NULL;
//
//    if (*str2 == '\0')
//        return NULL;
//
//    while (*cp)
//    {
//        s1 = cp;
//        substr = str2;
//        while (*s1 && *substr && (*s1 == *substr))
//        {
//            s1++;
//            substr++;
//        }
//        if (*substr == '\0')
//            return cp;
//        cp++;
//    }
//}
//char my_strcpy(char* arr1,  const char* arr2)
//{
//	char* ret = arr1;
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	while ((*arr1++ = *arr2++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "guan kun";
//	char arr2[20] = "bite keji ";
//	 my_strcpy(arr2, arr1);
//	printf("%s",arr1);
//
//
//	return 0;
//}
// 1.计数器方式
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str)//解引用直到字符0停止
//	{
//		count++;
//		str++;
//	}
//	return count;
//	//最简单的一种
//}
//int main()
//{
//	char arr[10] = "guankun";
//	int p = my_strlen(arr);
//	printf("%d", p);
//	return 0;
//}
////2不能创建临时变量计时器
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;//如果是零返回 不是就在递归加一
//	}
//	else
//		return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char arr[10] = "guankun";
//	int p = my_strlen(arr);
//	printf("%d", p);
//
//
//
//
//	return 0;
//}
////3.指针——指针
//int my_strlen(char* arr)
//{
//	char* p = arr;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - arr;
//}
//int main()
//{
//	char arr[] = "bite keji";
//	int p = my_strlen(arr);
//	printf("%d", p);
//
//
//	return 0;
//}char *my_strstr(const char* str1, const char* str2 )
//{
//assert(str1);
//assert(str2);
//
//char* cp = (char*)str1;
//char* substr = (char*)str2;
//char* s1 = NULL;
//
//if (*str2 == '\0')
//return NULL;
//
//while (*cp)
//{
//    s1 = cp;
//    substr = str2;
//    while (*s1 && *substr && (*s1 == *substr))
//    {
//        s1++;
//        substr++;
//    }
//    if (*substr == '\0')
//        return cp;
//    cp++;
//}
//}
//int main()
//{
//    char arr
//
//    return 0;
//}
void LoadContact(Contact* pcon)
{
    PeoInfo tmp = { 0 };
    FILE* pfRead = fopen("contact.dat", "rb");
    if (pfRead == NULL)
    {
        printf("加载信息：打开文件失败\n");
        return;
    }
    //加载信息
    while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
    {
        CheckCapacity(pcon);
        pcon->data[pcon->sz] = tmp;
        pcon->sz++;
    }
    ​
        fclose(pfRead);
    pfRead = NULL;
}
​
void SaveContact(Contact* pcon)
{
    int i = 0;
    FILE* pfWrite = fopen("contact.dat", "wb");
    if (pfWrite == NULL)
    {
        printf("保存信息：打开文件失败\n");
        return;
    }
    //保存信息
    for (i = 0; i < pcon->sz; i++)
    {
        fwrite(pcon->data + i, sizeof(PeoInfo), 1, pfWrite);
    }
    ​
        //关闭文件
        fclose(pfWrite);
    pfWrite = NULL;
}
修改函数：

void InitContact(Contact* pcon)
{
    assert(pcon);
    pcon->sz = 0;
    pcon->data = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo));
    if (pcon->data == NULL)
    {
        printf("%s\n", strerror(errno));
        return;
    }
    pcon->capacity = DEFAULT_SZ;

    /*******新增代码*********/
    LoadContact(pcon); //初始化时直接读取
     /**********************/
}
测试函数修改：

  case EXIT:
      SaveContact(&con); //退出时先保存
      DestroyContact(&con); //再销毁
      printf("退出程序\n");
      break;