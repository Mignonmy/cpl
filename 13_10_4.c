#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    float sum=0.0,num;
    int cnt=0;
    FILE *fp;
    if(argc==1){
        fp=stdin;
        printf("please enter the num:");
    }
    else if (argc==2){
        if((fp=fopen(argv[1],"r"))==NULL) {
            printf("can not open %s\n",argv[1]);
            exit(EXIT_FAILURE);
        }
    }
    while(!feof(fp)&&(fscanf(fp,"%f",&num))==1)
    {
        cnt++;
        sum+=num;
    }
    printf("the average of all number is:%f",sum/cnt);

    return 0;
}
