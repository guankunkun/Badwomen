#include
#include
#include
#include<windows.h>
int main()
{
	srand(time(NULL));
	int b, p, x, c, d, e = 0, f = 0, g, h = 0, i = 1, j, l, m, n = 5, o = 0;
	printf(��ѡ�����ɱ�ֱ��(1 - 5)\n��);
	scanf("%d", &b);
	printf("\n");
	int a[6] = { 0,1,2,3,4,5 }, k[10] = { 0 };
AA:while (n != 1)
{
	if (i1)
	{
		Sleep(1000);
		printf(�������: % d % d % d % d % d\n\n��, a[1], a[2], a[3], a[4], a[5]);
	}
	if (i6) i = 1;
	if (a[i]0)
	{
		i++;
		continue;
	}
	Sleep(1000);
	printf(���ֵ� % d��\n��, i);
	if (ib)
	{
		Sleep(1000);
		printf(��ѡ�����Ŀ��: % d % d % d % d % d\n��, a[1], a[2], a[3], a[4], a[5]);
		scanf("%d", &p);
	}
	else
		do
			p = rand() % 5 + 1;
	while (p != i);
	while (a[p]0 || pi) p = rand() % 5 + 1;
	Sleep(1000);
	printf("%d��ѡ����%d��\n", i, p);
	Sleep(1000);
	printf("%d��������%d\n", i, c = rand() % 6 + 1);
	if (i >= c)
	{
		a[p] = 0;
		Sleep(1000);
		printf("%d��ɱ����%d��\n\n", i, p);
		n�C;
	}
	else { Sleep(1000); printf("%d��û��ɱ��Ŀ��\n\n", i); }
	if (i5 && a[p]0)
	{
		if (rand() % 31 || rand() % 32)
		{
			if (p1 && f <= 2)
			{
				Sleep(1000); printf(��5������1�Ÿ���Ȩ\n��);
				Sleep(800); printf(��ֱ�ӽ���ɱ��\n\n��);
				f = 3;
			}
			if (p2 && h0)
			{
				Sleep(1000); printf(��5������2�Ÿ���Ȩ\n��);
				Sleep(800); printf(��ֱ�ӽ���ɱ��\n\n��);
				h = 1;
			}
			if (p3 && o0)
			{
				Sleep(1000); printf(��5������3�Ÿ���Ȩ\n��);
				Sleep(800); printf(��ֱ�ӽ���ɱ��\n\n��);
				o = 1;
			}
		}
	}
	if (a[1]0)
	{
		if (f <= 2)
		{
			Sleep(1000);
			printf(��1��ʹ�ø���Ȩ\n��);
			f++; n++; a[1] = 1;
			if (f1)
			{
				do g = rand() % 5 + 1;
				while (a[g]0 || g1);
				Sleep(1000); printf(������������� % d��\n��, g);
				Sleep(1000); printf("%d������\n\n", g);
				a[g] = 0; n�C;
			}
		}
		else a[1] = 0;
	}
	if (a[2]0 && h0)
	{
		Sleep(1000);
		printf(��2��ʹ�ø���Ȩ\n��);
		n++;
		a[2] = 2;
		do m = rand() % 5 + 1;
		while (a[m]0 || m2);
		Sleep(1000); printf(������������� % d��\n��, m);
		if (rand() % 21)
		{
			a[m] = 0;
			Sleep(1000); printf("%d������\n\n", m);
			n�C;
		}
		else
		{
			Sleep(1000); printf(������û��\n\n��);
		}
		h = 1;
	}
	if (a[3]0 && o0)
	{
		Sleep(1000); printf(��3��ʹ�ø���Ȩ\n\n��); a[3] = 3; o++; n++;
	}
	if (i4 && a[p]0)
	{
		if (n1) break;
		else
		{
			Sleep(1000); printf(��4��ʹ���ٴι���Ȩ\n��);
			goto AA;
		}
	}
	if (a[b]0 && e0)
	{
		if (n1) break;
		printf(�������ˣ��Ƿ�����ۿ���Ϸ���������ǰ�0, ��1\n��);
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
	printf("%d��Ӯ��", d);
}
else
printf(����Ϸ������);
}
̰����С��Ϸ����
#include
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
const int N = 21;
void Get_xy(int x, int y) //��λ���λ��
{
	HANDLE hout;
	COORD pos;
	pos.X = x2;
	pos.Y = y;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hout, pos);
}
void Color(int num) //������ɫ
{
	HANDLE hout;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hout, num);
}
void Initial() //��ʼ��
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
				cout << ������;
			else cout << ������;
		}
		cout << endl;
	}
	Get_xy(N + 3, 1); Color(20);
	cout << ������W��, ��S��, ��A��, 'D�����в�����<<endl;
		Get_xy(N + 3, 2); Color(20);
	cout << �����������ͣ�� << endl;
	Get_xy(N + 3, 3); Color(20);
	cout << ���÷֣��� << endl;
}
void game()
{
	int** snake = NULL;
	int len = 1;
	int i;
	int score = 0;
	int apple[2];
	int tail[2];
	char ch = ��p��;
	Initial();
	srand((unsigned)time(NULL));
	apple[0] = rand() % N + 1;
	apple[1] = rand() % N + 1;
	Get_xy(apple[0], apple[1]);
	Color(12);
	cout << ���� << endl;
	snake = (int**)realloc(snake, sizeof(int)len);
	for (i = 0; i < len; i++)
		snake[i] = (int)malloc(sizeof(int)2);
	snake[0][0] = N / 2;
	snake[0][1] = N / 2 + 1;
	Get_xy(snake[0][0], snake[0][1]); Color(14);
	cout << ���ѡ� << endl;
	int flag = 1;
	while (1)
	{
		if (flag)
		{
			tail[0] = snake[len - 1][0];
			tail[1] = snake[len - 1][1];
			Get_xy(tail[0], tail[1]);
			Color(11);
			cout << ������ << endl;
		}
		flag = 1;
		for (i = len - 1; i > 0; i�C)
		{
			snake[i][0] = snake[i - 1][0];
			snake[i][1] = snake[i - 1][1];
			Get_xy(snake[i][0], snake[i][1]);
			Color(14);
			cout << ��� << endl;
		}
		if (kbhit())
		{
			Get_xy(0, N + 3);
			ch = getche();
		}
		switch (ch)
		{
		case ��W��:
		case ��w��: snake[0][1]�C; break;
		case ��S��:
		case ��s��: snake[0][1]++; break;
		case ��A��:
		case ��a��: snake[0][0]�C; break;
		case ��D��:
		case ��d��: snake[0][0]++; break;
		default:break;
		}
		for (i = 1; i < len; i++)
		{
			if (snake[0][0] == snake[i][0] && snake[0][1] == snake[i][1])
			{
				Get_xy(N / 2, N / 2); Color(30);
				cout << ��Game over!�� << endl;
				exit(0);
			}
		}
		Get_xy(snake[0][0], snake[0][1]);
		Color(14); cout << ���ѡ� << endl;
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
			cout << ���� << endl;
		}
		if (snake[0][0] - 1 || snake[0][0]N + 1 || snake[0][1] - 1 || snake[0][1] == N + 1)
		{
			Get_xy(N / 2, N / 2); Color(30);
			cout << ��Game Over!�� << endl;
			for (i = 0; i < len; i++)
				free(snake[i]);
			Sleep(INFINITE);
			exit(0);
		}
		if (len >= N * N - 1)
		{
			Get_xy(N / 2, N / 2); Color(30);
			cout << ��Win!�� << endl;
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
ð��С��Ϸ���루����һ���Ƚϼ򵥵Ĵ��С��Ϸ��
#include<stdio.h>
#define DECISION ������ȥ�ģ�\n1 ��ׯ\n2 ð��\n3 �鿴������Ϣ\n4 �浵���״���Ϸ���ȴ洢һ������Ϸ����//�����
#define DECISION2 ��������ս�ĸ����ǣ�1.ʷ��ķɭ�� 2.�粼�ֲ��� 3.���˹ű���//�����
void fjshop(void);//���ߵ�
void wqshop(void);//������
void vill(void);//��ׯ
void zdmk(void);//����
void lvup(void);//����
void slm(void);//ʷ��ķ
void slm1(void);
void slm2(void);//���
void gbl(void);//�粼��
void gbl1(void);
void gbl2(void);//end
void gr(void);//����
void gr1(void);//
void gr2(void);//end//�Ұ���Щ�����������£��Ե�����
void maoxian(void);
void vill(void);
void pi(void);//personal information�������rw(����)�������º��ڼ�������
void cd(void);//�浵
int hp = 200, mp = 20, sp, ex = 0, p = 5, q = 20, lv = 1, i = 1, eak = 0, edf = 0, gd = 0, viz = 0, sh, tybosshp, x, hpboss, fb;

int main(void)//������ʼ
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
}//�����򵽴˴����
void cd(void)//�浵ģ��
{
	int du;
	printf(������Ҫ��ȡ���Ǵ洢 ? \n1 ��ȡ\n2 �洢\n3 ȡ��\n��);
	scanf("%d", &du);
	int a[] = { lv,hp,mp,ex,gd };
	while (du1)
	{
		FILE* fpRead = fopen(��data.txt��, ��r��);
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
		FILE fpWrite = fopen(��data.txt��, ��w��);
		for (int i = 0; i < 5; i++)
		{
			fprintf(fpWrite, "%d ��,a[i]);
		}
		fclose(fpWrite);
		du = -1;
	}
	while (du == 3)
	{
		du = -1;
	}
}
void pi(void)//������Ϣģ��
{
	printf(�� ������Ϣ \n") ;
		printf(���ƺţ���δ���� \n��);//����
	printf(���ȼ�: % d hp : % d mp : % d ���� : % d ��� : % d \n��, lv, hp, mp, ex, gd);
	printf(�������˺���1.�ػ�: % d 2.��Ѫ : bossԽǿ���˺�Խ�� 3.�Ǳ�����ն : % d \n��, p, q);
}
void lvup(void)//����ģ��
{
	while (ex > 100lv)//�Ѿ��������������Ϊÿ�����ﾭ�鲻ͬ

	{
		printf(�������ˣ���ĵȼ�Ϊ % d\n��, lv + 1);

		p = p + 3;

		q = q + 10;

		ex = ex - 100 * lv;

		lv = lv + 1;

		hp = 200 + 20 * lv;

		mp = 20 + 2 * lv;

	}
}
void vill(void)//��ׯ
{
	while (viz == 0)
	{
		printf(����ӭ�ص���ׯ��ʿ\n��ѡ��Ŀ��\n1 ������\n2 ���ߵ�\n3 �˳���ׯ\n��);
		scanf("%d", &viz);
		while (viz >= 3)
		{
			printf(���˳���ׯ\n��);
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
}//��ׯģ��
void wqshop(void)//������
{
	while (viz1)
	{
		int wq = 0, dj = 1, cj = 1;
		printf(�������ʿ����ӭ����������\n��������Ҫʲô��\n1 �̽�(�˺���10)\n2 500��� ����(�˺���30)\n3 2000��� �˳�������\n��);
		scanf("%d", &wq);
		if (wq > 2)
		{
			while (wq > 3)
			{
				printf(��δ���ţ������ڴ�\n��);
				wq = 0;
			}
			while (wq3)
			{
				printf(����ѡ���˳�\n; ��);
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
						printf(���㹺���˶̽����˺���ʮ���ظ�������Ч\n��);
						eak = 10;
						p = p + eak;//����ȫ�ֱ�����װ���ӳɹ�����
						dj = 0;
						wq = 0;
					}
					else
					{
						printf(�����Ѿ��������\n��);
					}
				}
				else
				{
					printf(����Ҳ���\n��);
				}
				wq = 0;
			}
			while (wq2)
			{
				if (gd > 2000)
				{
					if (cj = 1)
					{
						printf(���㹺���˳������˺�����ʮ���ظ�������Ч\n��);
						eak = 30;
						p = p + eak;//����ȫ�ֱ�����װ���ӳɹ�����
						cj = 0;
					}
					else
					{
						printf(�����Ѿ��������\n��);
					}
				}
				else
				{
					printf(����Ҳ���\n��);
				}
				wq = 0;
			}
		}
	}
}
void fjshop(void)//���ߵ�
{
	while (viz == 2)
	{
		int fj = 0, bj = 1, szj = 1;
		printf(�������ʿ����ӭ�������ߵ�\n��������Ҫʲô��\n1 ����(�˺�����4)\n2 500��� ���Ӽ�(�˺�����7)\n3 1000��� �˳����ߵ�\n��);
		scanf("%d", &fj);
		if (fj > 2)
		{
			while (fj > 3)
			{
				printf(��δ���ţ������ڴ�\n��);
				fj = 0;

			}
			while (fj == 3)
			{
				printf("��ѡ���˳�\n;");
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
						printf("�㹺���˲��ף��˺�����4���ظ�������Ч\n");
						edf = 4;//����ȫ�ֱ�����װ���ӳɹ�����
						bj = 0;
					}
					else
					{
						printf("���Ѿ��������\n");
					}
				}
				else
				{
					printf("��Ҳ���\n");
				}
				fj = 0;
			}
			while (fj == 2)
			{
				if (gd > 1000)
				{
					if (szj = 1)
					{
						printf("�㹺�������Ӽף��˺�����7���ظ�������Ч\n");
						edf = 7;//����ȫ�ֱ�����װ���ӳɹ�����
						szj = 0;
					}
					else
					{
						printf("���Ѿ��������\n");
					}
				}
				else
				{
					printf("��Ҳ���\n");
				}
				fj = 0;
			}

		}
	}

	
}
void maoxian(void)//ð��ģ��
{
	printf("%s\n", DECISION2);
	scanf("%d", &fb);
	if (fb > 3)
	{
		printf(��δ����������ѡ��\n��);
	}
	else
	{
		switch (fb)//��������������࣬�����ڼӵ�����Ʒʱ�ܷ���

		{

		case 1:
			slm();
			break;

		case 2:
			slm();
			gbl();
			break;

		case 3:
			slm(); slm();//ͬ�� 
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
void slm(void)//����ģ��
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
void zdmk(void)//ս��ģ��
{
	while (hp > 0 && tybosshp > 0)
	{
		i = 1;
		printf(����ѡ����\n1.�ػ�(��� % d���˺���mp + 1)\n2.��Ѫ(��ɵ�ǰ����ֵ�ٷ�֮�˵��˺���mp - 3)\n3.�Ǳ�����ն(��� % d���˺���mp - 5)\n��, p, q);//�����
		scanf("%d", &sp);

		while (4 < sp)
		{
			printf("����ѡ�����������ѡ��\n");
			sp = -1;
		}
		while (sp == 1)
		{

			tybosshp = tybosshp - p;
			mp++;
			printf("��ʹ�ü����ػ���boss���%d���˺�,�ָ�һ��mp,boss����%dѪ�������mp����%d\n", p, tybosshp, mp);
			sp = 0;

		}

		while (sp == 2)
		{

			while (mp >= 3 && sp == 2)
			{
				sh = tybosshp * 0.08;
				tybosshp = tybosshp * 0.92;
				mp = mp - 3;
				printf("��ʹ�ü�����Ѫ��boss���%d���˺���boss����%dѪ�������mp����%d\n", sh, tybosshp, mp);
				sp = 0;
			}

			while (mp < 3 && sp == 2)
			{
				printf("mp����3��,�޷��ͷż�����Ѫ\n");
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
				printf("��ʹ�ü����Ǳ�����ն��boss���%d���˺���boss����%dѪ�������mp����%d\n", q, tybosshp, mp);//���� 
			}
			while (mp < 5 && sp == 3)
			{
				printf("mp����5��,�޷��ͷż����Ǳ�����ն \n");
				sp = -1;
			}
		}
		while (tybosshp > 0 && sp == 0)
		{
			if (tybosshp > hpboss * 0.1)//bossѪ���½���10%���±�ŭ 
			{
				sh = 15 + hp * 0.01 - edf;
				hp = hp - sh;
				printf("bossײ����һ�£����hp������%d�㣬�㻹��%d������ֵ\n", sh, hp);
				sp = -1;
			}
			else
			{
				printf("boss��Ϊ��״̬");
				sh = 15 + hpboss * 0.1 - edf;//�˺����� 
				hp = hp - sh;
				printf("bossʹ�÷���Ҵ����hp������%d�㣬�㻹��%d������ֵ\n", sh, hp);
				sp = -1;
			}
		}
	}
	while (tybosshp <= 0 && i == 1)
	{
		printf("���ѻ�ɱBOSS,��ϲͨ�أ�\n");
		i = i + 1;
	}
	while (hp < 0 && i == 1)
	{
		printf("�������������ڼ򵥸�����������\n");
		i = i + 2;
		getchar();
		printf("����ԭ�ظ���\n�ָ�hp,mp");
		hp = 200 + 20 * lv;
		mp = 20 + 2 * lv;
	}
	
}

//�ָ���ʷ��ķ
void slm1(void)
{
	printf(��ʷ��ķ����\n��);

	hpboss = 100;//BOSS������ֵ

	tybosshp = hpboss;
}
void slm2(void)
{
	if (i == 2)
	{
		printf(������20ex, 50���\n��);//���ﾭ����ȫ������

		ex = ex + 20;

		gd = gd + 50;

		printf("��ľ���Ϊ%d\n", ex);
		1
			2
			3
			4
			5
	}
	else
	{
		printf(������Ŭ����\n��);
	}
}

void gbl1(void)//�粼��
{
	printf(���粼�ֳ���\n��);

	hpboss = 300;//BOSS������ֵ

	tybosshp = hpboss;
}
void gbl2(void)//end
{
	if (i == 2)
	{
		printf(������100ex, 200���\n��);

		ex = ex + 100;

		gd = gd + 200;

		printf("��ľ���Ϊ%d\n", ex);
		1
			2
			3
			4
			5
	}
	else
	{
		printf(������Ŭ����\n��);
	}
}
void gr1(void)//����
{
	printf(�����˳���\n��);

	hpboss = 800;//BOSS������ֵ

	tybosshp = hpboss;
}
void gr2(void)
{
	if (i == 2)
	{
		printf(������300ex, 500���\n��);

		ex = ex + 300;

		gd = gd + 500;

		printf("��ľ���Ϊ%d\n", ex);
		1
			2
			3
			4
			5
	}
	else
	{
		printf(������Ŭ����\n��);
	}
}
��ȭС��Ϸ���루�͵��Բ�ȭ��
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	char gamer; // ��ҳ�ȭ
	int computer; // ���Գ�ȭ
	int result; // �������
	// Ϊ�˱�����һ����Ϸ���˳����򣬿��Խ��������ѭ����
	while (1) {
		printf(������һ����ȭ��С��Ϸ����������Ҫ����ȭͷ��\n��);
		printf(��A:����\nB : ʯͷ\nC : ��\nD : ������\n��);
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
			printf("���ѡ��Ϊ %c ѡ�����,�˳�...\n", gamer);
			getchar();
			system("cls"); // ����
			return 0;
			break;
		}

		srand((unsigned)time(NULL));  // ���������
		computer = rand() % 3;  // �����������ȡ�࣬�õ����Գ�ȭ
		result = (int)gamer + computer;  // gamer Ϊ char ���ͣ���ѧ����ʱҪǿ��ת������
		printf("���Գ���");
		switch (computer)
		{
		case 0:printf("����\n"); break; //4    1
		case 1:printf("ʯͷ\n"); break; //7  2
		case 2:printf("��\n"); break;   //10 3
		}
		printf("�����");
		switch (gamer)
		{
		case 4:printf("����\n"); break;
		case 7:printf("ʯͷ\n"); break;
		case 10:printf("��\n"); break;
		}
		if (result == 6 || result == 7 || result == 11) printf("��Ӯ��!");
		else if (result == 5 || result == 9 || result == 10) printf("����Ӯ��!");
		else printf("ƽ��");
		system("pause>nul&&cls");  // ��ͣ������
	}
	return 0;
