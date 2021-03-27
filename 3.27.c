#include
#include
#include
#include<windows.h>
int main()
{
	srand(time(NULL));
	int b, p, x, c, d, e = 0, f = 0, g, h = 0, i = 1, j, l, m, n = 5, o = 0;
	printf(“选择你的杀手编号(1 - 5)\n”);
	scanf("%d", &b);
	printf("\n");
	int a[6] = { 0,1,2,3,4,5 }, k[10] = { 0 };
AA:while (n != 1)
{
	if (i1)
	{
		Sleep(1000);
		printf(“存活者: % d % d % d % d % d\n\n”, a[1], a[2], a[3], a[4], a[5]);
	}
	if (i6) i = 1;
	if (a[i]0)
	{
		i++;
		continue;
	}
	Sleep(1000);
	printf(“轮到 % d号\n”, i);
	if (ib)
	{
		Sleep(1000);
		printf(“选择你的目标: % d % d % d % d % d\n”, a[1], a[2], a[3], a[4], a[5]);
		scanf("%d", &p);
	}
	else
		do
			p = rand() % 5 + 1;
	while (p != i);
	while (a[p]0 || pi) p = rand() % 5 + 1;
	Sleep(1000);
	printf("%d号选择了%d号\n", i, p);
	Sleep(1000);
	printf("%d号掷出了%d\n", i, c = rand() % 6 + 1);
	if (i >= c)
	{
		a[p] = 0;
		Sleep(1000);
		printf("%d号杀死了%d号\n\n", i, p);
		n–;
	}
	else { Sleep(1000); printf("%d号没有杀死目标\n\n", i); }
	if (i5 && a[p]0)
	{
		if (rand() % 31 || rand() % 32)
		{
			if (p1 && f <= 2)
			{
				Sleep(1000); printf(“5号无视1号复活权\n”);
				Sleep(800); printf(“直接将其杀死\n\n”);
				f = 3;
			}
			if (p2 && h0)
			{
				Sleep(1000); printf(“5号无视2号复活权\n”);
				Sleep(800); printf(“直接将其杀死\n\n”);
				h = 1;
			}
			if (p3 && o0)
			{
				Sleep(1000); printf(“5号无视3号复活权\n”);
				Sleep(800); printf(“直接将其杀死\n\n”);
				o = 1;
			}
		}
	}
	if (a[1]0)
	{
		if (f <= 2)
		{
			Sleep(1000);
			printf(“1号使用复活权\n”);
			f++; n++; a[1] = 1;
			if (f1)
			{
				do g = rand() % 5 + 1;
				while (a[g]0 || g1);
				Sleep(1000); printf(“并随机诅咒了 % d号\n”, g);
				Sleep(1000); printf("%d号死了\n\n", g);
				a[g] = 0; n–;
			}
		}
		else a[1] = 0;
	}
	if (a[2]0 && h0)
	{
		Sleep(1000);
		printf(“2号使用复活权\n”);
		n++;
		a[2] = 2;
		do m = rand() % 5 + 1;
		while (a[m]0 || m2);
		Sleep(1000); printf(“并随机诅咒了 % d号\n”, m);
		if (rand() % 21)
		{
			a[m] = 0;
			Sleep(1000); printf("%d号死了\n\n", m);
			n–;
		}
		else
		{
			Sleep(1000); printf(“但他没死\n\n”);
		}
		h = 1;
	}
	if (a[3]0 && o0)
	{
		Sleep(1000); printf(“3号使用复活权\n\n”); a[3] = 3; o++; n++;
	}
	if (i4 && a[p]0)
	{
		if (n1) break;
		else
		{
			Sleep(1000); printf(“4号使用再次攻击权\n”);
			goto AA;
		}
	}
	if (a[b]0 && e0)
	{
		if (n1) break;
		printf(“你死了，是否继续观看游戏至结束？是按0, 否按1\n”);
		scanf("%d", &x);
		if (x == 1) break;
		else e = 1;
	}
	i++;
}
for (j = 1; j <= 5; j++) if (a[j] != 0) d = j;
if (x != 1)
{
	Sleep(800);
	printf("%d号赢了", d);
}
else
printf(“游戏结束”);
}
贪吃蛇小游戏代码
#include
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
const int N = 21;
void Get_xy(int x, int y) //定位光标位置
{
	HANDLE hout;
	COORD pos;
	pos.X = x2;
	pos.Y = y;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hout, pos);
}
void Color(int num) //设置颜色
{
	HANDLE hout;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hout, num);
}
void Initial() //初始化
{
	int i, j;
	int wall[N + 2][N + 2] = { {0} };
	for (i = 1; i <= N; i++)
		for (j = 1; j <= N; j++)
			wall[i][j] = 1;
	Color(11);
	for (i = 0; i < N + 2; i++)
	{
		for (j = 0; j < N + 2; j++)
		{
			if (wall[i][j])
				cout << “■”;
			else cout << “□”;
		}
		cout << endl;
	}
	Get_xy(N + 3, 1); Color(20);
	cout << “按’W’, ‘S’, ‘A’, 'D’进行操作”<<endl;
		Get_xy(N + 3, 2); Color(20);
	cout << “按任意键暂停” << endl;
	Get_xy(N + 3, 3); Color(20);
	cout << “得分：” << endl;
}
void game()
{
	int** snake = NULL;
	int len = 1;
	int i;
	int score = 0;
	int apple[2];
	int tail[2];
	char ch = ‘p’;
	Initial();
	srand((unsigned)time(NULL));
	apple[0] = rand() % N + 1;
	apple[1] = rand() % N + 1;
	Get_xy(apple[0], apple[1]);
	Color(12);
	cout << “●” << endl;
	snake = (int**)realloc(snake, sizeof(int)len);
	for (i = 0; i < len; i++)
		snake[i] = (int)malloc(sizeof(int)2);
	snake[0][0] = N / 2;
	snake[0][1] = N / 2 + 1;
	Get_xy(snake[0][0], snake[0][1]); Color(14);
	cout << “⊙” << endl;
	int flag = 1;
	while (1)
	{
		if (flag)
		{
			tail[0] = snake[len - 1][0];
			tail[1] = snake[len - 1][1];
			Get_xy(tail[0], tail[1]);
			Color(11);
			cout << “■” << endl;
		}
		flag = 1;
		for (i = len - 1; i > 0; i–)
		{
			snake[i][0] = snake[i - 1][0];
			snake[i][1] = snake[i - 1][1];
			Get_xy(snake[i][0], snake[i][1]);
			Color(14);
			cout << “★” << endl;
		}
		if (kbhit())
		{
			Get_xy(0, N + 3);
			ch = getche();
		}
		switch (ch)
		{
		case ‘W’:
		case ‘w’: snake[0][1]–; break;
		case ‘S’:
		case ‘s’: snake[0][1]++; break;
		case ‘A’:
		case ‘a’: snake[0][0]–; break;
		case ‘D’:
		case ‘d’: snake[0][0]++; break;
		default:break;
		}
		for (i = 1; i < len; i++)
		{
			if (snake[0][0] == snake[i][0] && snake[0][1] == snake[i][1])
			{
				Get_xy(N / 2, N / 2); Color(30);
				cout << “Game over!” << endl;
				exit(0);
			}
		}
		Get_xy(snake[0][0], snake[0][1]);
		Color(14); cout << “⊙” << endl;
		Sleep(abs(200 - 0.5score));
		if (snake[0][0] == apple[0] && snake[0][1]apple[1])
		{
			flag = 0; score++; len++; srand((unsigned)time(NULL));
			snake = (int**)realloc(snake, sizeof(int*)len);
			snake[len - 1] = (int)malloc(sizeof(int) * 2);
			Get_xy(N + 6, 3); Color(20); cout << score << endl;
			apple[0] = rand() % N + 1; apple[1] = rand() % N + 1;
			Get_xy(apple[0], apple[1]);
			Color(12);
			cout << “●” << endl;
		}
		if (snake[0][0] - 1 || snake[0][0]N + 1 || snake[0][1] - 1 || snake[0][1] == N + 1)
		{
			Get_xy(N / 2, N / 2); Color(30);
			cout << “Game Over!” << endl;
			for (i = 0; i < len; i++)
				free(snake[i]);
			Sleep(INFINITE);
			exit(0);
		}
		if (len >= N * N - 1)
		{
			Get_xy(N / 2, N / 2); Color(30);
			cout << “Win!” << endl;
			for (i = 0; i < len; i++)
				free(snake[i]);
			Sleep(INFINITE);
			exit(0);
		}
	}
}
int main()
{
	game();
}
冒险小游戏代码（就是一个比较简单的打怪小游戏）
#include<stdio.h>
#define DECISION “你想去哪？\n1 村庄\n2 冒险\n3 查看个人信息\n4 存档（首次游戏请先存储一次再游戏）”//待添加
#define DECISION2 “你想挑战的副本是：1.史莱姆森林 2.哥布林部落 3.鬼人古堡”//待添加
void fjshop(void);//防具店
void wqshop(void);//武器店
void vill(void);//村庄
void zdmk(void);//攻击
void lvup(void);//升级
void slm(void);//史莱姆
void slm1(void);
void slm2(void);//完毕
void gbl(void);//哥布林
void gbl1(void);
void gbl2(void);//end
void gr(void);//鬼人
void gr1(void);//
void gr2(void);//end//我把这些函数整理了下，显得整洁
void maoxian(void);
void vill(void);
void pi(void);//personal information本来想叫rw(人物)，但害怕后期加任务栏
void cd(void);//存档
int hp = 200, mp = 20, sp, ex = 0, p = 5, q = 20, lv = 1, i = 1, eak = 0, edf = 0, gd = 0, viz = 0, sh, tybosshp, x, hpboss, fb;

int main(void)//主程序开始
{
	while (2 > 1)
	{
		while (x == 0)
		{
			printf("%s\n", DECISION);
			scanf("%d", &x);
			while (x == 1)
			{
				vill();
				viz = 0;
				x = 0;
			}
			while (x == 2)
			{
				maoxian();
				x = 0;
			}
			while (x == 3)
			{
				pi();
				x = 0;
			}
			while (x == 4)
			{
				cd();
				x = 0;
			}
		}
	
	}
	return 0;
}//主程序到此处完结
void cd(void)//存档模块
{
	int du;
	printf(“你想要读取还是存储 ? \n1 读取\n2 存储\n3 取消\n”);
	scanf("%d", &du);
	int a[] = { lv,hp,mp,ex,gd };
	while (du1)
	{
		FILE* fpRead = fopen(“data.txt”, “r”);
		int b[5];
		for (int i = 0; i < 5; i++)
		{
			fscanf(fpRead, "%d ", &b[i]);
			a[i] = b[i];
		}
		lv = a[0], hp = a[1], mp = a[2], ex = a[3], gd = a[4];
		du = -1;
	}
	while (du2)
	{
		FILE fpWrite = fopen(“data.txt”, “w”);
		for (int i = 0; i < 5; i++)
		{
			fprintf(fpWrite, "%d “,a[i]);
		}
		fclose(fpWrite);
		du = -1;
	}
	while (du == 3)
	{
		du = -1;
	}
}
void pi(void)//个人信息模块
{
	printf(” 个人信息 \n") ;
		printf(“称号：暂未开放 \n”);//暂无
	printf(“等级: % d hp : % d mp : % d 经验 : % d 金币 : % d \n”, lv, hp, mp, ex, gd);
	printf(“技能伤害：1.重击: % d 2.嗜血 : boss越强，伤害越高 3.星爆气流斩 : % d \n”, p, q);
}
void lvup(void)//升级模块
{
	while (ex > 100lv)//把经验栏提出来，因为每个怪物经验不同

	{
		printf(“升级了，你的等级为 % d\n”, lv + 1);

		p = p + 3;

		q = q + 10;

		ex = ex - 100 * lv;

		lv = lv + 1;

		hp = 200 + 20 * lv;

		mp = 20 + 2 * lv;

	}
}
void vill(void)//村庄
{
	while (viz == 0)
	{
		printf(“欢迎回到村庄勇士\n请选择目的\n1 武器店\n2 防具店\n3 退出村庄\n”);
		scanf("%d", &viz);
		while (viz >= 3)
		{
			printf(“退出村庄\n”);
			viz = -1;
		}

		while (viz == 1)
		{
			wqshop();
		}
		while (viz == 2)
		{
			fjshop();
		}
		
	}
}//村庄模块
void wqshop(void)//武器店
{
	while (viz1)
	{
		int wq = 0, dj = 1, cj = 1;
		printf(“你好勇士，欢迎来到武器店\n请问你需要什么？\n1 短剑(伤害加10)\n2 500金币 长剑(伤害加30)\n3 2000金币 退出武器店\n”);
		scanf("%d", &wq);
		if (wq > 2)
		{
			while (wq > 3)
			{
				printf(“未开放，敬请期待\n”);
				wq = 0;
			}
			while (wq3)
			{
				printf(“你选择退出\n; ”);
				viz = 0;
				wq = 0;
			}
		}
		else
		{
			while (wq1)
			{
				if (gd > 500)
				{
					if (dj = 1)
					{
						printf(“你购买了短剑，伤害加十，重复购买无效\n”);
						eak = 10;
						p = p + eak;//声明全局变量，装备加成攻击力
						dj = 0;
						wq = 0;
					}
					else
					{
						printf(“你已经购买过了\n”);
					}
				}
				else
				{
					printf(“金币不足\n”);
				}
				wq = 0;
			}
			while (wq2)
			{
				if (gd > 2000)
				{
					if (cj = 1)
					{
						printf(“你购买了长剑，伤害加三十，重复购买无效\n”);
						eak = 30;
						p = p + eak;//声明全局变量，装备加成攻击力
						cj = 0;
					}
					else
					{
						printf(“你已经购买过了\n”);
					}
				}
				else
				{
					printf(“金币不足\n”);
				}
				wq = 0;
			}
		}
	}
}
void fjshop(void)//防具店
{
	while (viz == 2)
	{
		int fj = 0, bj = 1, szj = 1;
		printf(“你好勇士，欢迎来到防具店\n请问你需要什么？\n1 布甲(伤害抵消4)\n2 500金币 锁子甲(伤害抵消7)\n3 1000金币 退出防具店\n”);
		scanf("%d", &fj);
		if (fj > 2)
		{
			while (fj > 3)
			{
				printf(“未开放，敬请期待\n”);
				fj = 0;

			}
			while (fj == 3)
			{
				printf("你选择退出\n;");
				viz = 0;
				fj = 0;
			}
		}
		else
		{
			while (fj == 1)
			{
				if (gd > 500)
				{
					if (bj = 1)
					{
						printf("你购买了布甲，伤害抵消4，重复购买无效\n");
						edf = 4;//声明全局变量，装备加成攻击力
						bj = 0;
					}
					else
					{
						printf("你已经购买过了\n");
					}
				}
				else
				{
					printf("金币不足\n");
				}
				fj = 0;
			}
			while (fj == 2)
			{
				if (gd > 1000)
				{
					if (szj = 1)
					{
						printf("你购买了锁子甲，伤害抵消7，重复购买无效\n");
						edf = 7;//声明全局变量，装备加成攻击力
						szj = 0;
					}
					else
					{
						printf("你已经购买过了\n");
					}
				}
				else
				{
					printf("金币不足\n");
				}
				fj = 0;
			}

		}
	}

	
}
void maoxian(void)//冒险模块
{
	printf("%s\n", DECISION2);
	scanf("%d", &fb);
	if (fb > 3)
	{
		printf(“未开放请重新选择\n”);
	}
	else
	{
		switch (fb)//这样看起来不简洁，但后期加掉落物品时很方便

		{

		case 1:
			slm();
			break;

		case 2:
			slm();
			gbl();
			break;

		case 3:
			slm(); slm();//同上 
			gbl();
			gr();
			break;
			1
				2
				3
				4
				5
				6
				7
				8
				9
				10
				11
				12
				13
				14
				15
				16
		}
	}
	lvup();
	hp = 200 + 20lv;
	mp = 20 + 2lv;
}
void slm(void)//怪物模块
{
	slm1();
	zdmk();
	slm2();
}
void gbl(void)
{
	gbl1();
	zdmk();
	gbl2();
}
void gr(void)
{
	gr1();
	zdmk();
	gr2();
}
void zdmk(void)//战斗模块
{
	while (hp > 0 && tybosshp > 0)
	{
		i = 1;
		printf(“请选择技能\n1.重击(造成 % d点伤害，mp + 1)\n2.嗜血(造成当前生命值百分之八的伤害，mp - 3)\n3.星爆气流斩(造成 % d点伤害，mp - 5)\n”, p, q);//待添加
		scanf("%d", &sp);

		while (4 < sp)
		{
			printf("技能选择错误，请重新选择\n");
			sp = -1;
		}
		while (sp == 1)
		{

			tybosshp = tybosshp - p;
			mp++;
			printf("你使用技能重击对boss造成%d点伤害,恢复一点mp,boss还有%d血量，你的mp还有%d\n", p, tybosshp, mp);
			sp = 0;

		}

		while (sp == 2)
		{

			while (mp >= 3 && sp == 2)
			{
				sh = tybosshp * 0.08;
				tybosshp = tybosshp * 0.92;
				mp = mp - 3;
				printf("你使用技能嗜血对boss造成%d点伤害，boss还有%d血量，你的mp还有%d\n", sh, tybosshp, mp);
				sp = 0;
			}

			while (mp < 3 && sp == 2)
			{
				printf("mp不足3点,无法释放技能嗜血\n");
				sp = -1;
			}
		}

		while (sp == 3)
		{

			while (mp >= 5 && sp == 3)
			{
				tybosshp = tybosshp - q;
				mp = mp - 5;
				sp = 0;
				printf("你使用技能星爆气流斩对boss造成%d点伤害，boss还有%d血量，你的mp还有%d\n", q, tybosshp, mp);//待定 
			}
			while (mp < 5 && sp == 3)
			{
				printf("mp不足5点,无法释放技能星爆气流斩 \n");
				sp = -1;
			}
		}
		while (tybosshp > 0 && sp == 0)
		{
			if (tybosshp > hpboss * 0.1)//boss血量下降到10%以下暴怒 
			{
				sh = 15 + hp * 0.01 - edf;
				hp = hp - sh;
				printf("boss撞了你一下，你的hp减少了%d点，你还有%d点生命值\n", sh, hp);
				sp = -1;
			}
			else
			{
				printf("boss变为狂暴状态");
				sh = 15 + hpboss * 0.1 - edf;//伤害提升 
				hp = hp - sh;
				printf("boss使用疯狂乱打，你的hp减少了%d点，你还有%d点生命值\n", sh, hp);
				sp = -1;
			}
		}
	}
	while (tybosshp <= 0 && i == 1)
	{
		printf("你已击杀BOSS,恭喜通关！\n");
		i = i + 1;
	}
	while (hp < 0 && i == 1)
	{
		printf("你已阵亡，请在简单副本提升能力\n");
		i = i + 2;
		getchar();
		printf("你已原地复活\n恢复hp,mp");
		hp = 200 + 20 * lv;
		mp = 20 + 2 * lv;
	}
	
}

//分割线史莱姆
void slm1(void)
{
	printf(“史莱姆出现\n”);

	hpboss = 100;//BOSS的生命值

	tybosshp = hpboss;
}
void slm2(void)
{
	if (i == 2)
	{
		printf(“你获得20ex, 50金币\n”);//怪物经验已全部调整

		ex = ex + 20;

		gd = gd + 50;

		printf("你的经验为%d\n", ex);
		1
			2
			3
			4
			5
	}
	else
	{
		printf(“继续努力吧\n”);
	}
}

void gbl1(void)//哥布林
{
	printf(“哥布林出现\n”);

	hpboss = 300;//BOSS的生命值

	tybosshp = hpboss;
}
void gbl2(void)//end
{
	if (i == 2)
	{
		printf(“你获得100ex, 200金币\n”);

		ex = ex + 100;

		gd = gd + 200;

		printf("你的经验为%d\n", ex);
		1
			2
			3
			4
			5
	}
	else
	{
		printf(“继续努力吧\n”);
	}
}
void gr1(void)//鬼人
{
	printf(“鬼人出现\n”);

	hpboss = 800;//BOSS的生命值

	tybosshp = hpboss;
}
void gr2(void)
{
	if (i == 2)
	{
		printf(“你获得300ex, 500金币\n”);

		ex = ex + 300;

		gd = gd + 500;

		printf("你的经验为%d\n", ex);
		1
			2
			3
			4
			5
	}
	else
	{
		printf(“继续努力吧\n”);
	}
}
猜拳小游戏代码（和电脑猜拳）
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	char gamer; // 玩家出拳
	int computer; // 电脑出拳
	int result; // 比赛结果
	// 为了避免玩一次游戏就退出程序，可以将代码放在循环中
	while (1) {
		printf(“这是一个猜拳的小游戏，请输入你要出的拳头：\n”);
		printf(“A:剪刀\nB : 石头\nC : 布\nD : 不玩了\n”);
		scanf("%c%*c", &gamer);
		switch (gamer) {
		case 65 | 97: // A | a
			gamer = 4; break;
		case 66 | 98: // B | b
			gamer = 7; break;
		case 67 | 99: // C | c
			gamer = 10; break;
		case 68 | 100: // D | d
			return 0;

		default:
			printf("你的选择为 %c 选择错误,退出...\n", gamer);
			getchar();
			system("cls"); // 清屏
			return 0;
			break;
		}

		srand((unsigned)time(NULL));  // 随机数种子
		computer = rand() % 3;  // 产生随机数并取余，得到电脑出拳
		result = (int)gamer + computer;  // gamer 为 char 类型，数学运算时要强制转换类型
		printf("电脑出了");
		switch (computer)
		{
		case 0:printf("剪刀\n"); break; //4    1
		case 1:printf("石头\n"); break; //7  2
		case 2:printf("布\n"); break;   //10 3
		}
		printf("你出了");
		switch (gamer)
		{
		case 4:printf("剪刀\n"); break;
		case 7:printf("石头\n"); break;
		case 10:printf("布\n"); break;
		}
		if (result == 6 || result == 7 || result == 11) printf("你赢了!");
		else if (result == 5 || result == 9 || result == 10) printf("电脑赢了!");
		else printf("平手");
		system("pause>nul&&cls");  // 暂停并清屏
	}
	return 0;
