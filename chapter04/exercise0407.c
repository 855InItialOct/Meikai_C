//编写一段程序，像下面这样显示出小于输入的整数的所有2的乘方
/* 
请输入一个整数：19
2 4 8 16
 */

#include<stdio.h>

int main(void)
{
	int a = 0, i = 1;

	printf("请输入一个正整数：");
	scanf("%d", &a);

	while (i < a)
	{
		if (i < 19 && i % 2 == 0)
		{
			printf("%d  ", i);
		}
		i*=2;
	}
    
	return 0;
}
