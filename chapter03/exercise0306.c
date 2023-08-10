//编写一段程序，计算出输入的三个整数中的最小值并显示。（使用if语句）

#include<stdio.h>
int main()
{
	int a, b, c,min;

	printf("请输入三个整数。\n");
	printf("整数1："); scanf("%d", &a);
	printf("整数2："); scanf("%d", &b);
	printf("整数3："); scanf("%d", &c);

	min = a;
	if (b < min)
	{
		min = b;
		printf("最小值是：%d", min);
	}
	else if (c < min)
	{
		min = c;
		printf("最小值是：%d", min);
	}
	else
		printf("最小值是：%d", min);
        
	return 0;
}
