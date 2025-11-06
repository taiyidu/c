#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
typedef struct peoinfo
{
	char name[20];
	int student_id;
	int score;
}peoinfo;
typedef struct contact
{
	peoinfo data[100];
	int count;//记录人数
}contact;
void initcontact(contact* pc);//初始化
void addpeoinfo(contact* pc);//添加数据
void findpeoinfo(contact* pc);//查找
void showpeoinfo(contact* pc);//打印机制
void modpeoinfo(contact* pc);//修改机制
int find(const char* NAME, contact* pc);//修改机制的查找机制
void sortpeoinfo(contact* pc);//排序机制
