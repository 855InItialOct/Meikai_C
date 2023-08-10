//编写一段程序，像下面这样输入三个整数，
/*
如果三个数都相等，则显示"三个值都相等"，
如果两个相等则显示有两个相等，
如都不符合，则显示，全部不相等。
*/

#include<stdio.h>

int main(void)
{
	int a, b, c;

	puts("请输入三个值");
	printf("整数1："); scanf("%d", &a);
	printf("整数2："); scanf("%d", &b);
	printf("整数3："); scanf("%d", &c);

	if (a == b && b == c)
		printf("他们三个都相等。");
	else if (a == b || a == c || b == c)
		printf("他们三个有两个相等。");
	else
		printf("他们三个都不想等");
        
	return 0;
}
