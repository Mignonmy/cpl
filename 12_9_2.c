#include <stdio.h>
#include "12_9_2.h"
int main(int argc,char *argv[])
{
    printf("enter 0 for metric mode,1 for US mode(-1 to quit):");
    scanf("%d",&mode);
    while(mode>=0){
        set_mode(mode);
        get_info();
        show_info();
        printf("enter 0 for metric mode,1 for US mode(-1 to quit):");
        scanf("%d",&mode);
    }
    return 0;
}

void set_mode(int n)
{
    if(n>1){ printf("please enter 1 or 0.");
    scanf("%d",&mode);}
    if(mode==1) printf("US mode used.");
    else printf("metric mode used.");

}
void get_info(void)
{
    if(mode==0) printf("enter distance traveled in kilometers:");
    else printf("enter distance traveled in miles:");
    scanf("%lf",&range);
    if(mode==0) printf("enter fuel consumed in liters:");
    else printf("enter fuel consumed in gallons:");
    scanf("%lf",&fuel);
    
}
void show_info(void)
{
    if(mode==0) printf("fuel consumption is %f liters per 100 km.\n",(fuel/range)*100);
    else printf("fuel consumption is %f miles per gallons.\n",range/fuel);
}
