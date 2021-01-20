//#include<stdio.h>      2
//#include<math.h>
//int main()
//{
//	double n = 0, sum = 0.00;
//	double i = 1;
//	scanf_s("%lf", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sqrt(i)+sum;
//
//
//	}
//	printf("sum = %.2lf", sum);
//	
//	return 0;
//}
//#include<stdio.h>  3
//int j(int x) {  
//	int s = 1, i = 1;
//	for (; i <= x; i++) {
//		s = s * i;
//	}return s;
//}
//
//int main() {
//	int a, n, s;
//	scanf("%d", &a);
//	for (n = 1, s = 0; n <= a; n++) {
//		s = j(n) + s;
//	}printf("%d", s);
//
//
//}
//#include <stdio.h>  
//#include <math.h>
//int main()
//{
//	int n, min, num, i, t = 1;
//	scanf("%d", &n);//输入给出的第一个数 n ，代表之后有几个整数 
//	for (i = 1; i <= n; i++, t++)
//	{
//		scanf("%d", &num);//输入第二个数 
//		if (t == 1)
//		{
//			min = num;//先判定第二个数是最小值 
//		}
//		if (num < min)
//		{
//			min = num;//将第三个数与第二个数比较，如果第三个数更小，那么第三个数为最小值，以此类推 
//		}
//	}
//	printf("min = %d", min);
//	return 0;
//}
//
//
//#include<stdio.h>   寻找250
//#include<string.h>
//int main()
//{
//	char a[100000];
//	gets(a);
//	//	printf("%s\n",a);
//	char b[4] = "250";
//	char c[4];
//	int n = 1, i, l, k;
//	l = strlen(a);
//	for (i = 0; i < l; i++)
//	{
//		if (a[i] == ' ')
//		{
//			n++;
//		}
//		else
//		{
//			if (a[i] != '-')
//			{
//				for (int j = 0; j < 3; j++)
//				{
//					c[j] = a[i + j];
//
//				}
//				if (strcmp(c, b) == 0)
//				{
//					k = n;
//					break;
//				}
//			}
//			else if (a[i] == '-')
//			{
//				i++;
//			}
//
//
//		}
//	}
//	printf("%d", k);
//}
//#include<stdio.h>   龟头赛跑
//#include<math.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	int fen;
//	int i, j;
//	int gui = 0, tu = 0;
//	int index = 0;	//标记兔子休息时间
//	int swap = 1;		//决定兔子是否还继续跑
//	scanf("%d", &fen);
//	for (i = 1; i <= fen; i++)
//	{
//		if (index == 30)
//		{
//			index = 0;	swap = 1;
//		}
//		if (swap != -1)
//		{
//			gui += 3;
//			tu += 9;
//		}
//		else
//		{
//			gui += 3;
//			index++;
//		}
//		if (i % 10 == 0)
//		{
//			if (tu > gui)
//				swap = -1;
//		}
//	}
//	if (gui > tu)
//		printf("@_@ %d\n", gui);
//	else if (gui == tu)
//		printf("-_- %d\n", gui);
//	else
//		printf("^_^ %d\n", tu);
//	//printf("gui = %d,tu = %d\n",gui,tu);
//	return 0;
//}
//#include<stdio.h>   ACM  N0:4
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("%u 0x%X", ch, ch);
//
//
//	return 0;
//}
//#include<stdio.h>    电阻
//int main()
//{
//	double r=1.0, t=1.0, y=1.0;//两电阻一个并联后的
//	scanf_s("%lf %lf", &r, &t);
//	y = 1.0 / ((1.0 / r) + 1.0 / b);
//	printf("%.1lf",y);
//		return 0;
//}
//#include<stdio.h>     I
//int main()
//{
//	char c;
//	c = getchar();
//	if (c >= 'A' && c <= 'Z')
//	{
//		printf("Upper");
//	}
//	else if (c >= 'a' && c <= 'z')
//	{
//		printf("Lower");
//	}
//	else if (c >= '0' && c <= '9')
//	{
//		printf("Digit");
//	}
//	else
//	{
//		printf("Other");
//	}
//	return 0;
//}
//#include<stdio.h>   J 
//int main()
//{
//	double x, y;
//	scanf_s("%lf %lf", &x, &y);
//	if (x > 0)
//	{
//		if (y > 0)
//		{
//			printf("1\n");
//		}
//		if (y < 0)
//		{
//			printf("4\n");
//		}
//	}
//	else
//	{
//		if (x < 0)
//		{
//			if (y > 0)
//			{
//				printf("2\n");
//			}
//			else if (y < 0)
//			{
//				printf("3");
//			}
//
//		}
//	}
//	return 0;
//}
//#include<stdio.h>   K
//int main()
//{
//
//	int s;
//	scanf_s("%d", &s);
//	if (s >= 90)
//	{
//		printf("A");
//	}
//	else if (s >= 80 && s < 90)
//	{
//		printf("B");
//	}
//	else if (s >= 70 &&s < 80)
//	{
//		printf("C");
//	}
//	else if (s >= 60 && s < 70)
//	{
//		printf("D");
//	}
//	else if (s < 60)
//	{
//		printf("E");
//	}
//
//
//
//	return 0;
//}
//#include<stdio.h>  月份与天数
//int main()
//{
//	int a, b, c;
//	scanf("%d", &a);
//	b = a % 100;
//	c = a / 100;
//	if (c % 4 == 0 && c % 100 != 0 || c % 400 == 0)
//	{
//		if (b == 2)
//		{
//			printf("29\n");
//		}
//		else if (b == 4 || b == 6 || b == 9 || b == 11)
//		{
//			printf("30\n");
//		}
//		else
//		{
//			printf("31\n");
//
//		}
//	}
//	else
//	{
//		if (b == 2)
//		{
//			printf("28\n");
//		}
//		else if (b == 4 || b == 6 || b == 9 || b == 11)
//		{
//			printf("30\n");
//		}
//		else {
//			printf("31\n");
//		}
//
//	}
//
//
//
//
//	return 0;
//}
//#include<stdio.h>  N
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    if (a < 60 && b >= 60 || a >= 60 && b < 60)
//    {
//        printf("1");
//    }
//    else
//    {
//        printf("0");
//    }
//
//    return 0;
//}
//#include<stdio.h>    O
//int main()
//{
//    int a, b, c, d, x, y;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    if (a + b > c + d)
//    {
//        printf("Left\n");
//    }
//    else if (a + b < c + d)
//    {
//        printf("Right");
//    }
//    else if (a + b == c + d)
//    {
//        printf("Balance");
//    }
//
//
//    return 0;
//}
//#include<stdio.h>     比较大小并排序  P
//int main()
//{
//	int a, b, c,t;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//
//	printf("%d->%d->%d\n", a, b, c);
//
//
//
//
//
//	return 0;
//}
//#include<stdio.h>  Q
//int main()
//{
//    int n;
//    scanf_s("%d",&n);
//    if (n <= 3)
//    {
//        printf("%d\n", 4 + n);
//    }
//    else if ((n + 4) % 7 != 0)
//    {
//        printf("%d\n", (n + 4) % 7);
//    }
//    else if ((n + 4) % 7 == 0)
//    {
//    printf("7\n");
//    }
//
//    return 0;
//} 
//
//#include<stdio.h>  R
//int main()
//{
//	char c;
//	c = getchar();
//	if (c >= 'A' && c <= 'Z')
//	{
//		printf("Upper");
//	}
//	else if (c >= 'a' && c <= 'z')
//	{
//		printf("Lower");
//	}
//	else if (c >= '0' && c <= '9')
//	{
//		printf("Digit");
//	}
//	else
//	{
//		printf("Other");
//	}
//	return 0;
//}
//#include<stdio.h>         s
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	if (x >= -1 && x <= 1)
//	{
//		if (y <= 1 && y >= -1)
//		{
//			printf("yes\n");
//		}
//		else
//		{
//			printf("no\n");
//		}
//	  
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
//#include<stdio.h>   T
//#include<math.h>
//int main()
//{
//	double x1, x2, a, b, c, n, m;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	if (a != 0)
//	{
//		n = (b * b) - (4.0 * a * c);
//		if (n < 0)
//			printf("no real solution\n");
//		else {
//			m = sqrt(n);
//			x1 = (-b + m) / (2.0 * a);
//			x2 = (-b - m) / (2.0 * a);
//			if (x1 >= x2)
//			{
//				printf("x1=%.1f\n", x1);
//				printf("x2=%.1f\n", x2);
//			}
//			else {
//				printf("x1=%.1f\n", x2);
//				printf("x2=%.1f\n", x1);
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>   BC9-printf的返回值 第一次作业第五题
//int main()
//{
//	int ret = printf("Hello world!");
//	printf("\n");
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num ;
//	double s1, s2, s3;
//	scanf_s("%d %lf %lf", &num,&s1,&s2,&s3);
//	printf("The each subject score of  No. %d is %.2lf %.2lf %.2lf", num,s1,s2,s3);
//	return 0;
//}
//#include<stdio.h>  2020-12-05_C语言OJ题目_作业
//int main()
//{
//    int  a, b, c, d;
//    scanf_s("%d %d", &a, &b);
//    c = a / b;
//    d = a % b;
//    printf("%d %d", c, d);
//
//    
//   
//       
//    
//    return 0;
//} #include<stdio.h>  BC17-计算表达式的值
//int main()
//{
//	int a=40,c=212,s=1
//	s= (-8 + 22) * a - 10 + c / 2);
//	printf("%d", s);
//
//	return 0;
//}
//#include<stdio.h> BC27-计算球体的体积
//#include<math.h>
//int main()
//{
//	double r=1.0, v=1.0;
//	double p = 3.1415926;
//	scanf_s("%lf", &r);
//	v = (4.0 / 3) *p * pow(r,3);
//	printf("%.3lf", v);
//	return 0;
//}
//#include<stdio.h>  三角形面积
//#include<math.h>
//int main()
//{
//	double a=1.0, b=1.0,c=1.0,x,y,p;
//	scanf_s("%lf %lf %lf", &a, &b, &c);
//	if (a + b > c || a + c > b || b + c > a)
//	{
//		x= a + b + c;
//		p = (a + b + c) / 2.0;
//		y = sqrt(p * (p - a) * (p - b) * (p - c));
//		printf("circumference=%.2f area=%.2f\n", x, y);
//
//	}
//	else
//	{
//		getchar();
//	}
//
//
//
//
//	return 0;
//}
//#include<stdio.h>  计算BMI
//int main()
//{
//	double w, h, b;
//	scanf_s("%lf %lf", &w, &h);
//	b =  w / ((h/100.0)*(h/100.0));
//	printf("%.2lf", b);
//	return 0;
//}
//#include<stdio.h>   题目描述
//BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。BoBo出了一个问题给KiKi，输入一个字符，输出该字符相应的ASCII码。
//int main()
//{
//	char c = 0;
//	scanf("%c", &c);
//	printf("%d", c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	int c = a;
//	scanf_s("%d %d", &a, &b);
//	c = a;
//	a = b;
//	b = c;
//	printf("%d %d", a, b);
//	return 0;
//}
//#include<stdio.h>   时分秒
//int main()
//{
//	int s, h, m, se;
//	scanf_s("%d", &s);
//	h = s /60/60;
//	m = s/60%60;
//	se = s%60;
//	printf("%d %d %d", h, m, se);
//
//return 0;
//}
//#include<stdio.h>   打印星图案
//int main()
//{
//	int n=0, i=0, j=0;
//	while (~scanf_s("%d",&n))
//	{
//		int i = 0;   //打印行数
//		for (i = 0; i <= n; i++)
//		{
//			for (j = 0; j <=n-1-i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch= 0;
//	int i = 0, j = 0;
//	scanf_s("%c", &ch);//先打印列数  5列
//	for (i = 0; i < 5; i++)
//	{
//		
//		//打印空格数
//		for (j = 0; j < 5 - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印字符
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char  ch = 0;
//	while (scanf_s("%c",&ch) != EOF)
//	{
//		printf("%d", ch);
//		getchar();
//	}
//
//
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double a = 1.0, b = 1.0, c = 1.0, d = 1.0, av = 1.0;
//	int s = 0;
//	scanf_s("%lf %lf %lf %lf", &a, &b, &c, &d);
//	s = a + b + c + d;
//	av = (s / 4.0) * 1.0;
//	printf("sum = %d; Average = %.1lf", s, av);
//
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n, s;
//	scanf("%d", &n);
//	s = pow(2, n);
//	printf("2^%d = %d", n, s);
//
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a; double b; char c;
//	scanf_s("a=%d,b=%lf:c=%c", &a, &b, &c);
//	if (a > 0) {
//		printf("a=+%-9d,b=%20.3lf,c=%c", a, b, c);
//	}
//	else {
//		printf("a=%-10d,b=%20.3lf,c=%c", a, b, c);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int n,i,s;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		s = n % 5;
//		if (s >= 1 && s <= 3)
//		{
//			printf("Fishing in day %d", n);
//		}
//		else {
//			printf("Drying in day %d", n);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a == b)
//	{
//		printf("C");
//	}
//	else if (b == c)
//		printf("A");
//	else if (a == c)
//		printf("B");
//		return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, i, n, b, c, d, e, f, x;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		scanf_s("%d", &x);
//		a = x / 100000;
//		b = x / 10000 % 10;
//		c = x / 1000 % 10;
//		d = x / 1000 % 10;
//		e = x / 100 % 10;
//		f = x % 10;
//
//
//		if (a + b + c == d + e + f)
//		{
//			printf("y");
//
//		}
//		else
//		{
//			printf("w");
//		}
//	}
//	return 0;

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double  x = 0.0, y = 0.0;
//	scanf_s("%lf", &x);
//	if (x < 0)
//	{
//		y = x + 1.0;
//		printf("x=%.2lf,y=%.2lf", x, y);
//	}
//	else if (0 <= x && x <= 5)
//	{
//		y = 2.0 * x + 1.0;
//		printf("x=%.2lf,y=%.2lf", x, y);
//	}
//	else if (x > 5)
//	{
//		y = sin(x) + 5;
//		printf("x=%.2lf,y=%.2lf", x, y);
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double a=0.0, b=0.0, c=0.0;
//	while (scanf_s("%lf %lf %lf", &a, &b, &c) != EOF)
//	{
//		printf("%2.lf %.2lf", (a + b + c), (a + b + c) / 3.0);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int number = 1;
//	for (number  = 1; number <= 100; number++)
//	{
//		if (number%2==1)
//		{
//			printf("%d", number);
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double MATH = 0.0;
//	double ENGLISH = 0.0;
//	double CHINESE = 0.0;
//	scanf_s("%lf %lf %lf", &MATH, &ENGLISH, &CHINESE);
//	printf("%.2lf %.2lf", (MATH + ENGLISH + CHINESE), (MATH + ENGLISH + CHINESE) / 3.0);
//		
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	double  h = 0.0;
//	double m = 0.0;
//	int result = 0;
//	scanf_s("%d %lf %lf", &n, &h, &m);
//		result = n- (m / h);
//	printf("%d", result);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man");
//
//
//
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e;
//	double average;
//	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//	average = (a + b + c + d + e) / 5.0;
//	printf("%.1lf", average);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, sum;
//	scanf_s("0x%x 0%o", &a, &b);
//	sum = a + b;
//	printf("%d", sum);
//
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//    int n;
//
//    for (n = 10000; n <= 99999; n++)
//    {
//        int sum = 0;
//        for (int m = 10; m <= 10000; m *= 10)
//        {
//            sum += ((n / m) * (n % m));
//
//        }
//        if (sum == n)
//            printf("%d ", n);
//    }
//    return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//作业题 
//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}
//从大到小输出
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int m = 0;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		m = a;
//		a = b;
//		b = m;
//	}
//	if (a < c)
//	{
//		m = a;
//		a = c;
//		c = m;
//	}
//	if (b < c)
//	{
//		m = b;
//		b = c;
//		c = m;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//1-100中3的倍数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <100; i ++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}
//从大到小输出
//#include<stdio.h>
//
//int main()
//
//{
//
//	int a = 0;
//
//	int b = 0;
//
//	scanf_s("%d %d", &a, &b);
//
//	if (a > b)
//
//	{
//
//		printf("%d", a);
//
//	}
//
//	else
//
//	{
//
//		printf("%d", b);
//
//		return 0;
//
//	}
//}
//计算三角形面积
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d %d %d", &a, &b, &c);
//	double s = 0.00;
//	double circle = 0.00;
//	double p = 0.00;
//	circle = a + b + c;
//    p = (a + b + c) / 2.0;
//	s = sqrt(p * (p - a) * (p - b) * (p - c));
//	printf("%.2lf %.2lf", circle, s);
//
//	return 0;
//}
//三角形判断
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf_s("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a==b&&b==c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			 else if (a==b&&b!=c ||a==c&&c!=b ||b==c&&c!=a)
//			{
//				printf("Isosceles triangle!\n");
//			
//			}
//
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//         }
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//
//	return 0;
//}
//奇偶统计
//#include<stdio.h>
//int main()
//{
//	int N = 0;
//	int count = 0;
//	scanf_s("%d", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		if (i%2==1)
//		{
//			count += 1;
//		}
//	}
//	printf("%d %d", count, N - count);
//
//
//	return 0;
//}
//猜数字游戏
#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	// password  用来存放密码
//	//假设密码是字符串"123456"
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//	    scanf("%s", password);
//		//两个字符串的比较不能用== 而应该是strcmp
//		// strcmp-研究返回值 
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("密码正确，登陆成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序");
//	}
//	return 0;
//}
//void menu()
//{
//	printf("*********************\n");
//	printf("***** 1.play    *****\n");
//	printf("***** 0.exit    *****\n");
//	printf("*********************\n");
//}
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入猜的数字>:");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了");
//		}
//		else
//		{
//			printf("恭喜你，猜对了");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择（1/0):>");
//		scanf("%d", &input);
//		switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//					break;
//				default:
//					printf("选择错误\n");
//					break;
//		}
//	} while (input);
//
//
//	return 0;
//}
//KiKi想完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母；反之则转换为大写字母。
//#include<stdio.h>
//int main()
//{
//	char arr = '0';
//	while (scanf("%c", &arr) != EOF)
//	{
//		if (arr == '\n')
//			continue;
//		if (arr >= 'A' && arr <= 'Z')
//		{
//			printf("%c\n", arr + 32);
//		}
//		else if (arr >= 'a' && arr <= 'z')
//		{
//			printf("%c\n", arr - 32);
//		}
//		else
//			printf("%c\n", arr);
//
//	}
//
//	return 0;
//}
//KiKi参加了语文、数学、外语的考试，请帮他判断三科中的最高分。从键盘任意输入三个整数表示的分数，编程判断其中的最高分
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while(scanf("%d %d %d", &a, &b, &c)!=EOF);
	{//从大到小输出
		if (a >= b && a >= c)
		{
			printf("%d\n", a);
		}
		else if (b >= a && b >= c)
		{
			printf("%d\n", b);
		}
		else
			printf("%d\n", c);
		
	}
	return 0;
}