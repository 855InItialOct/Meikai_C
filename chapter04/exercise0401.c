//代码清单3-9是判断所输入的整数符号的程序，请将其改写为可将输入显示这一过程循环任意次。

#include <stdio.h>

int main(void)
{
    int a;
    int b;
    
    do {
        printf("请输入一个整数：");
        scanf("%d", &a);

        if (a == 0)
            puts("该整数为0。");
        else if (a > 0)
            puts("该整数为正数。");
        else
            puts("该整数为负数。");

        printf("要重复一次吗？【yes  0/No  1】：");
        scanf("%d", &b);
    } while (b == 0);

    return 0;
}
