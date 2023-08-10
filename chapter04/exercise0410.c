//编写一段程序，像下面一样练习显示 * 总个数等于输入数值的个数，当输入0以下的数值时什么也不显示。

#include<stdio.h>

int main(void)
{
	int i = 0, no = 0;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	while (i < no)
	{
		printf("*\n");
		i++;
	}
    
	return 0;
}
