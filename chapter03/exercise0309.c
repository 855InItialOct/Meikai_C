//使用条件运算替换练习3-6的if语句，实现同样的功能。

#include<stdio.h>

int main(void)
{
	int a, b, c, min1,min2;

	printf("请输入三个整数。\n");
	printf("整数1："); scanf("%d", &a);
	printf("整数2："); scanf("%d", &b);
	printf("整数3："); scanf("%d", &c);

	min1 = (a < b) ? a : b;
	min2 = (c < b) ? c : b;

	printf("最小值是：%d", (min1 < min2) ? min1 : min2);
    
	return 0;
}
