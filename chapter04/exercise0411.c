//编写代码，显示下方效果；
/* 
请输入一个正整数：1963
1963的逆向结果是3691
 */

#include<stdio.h>

int main(void)
{
	int i, j;

	do
	{
		printf("请输入一个正整数：");
		scanf("%d", &i);
		if (i <= 0)
			puts("请不要输入负数和0。");
	} while (i <= 0);

	j = i;
	printf("%d逆向显示的结果是:", j);
	while (j > 0)
	{
		printf("%d", j % 10);
		j /= 10;
	}
	puts("。");
    
	return 0;
}
