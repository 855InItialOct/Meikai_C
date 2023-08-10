//对代码清单3-17的程序进行修改，不使用if语句，用switch语句来实现。

#include<stdio.h>

int main(void)
{
	int a;

	printf("请输入月份：");
	scanf("%d", &a);

	switch (a)
	{
        case 3 :
        case 4 :
        case 5 : printf("春天！"); break;
        case 6 :
        case 7 :
        case 8 :  printf("夏天！"); break;
        case 9 :
        case 10:
        case 11: printf("秋天！"); break;
        case 12:
        case 1 :
        case 2 : printf("冬天！"); break;
        default: printf("该月份不存在！！"); break;
	}

	return 0;
}
