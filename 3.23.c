//void myqsort(void* base, size_t nitems, size_t size, int(*compar)(const void*, const void*))
//{
//	int i, j;
//	char* st = (char*)base; //void *不方便加减，用char *加减轻松且字节跳转为1，方便控制。
//	char tmp[16]; //考虑到long double类型，临时空间做成16字节比较保险
//
//	for (i = 0; i < nitems - 1; i++)
//	{
//		for (j = 0; j < nitems - 1 - i; j++) //冒泡常用循环头
//		{
//			if (compar(st + j * size, st + (j + 1) * size)) //比较的时候跳转注意乘size
//			{
//				memcpy(tmp, st + j * size, size); //交换操作用memcpy完成就不会出问题。
//				memcpy(st + j * size, st + (j + 1) * size, size);
//				memcpy(st + (j + 1) * size, tmp, size);
//			}
//		}
//	}
//}
//int main()
//{
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
//}
//void leftRound(char* src, int time)
//{
//	int len = strlen(src);
//	int pos = time % len; //断开位置的下标
//	char tmp[256] = { 0 }; //更准确的话可以选择malloc len + 1个字节的空间来做这个tmp
//
//	strcpy(tmp, src + pos); //先将后面的全部拷过来
//	strncat(tmp, src, pos); //然后将前面几个接上
//	strcpy(src, tmp); //最后拷回去
//}
//void leftRound(char* src, int time)
//{
//	int i, j, tmp;
//	int len = strlen(src);
//	time %= len; //长度为5的情况下，旋转6、11、16...次相当于1次，7、12、17...次相当于2次，以此类推。
//	for (i = 0; i < time; i++) //执行k次的单次平移
//	{
//		tmp = src[0];
//		for (j = 0; j < len - 1; j++) //单次平移
//		{
//			src[j] = src[j + 1];
//		}
//		src[j] = tmp;
//	}
//}
//#include <stdio.h>
//
//int findnum(int a[][3], int x, int y, int f) //第一个参数的类型需要调整
//{
//	int i = 0, j = x - 1; //从左上角开始遍历
//
//	while (j >= 0 && i < y)
//	{
//		if (a[i][j] < f) //比我大就向下
//		{
//			i++;
//		}
//		else if (a[i][j] > f) //比我小就向左
//		{
//			j--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a[][3] = { {1, 3, 5},
//				  {3, 5, 7},
//				  {5, 7, 9} }; //一个示例
//
//	if (findnum(a, 3, 3, 2))
//	{
//		printf("It has been found!\n");
//	}
//	else
//	{
//		printf("It hasn't been found!\n");
//	}
//
//	return 0;
//}