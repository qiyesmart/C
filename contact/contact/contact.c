#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

//��ʼ��
void InitContact(pContact pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
//�����ϵ��
void AddContact(pContact pc)
{
	assert(pc);
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�������޷�����\n");
		return;
	}
	printf("����������:>");
	scanf("%s",pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("��ӳɹ�");
}
//��ӡ��Ϣ
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

//ɾ����ϵ��
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
	return -1;//û�ҵ�
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
		printf("ͨѶ¼�ѿգ��޷�ɾ��\n");
	}
	printf("��������Ҫɾ����������:>");
	scanf("%s", &name);
	//����
	pos = Find(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ������û�ҵ�\n");
	}
	else
	{
		//ɾ��
		for (j = pos; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ�\n");
	}
}
//������ϵ��
void SearchContact(pContact pc)
{
	char name[NAMEMAX] = { 0 };

	int pos = 0;
	assert(pc);
	printf("��������Ҫɾ����������:>");
	scanf("%s", &name);
	//����
	pos = Find(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ������û�ҵ�\n");
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
//�޸���ϵ����Ϣ
void ModifyContact(pContact pc)
{
	char name[NAMEMAX] = { 0 };

	int pos = 0;
	assert(pc);
	printf("��������Ҫ�޸ĵ�������:>");
	scanf("%s", &name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ���û�ҵ�\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[pos].name);
		printf("����������:>");
		scanf("%d", &pc->data[pos].age);
		printf("�������Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pos].addr);
	}
}
//����ϵ���ÿ�
void EmptyContact(pContact pc)
{
	assert(pc);
	pc->sz = 0;
}
//������ϵ��
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