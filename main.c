#include <stdio.h>
#define _CRT_SECURE_NO_WARINGS 1
/*生命周期
 * 局部变量的生命周期：进入其所在的局部范围开始，到出局部范围结束
 * 全局变量的生命周期：程序的生命周期
 * */
int main() {
    int input = 0;
    printf("每天敲代码：>");
    printf("那你要好好学习吗（0/1）？\n");
    scanf("%d",&input);
    if(input==1)
        printf("好offer");
    else
        printf("卖红薯\n");
    return 0;
}
