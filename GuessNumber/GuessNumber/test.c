#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void menu()
{
	printf("************************\n");
	printf("*****    1.play    *****\n");
	printf("*****    0.exit    *****\n");
	printf("************************\n");
}
void game()
{
	int ret = 0;
	int n = 0;
	ret = rand() % 100 + 1;
	/*printf("%d\n", ret);*/
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &n);
		if (n > ret)
		{
			printf("�´���\n");
		}
		else if (n <ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//�����������
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("����Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ��Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!!!\n");
			break;
		}
	} while (input);
	return 0;
}