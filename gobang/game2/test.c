#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("************************\n");
	printf("*******  1.play  *******\n");
	printf("*******  2.exit  *******\n");
	printf("************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	Initboard(board, ROW, COL);
	Printboard(board, ROW, COL);
	while (1)
	{
		Playermove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		Printboard(board, ROW, COL);
		Comeputermove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != ' ')
			break;
		Printboard(board, ROW, COL);
    }
	if (ret == 'Y')
		printf("����Ӯ\n");
	else if (ret == 'X')
		printf("���Ӯ\n");
	else if (ret == 'Q')
		printf("ƽ��\n");
	Printboard(board, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!!!/n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}