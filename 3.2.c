#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//char* my_strcpy(char* dst, const char* src)
//{
//	char* cp = dst;
//	while (*cp++ = *src++);
//	return(dst);
//}
//int main()
//{
//	char str[] = "byte technology";
//	printf("%s\n", str);
//	char strrr[] = "excellent";
//	my_strcpy(str, strrr);
//	printf("%s\n", str);
//
//
//
//	return 0;
//}
//void my_swap(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		while (left < right && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	printf("交换前\n");
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	my_swap(arr, sz);
//	printf("交换后");
//	for (i = 0; i < sz; i++)
//	{
//
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}
//int checkData(int* p)
//{
//	int tmp[7] = { 0 }; 
//
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		if (tmp[p[i]]) 
//		{
//			return 0;
//		}
//		tmp[p[i]] = 1; 
//	}
//	return 1;
//}
//
//int main()
//{
//	int p[5]; //0 1 2 3 4分别代表a b c d e
//
//	for (p[0] = 1; p[0] <= 5; p[0]++)
//	{
//		for (p[1] = 1; p[1] <= 5; p[1]++)
//		{
//			for (p[2] = 1; p[2] <= 5; p[2]++)
//			{
//				for (p[3] = 1; p[3] <= 5; p[3]++)
//				{
//					for (p[4] = 1; p[4] <= 5; p[4]++) 
//					{
//						
//						if ((p[1] == 2) + (p[0] == 3) == 1 && 
//							(p[1] == 2) + (p[4] == 4) == 1 && 
//							(p[2] == 1) + (p[3] == 2) == 1 && 
//							(p[2] == 5) + (p[3] == 3) == 1 &&
//							(p[4] == 4) + (p[0] == 1) == 1 && 
//							checkData(p) 
//							)
//						{
//							for (int i = 0; i < 5; i++)
//							{
//								printf("%d ", p[i]);
//							}
//							putchar('\n');
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}
//int findRound(const char* src, char* find)
//{
//	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
//	strcpy(tmp, src); //先拷贝一遍
//	strcat(tmp, src); //再连接一遍
//	return strstr(tmp, find) != NULL; //看看找不找得到
//}
//int main()
//{
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//	int ret = findRound(s1, s2);
//	printf("%d", ret);
//
//
//
//	return 0;
//}
//void reverse_part(char* str, int start, int end) //将字符串从start到end这一段逆序
//{
//	int i, j;
//	char tmp;
//
//	for (i = start, j = end; i < j; i++, j--)
//	{
//		tmp = str[i];
//		str[i] = str[j];
//		str[j] = tmp;
//	}
//}
//
//void leftRound(char* src, int time)
//{
//	int len = strlen(src);
//	int pos = time % len;
//	reverse_part(src, 0, pos - 1); //逆序前段
//	reverse_part(src, pos, len - 1); //逆序后段
//	reverse_part(src, 0, len - 1); //整体逆序
}
int main()
{




	return 0;
}