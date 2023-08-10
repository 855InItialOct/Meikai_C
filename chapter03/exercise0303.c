//编写一段程序，像下面这样输入一个整数值，显示出它的绝对值。
/* 
请输入一个整数：-8
它的绝对值是：8
 */

#include<stdio.h>

int main(void)
{
	int a;

	printf("请输入一个整数：");
	scanf("%d", &a);

	if (a >= 0)
		printf("绝对值是：%d", a);
	else
		printf("绝对值是：%d", -a);
        
	return 0;
}
