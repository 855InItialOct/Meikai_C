//编写一段程序，像下面那样显示读取两个整数的乘积
/* 
请输入两个整数。
整数1：27
整数2：35
它们的乘积是:945
 */

#include<stdio.h>

int main(void)
{
	int a, b;

	puts("请输入两个整数");

	printf("整数1：");
	scanf("%d", &a);

	printf("整数2：");
	scanf("%d", &b);

	printf("它们的乘积是：%d", a * b);

	return 0;
}