//编写一段程序，像下面这样显示1~n的整数值的二次方。
/* 
n的值：3
1的二次方是：1
2的二次方是：4
 */

#include<stdio.h>

int main(void)
{
	int n = 0;

	printf("n的值为："); scanf("%d", &n);

	for (int i = 1; i < n; i++)
	{
		printf("%d的二次方是：%d\n", i, i * i);
	}

	return 0;
}
