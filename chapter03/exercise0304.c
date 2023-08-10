//编写一段程序，像下面这样输入两个整数值，
/*
如果两数值相等，则显示“A和B相等”。
如果A大于B则显示“A大于B”。
如果A小于B则显示“A小于B”。
*/

#include<stdio.h>

int main(void)
{
	int a, b;

	printf("请输入两个整数。\n");
	printf("整数A："); scanf("%d", &a);
	printf("整数B："); scanf("%d", &b);

	if (a == b)
		puts("A和B的数值相同");
	else if (a > b)
		puts("A的值大于B");
	else
		puts("A的值小于B");
        
	return 0;
}
