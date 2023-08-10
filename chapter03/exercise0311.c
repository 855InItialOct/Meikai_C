//编写一段程序，像下面那样输入两个整数，如果它们的差值小于等于10，则显示它们的差小于等于10，否则显示他们的差大于11。

#include<stdio.h>

int main(void)
{
	int a, b;

	printf("请输入两个整数\n");
	printf("整数A："); scanf("%d", &a);
	printf("整数B："); scanf("%d", &b);

	if (a - b < 10 || a - b == 10)
		printf("它们的差小于等于10");
	else
		printf("它们的差大于等于11");
        
	return 0;
}
