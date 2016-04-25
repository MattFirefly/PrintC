#include <stdio.h>
#include <stdlib.h>

int main() {
    putchar(97);

    printf("\n");
    puts("输出");

    printf("NUmber:%d\n,Unsigned Int:%u\n",12,20);//无符号是不能写负数的

    printf("%o\n",8);//8进制

    printf("%x\n",15);//16进制
    printf("%X\n",15);//16进制

    printf("%f\n",3.14);//浮点
    printf("%.2f\n",3.14);//浮点

    printf("%c\n",'a');//字符
    printf("%s\n","hello word");//字符串

    printf("%3d\n",20);
    printf("%03d\n",20);
    printf("%03d\n",2);
    printf("%03d\n",100);

//    puts("控制台输入");
//    char inputchar =getchar();
//    printf("输入的字符是%c\n",inputchar);

    char dist;//内存只有1个字符
    scanf("%c",&dist);//&找到内存位置，由用户擦入

    printf("用户输入的是%c\n",dist);

    char buf[100];
    scanf("%s",buf);
    printf("User input String is %s\n",buf);
    return EXIT_SUCCESS;
}