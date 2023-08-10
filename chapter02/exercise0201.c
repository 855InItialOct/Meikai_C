//编写一段程序，像下方那样读取两个整数，然后显示出前者是后者的百分之几
/* 
请输入两个整数。
整数X：54
整数Y：84
X的值是Y的：64%
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

	printf("X是Y的%d%%", (a*100)/b);
    
	return 0;
}
