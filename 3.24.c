//#define _CRT_SECURE_NO_WARNINGS 1
//#include "Game.h"
//
//int count = 0;//ͳ�ƻ�ʣ���ٸ���û��ɨ
//
//
//void game()//��Ϸʵ��
//{
//	char mine[ROWS][COLS] = { 0 };//��������
//	char show[ROWS][COLS] = { 0 };//������Ϸ�Ļ�����ʾ
//
//	//��ʼ��
//	initzeboard(show, ROWS, COLS, '*');
//	initzeboard(mine, ROWS, COLS, '0');
//
//	//��ʾ����
//	Display_board(show, ROW, COL);
//	//Display_board(mine, ROW, COL);
//
//	//����
//	random_mine(mine, ROW, COL);
//	//Display_board(mine, ROW, COL);
//
//	//ɨ��
//	mine_sweeping(mine, show, ROW, COL);
//}
//
////��ʼ��
//void initzeboard(char mine[ROWS][COLS], int rows, int cols, char val)
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			mine[i][j] = val;
//		}
//	}
//}
//
////��ʾ����
//void Display_board(char mine[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//
//	printf("            ɨ����Ϸ\n");
//	printf("---------------------------------\n");
//	for (j = 0; j <= col; j++)
//	{
//		printf("%d ", j);
//	}
//
//	printf("\n");
//
//	for (i = 1; i <= row; i++)
//	{
//		printf("%d ", i);
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ", mine[i][j]);
//		}
//
//		printf("\n");
//
//	}
//}
//
////����
//void random_mine(char mine[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int count = EASILY;
//
//	while (count)
//	{
//		x = rand() % row + 1;
//		y = rand() % col + 1;
//
//		if (mine[x][y] == '0')
//		{
//			mine[x][y] = '1';
//			count--;
//		}
//	}
//}
//
////ͳ����Χ�׵ĸ���
//static int statistics_mine(char mine[ROWS][COLS], int x, int y)
//{
//	return mine[x - 1][y - 1] +
//		mine[x - 1][y] +
//		mine[x - 1][y + 1] +
//		mine[x][y - 1] +
//		mine[x][y + 1] +
//		mine[x + 1][y - 1] +
//		mine[x + 1][y] +
//		mine[x + 1][y + 1] - 8 * '0';
//}
//
//
////ɨ��
//void mine_sweeping(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//
//	while (count < row * col - EASILY)
//	{
//		system("cls");
//		Display_board(show, COL, ROW);
//		printf("����������:>");
//		scanf("%d %d", &x, &y);
//
//		if ((1 <= x && x <= row) && (1 <= y && y <= col))
//		{
//			if (mine[x][y] == '0')
//			{
//				int leng = statistics_mine(mine, x, y);
//				show[x][y] = leng + '0';
//				count++;
//			}
//			else
//			{
//				printf("���ź��㱻ը����\n");
//				Display_board(mine, ROW, COL);
//				break;
//			}
//		}
//		else
//		{
//			printf("��������Ч����!\n");
//		}
//	}
//
//	if (count == row * col - EASILY)
//	{
//		printf("��ϲ��ɨ�׳ɹ�!\n");
//		Display_board(mine, ROW, COL);
//	}
//}
//1
//2
//3
//4
//5
//6
//7
//8
//9
//10
//11
//12
//13
//14
//15
//16
//17
//18
//19
//20
//21
//22
//23
//24
//25
//26
//27
//28
//29
//30
//31
//32
//33
//34
//35
//36
//37
//38
//39
//40
//41
//42
//43
//44
//45
//46
//47
//48
//49
//50
//51
//52
//53
//54
//55
//56
//57
//58
//59
//60
//61
//62
//63
//64
//65
//66
//67
//68
//69
//70
//71
//72
//73
//74
//75
//76
//77
//78
//79
//80
//81
//82
//83
//84
//85
//86
//87
//88
//89
//90
//91
//92
//93
//94
//95
//96
//97
//98
//99
//100
//101
//102
//103
//104
//105
//106
//107
//108
//109
//110
//111
//112
//113
//114
//115
//116
//117
//118
//119
//120
//121
//122
//123
//124
//125
//126
//127
//128
//129
//130
//131
//132
//133
//134
//135
//136
//137
//138
//139
//140
//141
//142
//143
//144
//���������룺
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include "Game.h"
//
//extern void game();
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		printf("**************************\n");
//		printf("***  1. play  0. exit  ***\n");
//		printf("***      2. clear      ***\n");
//		printf("**************************\n");
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			game();//��Ϸʵ��
//			break;
//		case 2://����ѡ��
//			system("cls");
//			break;
//		case 0:
//			printf("�˳�����!\n");
//			break;
//		default:
//			printf("�����������������!\n");
//			Sleep(1000);
//			system("cls");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
