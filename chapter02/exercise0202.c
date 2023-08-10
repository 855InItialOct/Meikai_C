//编写一段程序，像下方那样读取两个整数，然后输出它们的和与积
/*
请输入两个整数。
整数X：54
整数Y：12
它们的和是：66，积是648。
*/

#include<stdio.h>

int main(void)
{
	int a, b;

	puts("请输入两个整数。");

	printf("整数X：");
	scanf("%d", &a);

	printf("整数Y：");
	scanf("%d", &b);

	printf("它们的和是：%d，它们的积是：%d",a+b,a*b);
    
	return 0;
}
