#include <stdio.h>
void set_mode(int *n)
{
    if(*n>1) {printf("please enter 1 or 0.");
    scanf("%d",n);
    if(*n==1) printf("US mode used.");
    else printf("metric mode used.");
} 
}
void get_info(int *n,double *f,double *r)
{
    if(*n==0) printf("enter distance traveled in kilometers:");
    else printf("enter distance traveled in miles:");
    scanf("%lf",r);
    if(*n==0) printf("enter fuel consumed in liters:");
    else printf("enter fuel consumed in gallons:");
    scanf("%lf",f);
    
}
void show_info(int *n,double *f,double *r)
{
    double fu,ra;
    fu=*f;
    ra=*r;
    if(*n==0) printf("fuel consumption is %f liters per 100 km.\n",(fu/ra)*100);
    else printf("fuel consumption is %f miles per gallons.\n",ra/fu);
}
int main(int argc,char *argv[])
{
    int mode;
    double fuel,range;
    int *m=&mode;
    double *f=&fuel;
    double *r=&range;
    printf("enter 0 for metric mode,1 for US mode(-1 to quit):");
    scanf("%d",&mode);
    while(mode>=0){
        set_mode(&mode);
        get_info(&mode,&fuel,&range);
        show_info(&mode,&fuel,&range);
        printf("enter 0 for metric mode,1 for US mode(-1 to quit):");
        scanf("%d",&mode);
    }
    return 0;
}
