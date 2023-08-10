//编写一段程序，像下面那样显示读取的实数值。
/* 
请输入一个实数：57.3
你输入的实数是：57.300000
 */

#include<stdio.h>

int main(void)
{
	double a = 0;

	printf("请输入一个实数：");
	scanf("%lf", &a);

	printf("你输入的实数为：%lf", a);
    
	return 0;
}
