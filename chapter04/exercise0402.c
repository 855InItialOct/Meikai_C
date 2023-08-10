//编写一段程序，像下面这样读取两个整数的值，然后计算出它们之间所有整数的和。
/* 
请输入两个整数。
整数A：37
整数B：28
大于等于28小于等于37的所有整数的和是:325
 */

#include<stdio.h>

int main(void)
{
	int a, b, c;
	int sum = 0;

	puts("请输入两个整数。");
	printf("整数A："); scanf("%d", &a);
	printf("整数B："); scanf("%d", &b);

	c = a;
	do
	{
		sum += c;
		c--;
	} while (c != b - 1);

	printf("大于等于%d小于等于%d的所有整数的和是:%d", b, a, sum);
    
	return 0;
}
