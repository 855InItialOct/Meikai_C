//对代码清单3-4的语句进行修改，要求不适用if语句使用switch语句。

#include<stdio.h>

int main(void)
{
	int a;

	printf("请输入一个整数：");
	scanf("%d", &a);

	switch (a % 2)
	{
			case 0: printf("你输入的是偶数"); break;
			case 1: printf("你输入的是奇数"); break;
	}
    
	return 0;
}

