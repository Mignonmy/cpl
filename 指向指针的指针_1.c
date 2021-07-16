#include <stdio.h>
int main()
{
    char *name[]={"i","can","live"};
    char **p;
    int i;
    for(i=0;i<4;i++)
    {
        p=name+i; //使用指向指针的指针
        printf("%s\n",*p) ;//有时候printf的参数是**p,要看指针指向的原始变量是否是数组
    }

}
