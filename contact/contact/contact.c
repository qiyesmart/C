#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

//初始化
void InitContact(pContact pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
//添加联系人
void AddContact(pContact pc)
{
	assert(pc);
	if (pc->sz == MAX)
	{
		printf("通讯录已满，无法插入\n");
		return;
	}
	printf("请输入名字:>");
	scanf("%s",pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("添加成功");
}
//打印信息
void ShowContact( pContact pc)
{
	int i = 0;
	assert(pc);
	printf("%10s\t%4s\t%5s\t%12s\t%20s\n",
		"name", "age", "sex", "tele", "addr");

	for (i = 0; i<pc->sz; i++)
	{
		printf("%10s\t%4d\t%5s\t%12s\t%20s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

//删除联系人
static int Find(pContact pc, char name[])
{
	int i = 0;
	assert(pc);
	for (i = 0; i<pc->sz; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;//没找到
}
void DelContact(pContact pc)
{
	char name[NAMEMAX] = { 0 };
	int i = 0;
	int j = 0;
	int pos = 0;
	assert(pc);
	if (pc->sz == 0)
	{
		printf("通讯录已空，无法删除\n");
	}
	printf("请输入你要删除的人名字:>");
	scanf("%s", &name);
	//查找
	pos = Find(pc, name);
	if (pos == -1)
	{
		printf("要删除的人没找到\n");
	}
	else
	{
		//删除
		for (j = pos; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("删除成功\n");
	}
}
//查找联系人
void SearchContact(pContact pc)
{
	char name[NAMEMAX] = { 0 };

	int pos = 0;
	assert(pc);
	printf("请输入你要删除的人名字:>");
	scanf("%s", &name);
	//查找
	pos = Find(pc, name);
	if (pos == -1)
	{
		printf("要删除的人没找到\n");
	}
	else
	{
		printf("%10s\t%4s\t%5s\t%12s\t%20s\n",
			"name", "age", "sex", "tele", "addr");
		printf("%10s\t%4d\t%5s\t%12s\t%20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}
//修改联系人信息
void ModifyContact(pContact pc)
{
	char name[NAMEMAX] = { 0 };

	int pos = 0;
	assert(pc);
	printf("请输入你要修改的人名字:>");
	scanf("%s", &name);
	if (pos == -1)
	{
		printf("要修改的人没找到\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &pc->data[pos].age);
		printf("请输入性别:>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pos].addr);
	}
}
//将联系人置空
void EmptyContact(pContact pc)
{
	assert(pc);
	pc->sz = 0;
}
//排序联系人
void SortContact(pContact pc)
{
	int i = 0;
	int j = 0;
	assert(pc);
	for (i = 0; i<pc->sz - 1; i++)
	{
		int flag = 0;
		for (j = 0; j<pc->sz - 1 - i; j++)
		{
			if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0)
			{
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return;
		}
	}
}