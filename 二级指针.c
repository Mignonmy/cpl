//用指针变量作为参数 在main中调用函数
//函数判断是否为素数，并返回其阶乘值
#include <stdio.h>
int find(int **a) //声明二级指针，几级指针有几个*
{
    int i;
    printf("%d",**a); //**a为二级指针的值
    for(i=2;i<(**a);i++){
        if((**a)%i==0) {
            printf(" is not a prime\n");
            break;
        }
        
    }
    if(i==(**a)) printf(" is a prime\n");
    int sum=1;
    int k=1;
    while(k<=(**a)){
        sum*=k;
        k++;
    }
    return sum;
}
int main(void)
{
    int num;
    int *s;
    s=&num;
    printf("please enter you num:");
    scanf("%d",&num);
    int result;
    result=find(&s);
    printf("%d",result);
    return 0;
}
//关于二级指针的疑惑参考二级指针的验证
