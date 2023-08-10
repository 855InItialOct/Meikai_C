//编写一段程序，求1到n的和。

#include<stdio.h>

int main(void)
{
	int n=0,i=0,sum=0;

	printf("请输入一个正整数：");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		sum += i;
	}

	printf("1到%d的和为：%d", n, sum);
    
	return 0;
}
