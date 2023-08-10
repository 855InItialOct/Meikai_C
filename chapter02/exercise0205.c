// 编写一段程序，像下面那样读取两个整数的值，计算出前者是后者的百分之几十，并用实数输出
/* 
请输入两个整数。
整数A：54
整数B：84
A是B的：64.285714%
 */

#include<stdio.h>

int main(void)
{
	double a, b;
    
	puts("请输入两个实数。");

	printf("实数A："); scanf("%lf", &a);
	printf("实数B："); scanf("%lf", &b);

	printf("A是B的%f%%", (a * 100) / b);

	return 0;
}
