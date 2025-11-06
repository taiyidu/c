#include"contact.h"

void initcontact(contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
void addpeoinfo(contact* pc)
{
	assert(pc);
	if (pc->count == 100)
	{
		printf("添加已满......\n");
		return;
	}
	
	printf("please input  name=>");
	scanf("%s", (pc->data[pc->count]).name);
	printf("please input student_id=>");
	scanf("%d", &(pc->data[pc->count].student_id));
	printf("please input score=>");
	scanf("%d", &(pc->data[pc->count]).score);
	pc->count++;
	printf("success......\n");
}

void findpeoinfo(contact* pc)
{
	assert(pc);
	char NAME[20];
	if (pc->count == 0)
	{
		printf("没有人供你查找\n");
		return;
	}
	else
	{
		printf("请输入查找人的姓名=> ");
		scanf("%s", NAME);
		int info = 0;
		for (int i = 0; i < pc->count; i++)
		{
			if (strcmp(NAME, pc->data[i].name) == 0)
			{
				printf("name: %s  student_id: %d  score: %d  \n", (pc->data[i]).name, pc->data[i].student_id, pc->data[i].score);
				info = 1;
				break;
			}
		}
		if (info == 0)
		{
			printf("没找到......");
		}
	}
}

void showpeoinfo(contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("没有能展示的信息");
		return;
	}
	else
	{
		for (int i = 0; i < pc->count; i++)
		{
			printf("name: %s  student_id: %d  score: %d  \n", (pc->data[i]).name, pc->data[i].student_id, pc->data[i].score);
		}
	}
}
 int find(const char* NAME,contact* pc)
{
	for (int i = 0; i < pc->count; i++)
	{
		if (strcmp(NAME, pc->data[i].name) == 0)
		{
			return i;
		}
	}
	return 10086;
}
void modpeoinfo(contact* pc)
{
	if (pc->count == 0)
	{
		printf("没有能修改的信息\n");
		return;
	}
	char NAME[20];
	printf("please input  name=>");
	scanf("%s", NAME);
	int i = find(NAME, pc);
	if (i != 10086)
	{
		printf("已找到\n");
		printf("请输入修改后的姓名=> ");
		scanf("%s", (pc->data[i]).name);
		printf("请输入修改后的学号=> ");
		scanf("%d", &(pc->data[i].student_id));
		printf("请输入修改后的成绩=> ");
		scanf("%d", &(pc->data[i]).score);
		
		printf("修改成功");
	}
	else
	{
		printf("未找到\n");
	}
}

int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((peoinfo*)e1)->name, ((peoinfo*)e2)->name);
}
void sortpeoinfo(contact* pc)//按首字母排序
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(peoinfo), cmp_peo_by_name);
	printf("排序成功\n");
}