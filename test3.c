//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//void Reverse(char* str)
//{
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//    while (left < right)
//    {
//        char temp = *left;
//        *left = *right;
//        *right = temp;
//        ++left;
//        --right;
//    }
//    printf("%s", str);
//}
//int main()
//{
//   /* char str[] = "guankun";
//    char* p = str;
//    Reverse(str);
//
//*/
//    int a = 0;
//    int n = 0;
//    int i = 0;
//    int sum = 0;
//    int tmp = 0;
//    scanf_s("%d%d", &a, &n);
//    for (i = 0; i < n; i++)
//    {
//        tmp = tmp * 10 + a;
//        sum += tmp;
//    }
//    printf("%d", sum);
//    return 0;
//}
//int main()
//{
	/*int n = 0;
	for (n = 0; n<= 999999; n++)
	{
		int count = 1;
		int tmp = n;
		int sum = 0;
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}
		tmp = n;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}
		if (sum == n)
			printf("%d ", n);
	}*/
	/*int main()
	{
		int line = 0;
		int i = 0;
		scanf_s("%d", &line);
		for (i = 0; i < line; i++)
		{

			int j = 0;
			for (j = 0; j < line - 1 - i; j++)
			{
				printf(" ");
			}

			for (j = 0; j < 2 * i + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = 0; i < line - 1; i++)
		{
			int j = 0;
			for (j = 0; j <= i; j++)
			{
				printf(" ");
			}
			for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		return 0;
	*/
//	return 0;
//}
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf_s("%d", &money);
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("total = %d\n", total);
//	return 0;
//}
//size_t my_strlen(const char* str)
//{
//	const char* eos = str;
//	while (*eos++);
//	return(eos - str - 1);
//}
//
//int main()
//{
//	char str[] = "guankun";
//	char* p = str;
//	int ret=my_strlen(p);
//	printf("%d", ret);
//
//	return 0;
//}
//char* my_strcpy(char* dst, const char* src)
//{
//	char* cp = dst;
//	while (*cp++ = *src++);
//	return(dst);
//}
//int mian()
//{
//	char str[] = "guankun";
//	char strr[] = "is";
//	char strrr[] = "wisedom";
//	my_strcpy(str, "is");
//	my_strcpy(str, "wisedom");
//	printf("%s",str);
//	
//
//
//	return 0;
//}