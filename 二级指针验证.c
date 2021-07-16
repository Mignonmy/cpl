#include <stdio.h>
int main(void)
{
    int a=10;
    int *p;
    int **t;
    p=&a; //将a的地址给指针p
    t=&p; //将指针p的地址给指针t，此时指针t是一个二级指针
    printf("a存放着%d\n",a); 
    printf("a的本身地址为%p\n",&a);
    printf("p指针存放着%p\n",p);
    printf("p指针指向变量的值为%d\n",*p);
    printf("p指针的本身地址为%p\n",&p);
    printf("t指针存放着%p\n",t); //这应该是p指针的本身地址
    printf("t指针指向指针的值为%p\n",*t); //这里应该是a的地址
    printf("t指针指向指针指向的指针的值为%d\n",**t); //这里应该是a
    printf("t的本身地址为%p\n",&t);
    return 0;
}
