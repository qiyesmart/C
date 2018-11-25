#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
#include<stdlib.h>
void menu()
{
	printf("***********************************\n");
	printf("****1.add                 2.del****\n");
	printf("****3.search           4.modify****\n");
	printf("****5.show               6.sort****\n");
	printf("****7.empty              0.exit****\n");
	printf("***********************************\n");
}
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	EMPTY, 

};
void test1()
{
	struct Contact con;
	int input = 0;
	InitContact(&con);
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ£º>");
		scanf("%d",&input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EMPTY:
			EmptyContact(&con);
			break;
		case EXIT:
			printf("ÍË³ö");
			break;
		default:
			printf("Ñ¡Ôñ´íÎó\n");
			break;
       }
	} while (input);
}
int main()
{
	test1();
	system("pause");
	return 0;
}