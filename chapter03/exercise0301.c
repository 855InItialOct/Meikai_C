//编写一段程序，像下面这样输入两个值，如果后者是前者的约数，则显示B是A的约数，否则显示B不是A的约数。
/* 
请输入两个整数。
整数A：17
整数B：5
B不是A的约数。
 */

#include<stdio.h>

int main(void)
{
	int a, b;

	printf("请输入两个整数。\n");
	printf("整数A："); scanf("%d", &a);
	printf("整数B："); scanf("%d", &b);

	if (b % a)
		puts("B不是A的约数");
	else
		puts("B是A的约数");
        
	return 0;
}
