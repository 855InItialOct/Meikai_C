//编写一段程序，显示 * 每五个就进行一次换行，数字为几显示多少个。

#include<stdio.h>

int main(void)
{
	int i = 0, j = 0;

	printf("整数值：");
	scanf("%d", &j);

	for (i = 1; i <= j; i++)
	{
		printf("*");
		if (i % 5 == 0)
			putchar('\n');
	}
    
	return 0;
}
