#include<stdio.h>
#include<assert.h>
//char my_strstr(char* str1, char* str2)
//{
//	assert(str1);
//	assert(str2);
//	char* cp = (char*)str1;
//	char* substr = (char*)str2;
//	char* s1 = NULL;
//	if (*str2 == '\0')
//	{
//		return NULL;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		substr = str2;
//		while (*s1 && *substr &&(*s1 == *substr))
//		{
//			s1++;
//			substr++;
//		}
//		if (*substr == '\0')
//		{
//			return cp;
//			cp++;
//		}
//
//	}
//
//}
//#include<string.h>
//strstr   Find a sbustring��ȡ�ַ��� ���ַ����в��ҵ�һ�γ���
//needle ��λ�ã�������'\0',�Ҳ������ؿ�ָ��
//strcmpʵ��
//char* my_strcmp(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)//�����ַ�����б��0
//	{
//		;
//	}
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//stract׷���ַ���ʵ��
  my_stract(char* dest, char* src)
{
	  assert(dest &&src );
	  char* ret = dest;
	//1.�ҵ�Ŀ���б��0��2.׷��
	while (*dest)
	{
		dest++;
	}
	//2.׷��
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	//ģ��ʵ��strcmp
	/*char arr[20] = "*************";
	char str[] = "bite";
	my_strcmp(arr, str);
	printf("%s", arr);*/
	//ģ��ʵ��stract׷���ַ���
	char arr1[20] = "hello";
	char arr2[] = "bite";
	char* ret = my_stract(arr1, arr2);
	printf("%s", ret);
/*	char str1[] = "cdef";
	char str2[] = "abcdefgh";
	char* ret = my_strstr(str2, str1);
	printf("%s", ret)*/;
/*	const char arr[] = "guankunbite";
	const char arr1[] = "guankun";	
    char *ret=strstr(arr,arr1);
     printf("%s",ret)*/;
	/*const char haystack[20] = "RUNOOB";
	const char needle[10] = "NOOB";
	char* ret;

	ret = strstr(haystack, needle);

	printf("���ַ����ǣ� %s\n", ret);*/
	return 0;
}