#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>

#define NAMEMAX 20
#define SEXMAX 5
#define TELEMAX   12
#define ADDRMAX  25
#define MAX 1000

typedef struct PeoInfo
{
	char name[NAMEMAX];
	int age;
	char sex[SEXMAX];
	char tele[TELEMAX];
	char addr[ADDRMAX];
} PeoInfo;

typedef struct Contact
{
	struct PeoInfo data[MAX];//������ݵ�λ��
	int sz;//��ʾ��ǰ��ЧԪ��
}*pContact;

void InitContact(pContact pc);
void AddContact(pContact pc);
void ShowContact(pContact pc);
void DelContact(pContact pc);
void SearchContact(pContact pc);
void ModifyContact(pContact pc);
void EmptyContact(pContact pc);
void SortContact(pContact pc);