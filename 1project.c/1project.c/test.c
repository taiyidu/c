#include"contact.h"
void menu()
{
	printf("***********************************************\n");
	printf("            1.  ADD\n");
	printf("            2.  FIND\n");
	printf("            3.  MODIFIES\n");
	printf("            4.  SORT\n");
	printf("            5.	SHOWINFO\n");
	printf("            0.  EXIT\n");
	printf("***********************************************\n");
}

int main()
{
	menu();//菜单加载
	contact con;//创建信息表
	initcontact(&con);//初始化
	//loadcontact
	int input = 0;
	do
	{
		
		printf("请输入模式=> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			addpeoinfo(&con);
			break;
		case 2:
			findpeoinfo(&con);
			break;
		case 3:
			modpeoinfo(&con);
			break;
		case 4:
			sortpeoinfo(&con);
			break;
		case 5:
			showpeoinfo(&con);
			break;
		case 0:
			printf("退出中......");
			break;
		default:
			printf("输入不匹配");
			break;
		}
	} while (input);
	
	return 0;
}
