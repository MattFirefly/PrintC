#include <stdio.h>
#include <stdlib.h>

int main() {
    putchar(97);

    printf("\n");
    puts("���");

    printf("NUmber:%d\n,Unsigned Int:%u\n",12,20);//�޷����ǲ���д������

    printf("%o\n",8);//8����

    printf("%x\n",15);//16����
    printf("%X\n",15);//16����

    printf("%f\n",3.14);//����
    printf("%.2f\n",3.14);//����

    printf("%c\n",'a');//�ַ�
    printf("%s\n","hello word");//�ַ���

    printf("%3d\n",20);
    printf("%03d\n",20);
    printf("%03d\n",2);
    printf("%03d\n",100);

//    puts("����̨����");
//    char inputchar =getchar();
//    printf("������ַ���%c\n",inputchar);

    char dist;//�ڴ�ֻ��1���ַ�
    scanf("%c",&dist);//&�ҵ��ڴ�λ�ã����û�����

    printf("�û��������%c\n",dist);

    char buf[100];
    scanf("%s",buf);
    printf("User input String is %s\n",buf);
    return EXIT_SUCCESS;
}