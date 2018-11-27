#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#define DEFAULTSZ 3
#define NAMEMAX 20
#define SEXMAX 5
#define TELEMAX   12
#define ADDRMAX  25


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
	 PeoInfo *data;
	int sz;//表示当前有效元素
	int capacity;//容量
}*pContact;

void InitContact(pContact pc);

void DestoryContact(pContact pc);
void AddContact(pContact pc);
void ShowContact(pContact pc);
void DelContact(pContact pc);
void SearchContact(pContact pc);
void ModifyContact(pContact pc);
void EmptyContact(pContact pc);
void SortContact(pContact pc);