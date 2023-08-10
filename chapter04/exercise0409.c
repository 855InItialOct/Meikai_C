//编写一段程序，交替显示+和-，总个数等于所输入的整数值。另外输入0以下的整数时，什么也不显示。

#include<stdio.h>

int main(void)
{
	int i = 0, no = 0;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	while (i < no)
	{
		if (i % 2 == 0)
			printf("+");
		else
			printf("-");
		i++;
	}
    
	return 0;
}
