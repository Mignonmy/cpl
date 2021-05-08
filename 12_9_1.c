#include <stdio.h>
int c(int t)
{
    printf("no luck,my friend!try again:");
    scanf("%d",&t);
    return t;
}
int main()
{
    int unit=0;
    printf("how many pounds to a firkin of butter?\n");
    scanf("%d",&unit);
    while(unit!=56){
        unit=c(unit);
    }
    printf("you must have look at it.\n");
    return 0;
}
