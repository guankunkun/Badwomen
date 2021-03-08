#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//struct s
//{
//	int data[1000];
//	int num;
//};
//struct s s = { {1,2,3,4},100 };
////结构体传参
//void print1(struct s s)
//{
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct s* ps)
//{
//	printf("%d\n", ps->num);
//}

int main()
{
	enum  ComputerLangue
	{
		C,
		Java,
		Python,

	};
	/*print1(s);
	print2(&s);
*/
	/*char c = 'a';
	while (scanf("%c", &c) != EOF)
	{
		printf("%c\n", c - 32);
	}*/


	return 0;
}
//	void Reverse(int arr[], int sz)
//	{
//		int left = 0;
//		int right = sz - 1;
//		while (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//		
//		for (sz= left; sz < right; sz++)
//		{
//			printf("%d", arr[sz]);
//		}
//}
/*int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	int arr[20] = { 0 };
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int s = 0;
	scanf("%d", &s);
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == s)
		{
			printf("Yes");
			break;
		}
		else
			printf("No");
     */
	/*if (ret == 1)
		printf("yes");
	else
		printf("no");*/

//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[5] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Reverse(arr, n);
//	
//	return 0;
//}
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], * p;
//p = &x;
//struct stu
//{
//	char name[20];
//	int age;
//	
//};
//struct stu s = { "Geralt ",100};
//char c = 'a';
//while (scanf("%c", &c) != EOF)
//{
//	c = 'b';
//}