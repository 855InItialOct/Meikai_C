//编写一段程序，输入一个整数值，显示该整数值以下所有奇数
/* 
整数值：15
1 3 5 7 9 11 13 15
 */

#include<stdio.h>

int main(void)
{
	int a = 0, i = 1;

	printf("请输入一个整数值：");
	scanf("%d", &a);

	while (i <= a)
	{
		printf("%d  ", i);
		i+=2;
	}
    
	return 0;
}
