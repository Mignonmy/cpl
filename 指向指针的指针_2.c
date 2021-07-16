#include <stdio.h>
int main()
{
    char a[5]={1,3,5,7,9};
    char *s[5]={&a[0],&a[1],&a[2],&a[3],&a[4]};
    char **p;
    int i;
    
    for(i=0;i<5;i++)
    {
        p=s+i;//不断更新指针，如果指针定义在循环外则在i的第一次赋值时，指针便不可修改
        printf("the result is %d.\n",**p); 
    }
    
    return 0;
}
