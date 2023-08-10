//使用if语句替换掉315程序中的条件运算符，实现同样的功能。

#include<stdio.h>

int main(void)
{
	int a, b;

	puts("请输入二个整数");
	printf("整数1："); scanf("%d", &a);
	printf("整数2："); scanf("%d", &b);

	if (a > b)
		printf("它们的差是%d", a - b);
	if (b > a)
		printf("它们的差是%d", b - a);
        
	return 0;
}
